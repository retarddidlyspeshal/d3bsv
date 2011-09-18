#include <string>
#include <stdint.h>
#include <stdarg.h>
#include <winsock2.h>

#ifndef UTILITIES_H
#define UTILITIES_H


void ArrayToString(uint8_t * buf_in,unsigned int buflen, std::string * StringOut);

static void SetSocketNonBlocking(SOCKET &s);

#endif