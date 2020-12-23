#include <stdio.h>

enum day {MON,TUE,WEDS,THU,FRI,SAT,SUN};

int main(int argc, char *argv){

    enum day d = MON;
    //printf("%d", d);

    switch (d)
    {
    case MON /* constant-expression */:
        printf("Looks like someones got the case of the Moooondays");
        break;
    case WEDS /* constant-expression */:
        printf("HUMP DAY");
        break;
    case FRI /* constant-expression */:
        printf("Tip your bartender");
        break;
    default:
        break;
    }

    return 0;
}