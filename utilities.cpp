#include "utilities.h"
#include <stdint.h>


using namespace std;

void ArrayToString(uint8_t * buf_in,unsigned int buflen, string * StringOut) {
	StringOut->clear();
	unsigned int charcount = 0;
	char formatted[4];
	for (unsigned int pos=0; pos<buflen; pos++) {
		sprintf(formatted,"%02x ",buf_in[pos]);
		StringOut->append(formatted);
		charcount+=1;
		if (charcount >= 24) {
			StringOut->append("\n"); charcount = 0;
		}
	}
}

