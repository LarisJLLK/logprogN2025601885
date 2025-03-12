#include <stdio.h>
#include <math.h>

int main()
{
    int L=7;
    float at= 2*3*L*L + (2*3*L*L)/2.0 + M_PI*pow(3*L/2.0,2)/2;
    printf ("El valor de AT es: %f\n", at);

    float a=pow(L,2) + pow(3*L,2);
    float pt= (M_PI*3*L)/2 + 2*sqrt(a) + 7*L;
    printf ("El valor de PT es: %f\n", pt);

return 0;
}

