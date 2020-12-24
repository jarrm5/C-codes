#include <stdio.h>
#include <string.h>

int main(int argc, char *argv){

    char c[8] = "pie";
    char *cPtr = c;
    
    printf("%s\n",c);
    printf("%li\n",strlen(c));
    strcat(c,"hole");
    printf("%s\n",c);

    return 0;
}
