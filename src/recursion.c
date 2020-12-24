#include <stdio.h>
#include <string.h>

int sum(int n);
void reverseString(char* s);

int main() {
    
    char s[3] = "pie";
    reverseString(s);

    return 0;
}


int sum(int n) {
    if (n != 0)
        return n + sum(n-1); 
    else
        return n;
}
void reverseString(char* str){
    if(*str){
        reverseString(str+1);
        printf("%c", *str);
    }

}