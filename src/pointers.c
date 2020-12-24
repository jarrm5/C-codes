#include <stdio.h>

void pointerSwap(int *a, int *b);
void printArrayAddresses(int *arr, int length);
int* expandArraySize(int arr[], int length);

int main(int argc, char *argv){

    //Pointer basics
    char c = 'g';
    char* cPtr = &c;

    printf("c: %c at %p\n", c,&c);
    printf("cPtr: %c at %p\n", *cPtr,cPtr);

    c = 'h';

    printf("%c\n",c);
    printf("%c\n",*cPtr);

    *cPtr = 'i';

    printf("%c\n",c);
    printf("%c\n",*cPtr);

    //Pointers and arrays
    char myChars[] = "TGO";
    printf("&myChars[0] %p == &myChars %p\n",&myChars[0],myChars);
    printf("myChars[0] %c == *myChars %c\n",myChars[0],*myChars);
    printf("myChars[1] %c == *myChars + 1 %c\n",myChars[1],*(myChars+1));



    int nums[] = {1,2,3,4};
    int *numPtr = nums;
    numPtr = expandArraySize(nums,4);
    numPtr[4] = 5;
    printArrayAddresses(numPtr,5);

    return 0;
}
void pointerSwap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void printArrayAddresses(int *arr, int length){
    for (int i = 0; i < length; i++)
    {
        printf("%i : %i\n",i,*(arr+i));
    }
}
int* expandArraySize(int arr[], int length){
    int arrCopy[length * 2];
    int *arrPtr = arrCopy;
    for (int i = 0; i < length; i++)
    {
        arrCopy[i] = arr[i];
    }
    return arrPtr;
}
