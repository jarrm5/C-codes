#include <stdio.h>
#include <stdlib.h>

void addElem(int toAdd, int *ptr, int end);

int main(int argc, char *argv){

    int size = 5 * sizeof(int);
    int *ptr = (int*)malloc(size);

    if (ptr == NULL){
        printf("The memory could not be allocated.");
        exit(1);
    }

    

    free(ptr);

    return 0;
}
void addElem(int toAdd, int *ptr, int end){
    if(ptr == end){
        //return pointer from malloc()
        //set the end to the new size of allocation
    }
    *(++ptr) = toAdd;
}


