#include <stdio.h>
#include <string.h>

int getLength(char* s);

int main(int argc, char *argv){

    char c[8] = "pie";
    char *cPtr = c;
    
    printf("%s\n",c);
    printf("%li\n",strlen(c));
    strcat(c,"hole");
    printf("%s\n",c);

    printf("%i",getLength(c));

    return 0;
}
int getLength(char* s){
    return strlen(s);
}