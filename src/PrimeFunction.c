#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

bool isPrime(int n);

int main(int argc, char *argv){

    for (int i = 0; i < 25; i++)
    {
        if (isPrime(i)) printf("%i\n",i);
    }
    return 0;
}
bool isPrime(int n){

    for (int i = 2; i <= n/2; i++)
    {
        if(n % i == 0) return false;
    }
    return true;
}