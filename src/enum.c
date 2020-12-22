#include <stdio.h>

enum day {MON,TUE,WEDS,THU,FRI,SAT,SUN};

int main(int argc, char *argv){

    enum day d = TUE;
    printf("%d", d);
    return 0;
}