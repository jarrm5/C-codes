#include <stdio.h>

int main(int argc, char *argv){

    int i;
    char c;
    double d;
    unsigned int u;
    float f;

    printf("int: %lu bytes\n",sizeof(i));
    printf("char: %lu bytes\n",sizeof(c));
    printf("double: %lu bytes\n",sizeof(d));
    printf("unsigned int: %lu bytes\n",sizeof(u));
    printf("float: %lu bytes\n",sizeof(f));

    return 0;
}