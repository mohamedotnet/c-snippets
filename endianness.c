#include<stdio.h>

int main(){
        int tnumber = 2453; /*a number to test on endianness*/
        unsigned char *p = (unsigned char *) &tnumber;
        unsigned char mask = (unsigned char)tnumber;
        if (p[0] == mask) printf("This is a little endian machine\n");
        else printf("This is a big endian machine\n");
        return 0;
}
