#include <stdio.h>

void extScopeFunction();
void staticScopeFunction();

int a = 0;

int main(int argc, char *argv){

    printf("global a = %i\n",++a);
    extScopeFunction();

    staticScopeFunction();
    staticScopeFunction();
    
    return 0;
}
void extScopeFunction(){
    printf("global a = %i\n",++a);
}
void staticScopeFunction(){
    //Value is not reset during each function call
    static int s = 0;
    printf("static a = %i\n",++s);
}