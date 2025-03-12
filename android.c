#include <stdio.h>
#include <math.h>

int main()
{
    int L=7;
    float A1= pow(L,2);//pecho
    float A2= ((1.0/5.0*L) * (3.0/5.0*L));//brazos
    float A3= ((1.0/5.0*L) * (1.0/5.0 * L));//pies

    float pt = ((23.0/5*L) + (3.1416*L/2));
    printf ("El valor de PT es: %f\n", pt);

    float r= 3.5; //RADIO
    float at =(A1 + (2*A2) + (2*A3) + (3.1416*pow(r,2)/2) );
    printf ("El valor de AT es: %f\n", at);

return 0;
}
