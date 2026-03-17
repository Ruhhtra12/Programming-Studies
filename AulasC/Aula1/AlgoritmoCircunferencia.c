#include <stdio.h>
#include <math.h>
#define PI 3.14
int main(){
    float R,T ;
    scanf("%f",&R);
    T = PI * pow(R,2);
    printf("O valor da area é : %0.2f\n",T);
    return 0;
}