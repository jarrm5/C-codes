#include <stdio.h>

void printArrayAddresses(int arr[], int length);
void pointerSwap(int *a, int *b);

int main(int argc, char *argv){

    int nums[] = {1,2,3,4};
    printArrayAddresses(nums,4);

    return 0;
}
void pointerSwap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void printArrayAddresses(int arr[], int length){
    for (int i = 0; i < length; i++)
    {
        printf("%i : %p\n",i,&arr[i]);
    }
}
