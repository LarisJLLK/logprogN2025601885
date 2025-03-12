#include <stdio.h>
#include <math.h>

int main()
{
    int L=2;
    float L1 = (1.0/4.0*L);//1/4
    float A = (1.0/2.0*L);//mitad de L
    float L2 = (3.0/2.0*L);//3/2
    float B = sqrt((L2*L2) +(4.0));
    float C = (L2*L) / 2.0;//4
    float D = pow(L,2)*L1;//5
    float A1= sqrt((4.0) + (4.0));//1
    float A2 = pow(L,2)/2.0;//2

    float pt = ((2*L1)+(4.0)+(2*A)+B+(2*A1)+L2);
    printf("El valor de pt es: %f\n", pt);

    float at = (2*A2)+(4.0)+D+C;
    printf("El valor de AT es: %f\n", at);

    return 0;
}

