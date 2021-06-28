#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <assert.h>

#include "strconv.h"

static const char map_int2str[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

int str2int(const char *__restrict__ _str) 
{
    int n = 0;
    for (int i=0, p=(int)strlen(_str)-1; i < (int)strlen(_str); i++,p--) {
        n += (_str[i]-48)*(int)pow(10, p);
    }

    return n;
}

char* int2str(const int num, char *_buf, size_t _d)
{
    if (!_buf) _buf = calloc(1, _d);
    int tmp = num;
    char temp[_d];
    for (int i=0; i < _d; i++) {
        temp[i] = map_int2str[tmp%10];
        tmp /= 10;
    }

    for (int i=_d-1, j=0; i >= 0; i--, j++) {
        _buf[j] = temp[i];
    }

    return _buf;
}