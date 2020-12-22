#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv){

    char inputFileName[50],outputFileName[50];

    FILE *ifptr, *ofptr;
    char c;

    printf("Please enter the file name to read: ");
    scanf("%s", inputFileName);

    if ((ifptr = fopen(inputFileName,"r")) == NULL) {
        printf("That file does not exist.");
        exit(1);
    }

    fflush(stdin);

    printf("Please enter the file name to write to: ");
    scanf("%s", outputFileName);

    if ((ofptr = fopen(outputFileName,"r+")) == NULL) {
        printf("\nThat file does not exist. Creating output.txt..");
        ofptr = fopen("output.txt","w");
    }

    while((c=fgetc(ifptr)) != EOF){
        fputc(c,ofptr);
    }

    fclose(ifptr);
    fclose(ofptr);

    return 0; 
}