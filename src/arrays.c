#include <stdio.h>

double getAvg(double arr[], int size);

int main() {
    
    int nums[3] = {1,2,3};
    double d[] = {3.14, 9.01, 6.81};

    nums[0] = 3;
    d[2] = 7.81;

    for (int i = 0; i < 3; i++)
    {
        printf("nums %i : %i at %p; d %i : %lf at %p\n",i,nums[i],&nums[i],i,d[i],&d[i]);
    }

    printf("%p\n",nums);
    printf("%i\n",*nums);
    
    printf("Avg of d: %lf",getAvg(d,3));

    return 0;
}
double getAvg(double arr[], int size){
    double sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum / size;
}




