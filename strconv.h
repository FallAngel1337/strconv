#ifndef _STRCONV_H
#define _STRCONV_H

#include <stddef.h>

int str2int(const char *__restrict__ _str) ;
char* int2str(const int num, char *_buf, size_t _d);

#endif /* _STRCONV_H */