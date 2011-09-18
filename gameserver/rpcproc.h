#ifndef RPCHEADERS_H
#define RPCHEADERS_H

struct rpcheader {
int service;
int method;
int reqid;
int unknow4;
int datasize;

struct ssize {
	unsigned char * headerstart;
	unsigned int headerlength;
	unsigned char * messagepos;
	unsigned int messagelength;
	unsigned int totallength;
	unsigned char * nextmessagepos;
} sizing;

rpcheader() {
	service = 0;
	method = 0;
	reqid = 0;
	unknow4 = 0;
	datasize  = 0;
};

};

typedef rpcheader* prpcheader;

unsigned char * get_varint32(unsigned char *currentpos, int remainingbytes, int* aval);
unsigned char * get_varint64(unsigned char *currentpos, int remainingbytes, int* aval);
unsigned char * add_varint(unsigned char *currentpos, int val);

unsigned char * procheader(unsigned char * datastream, int size, prpcheader aheader);
void printheader(prpcheader aheader);

#endif