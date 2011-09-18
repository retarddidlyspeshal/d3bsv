#include <stdio.h>
#include <string.h>
#include <iostream>

#include "rpcproc.h"

using namespace std;

unsigned char* get_varint32(unsigned char*currentpos, int remainingbytes, int* aval) {
*aval = 0;
int abyte;
int counter=0;
while (1) {
if (remainingbytes == 0)
return 0; //exit with error if we cant consume more bytes;
abyte = *currentpos;
*aval |= (abyte & 0x7f) << counter;
counter += 7;
currentpos ++;
#ifdef rcp_headers_debug
cout << hex << abyte << endl;
#endif
remainingbytes--;
if ((abyte & 0x80) == 0) break;
}
return currentpos;
}
unsigned char* get_varint64(unsigned char*currentpos, int remainingbytes, int* aval) {
*aval = 0;
int abyte;
int counter=0;
while (1) {
if (remainingbytes == 0)
return 0; //exit with error if we cant consume more bytes;
abyte = *currentpos;
*aval |= (abyte & 0x7f) << counter;
counter += 7;
currentpos ++;
remainingbytes--;
#ifdef rcp_headers_debug
cout << hex << abyte << endl;
#endif
if ((abyte & 0x80) == 0) break;
}
return currentpos;
}

unsigned char* add_varint(unsigned char*currentpos, int val) {
int counter=0;
while (1) {
*currentpos = val & 0x7f;
counter += 7; val = val >> counter;
if (val != 0)
*currentpos |= 0x80;
currentpos++;
if (val == 0) { *currentpos = 0; break; }
}
return currentpos;
}

unsigned char* procheader(unsigned char* datastream, int size, prpcheader aheader) {
unsigned char* currentpos = datastream;
#ifdef rcp_headers_debug
cout << endl;
cout << "====== packet =====" << endl;
cout << "size: " << size << endl;
#endif

if (size == 0)
return 0;
aheader->service = *currentpos;
currentpos++;
#ifdef rcp_headers_debug
cout << "unknow_var0: " << showbase << hex << (aheader->service) << endl;
#endif

aheader->method = 0;
currentpos = get_varint32(currentpos, (int)(currentpos-datastream), &(aheader->method));
if (currentpos == 0)
return 0;
#ifdef rcp_headers_debug
cout << "unknow_var1: " << aheader->method << endl;
#endif

if ((int)(currentpos-datastream) < 2)
return 0;
aheader->reqid = *((unsigned short*) currentpos);
currentpos += 2;
#ifdef rcp_headers_debug
cout << "unknow_var2: " << aheader->reqid << endl;
#endif

if (aheader->service != 0xfe) {
aheader->unknow4 = 0;
//this is suposed to be a 64 bytes var:
currentpos = get_varint64(currentpos, (int)(currentpos-datastream), &(aheader->unknow4));
if (currentpos == 0)
return 0;
#ifdef rcp_headers_debug
cout << "unknow_var3: " << aheader->unknow4 << endl;
#endif
}

currentpos = get_varint32(currentpos, (int)(currentpos-datastream), &(aheader->datasize));
if (currentpos == 0)
return 0;
#ifdef rcp_headers_debug
cout << "size: " << aheader->datasize << endl;
#endif

aheader->sizing.headerstart = datastream;
aheader->sizing.headerlength = (unsigned int) (currentpos-datastream);
aheader->sizing.messagepos = currentpos;
aheader->sizing.messagelength = aheader->datasize;
aheader->sizing.totallength = aheader->sizing.messagelength + aheader->sizing.headerlength;
aheader->sizing.nextmessagepos = (aheader->sizing.headerstart + aheader->sizing.totallength);
return currentpos;
}
