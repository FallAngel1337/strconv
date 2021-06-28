#include <stdio.h>
#include "strconv.h"

int main(void) {
    printf("str2int(%s) = %d\n", "1010", str2int("1010"));
    printf("int2str(%d) = %s\n", 10, int2str(10, NULL, 2));
}