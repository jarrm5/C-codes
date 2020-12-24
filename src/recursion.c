#include <stdio.h>
#include <string.h>

int sum(int n);
char* reverseString(char* str);

int main() {
    
    char s[] = "pie";
    printf("%s",reverseString(s));

    return 0;
}


int sum(int n) {
    if (n != 0)
        return n + sum(n-1); 
    else
        return n;
}
char* reverseString(char* str){
    if(strlen(str) <= 1) return str;
    return strcat(reverseString(str+1),str);
}