#include <stdio.h>

int main()
{
    int L=12;
    const float iva=16.0, mcu=9256.00;
    float ar = (L * (1.0/2.0*L));
    printf ("El valor de la area del romboide es: %f\n", ar);

    float br= pow(L,2) - pow(1.0/2.0*L,2);
    float b= sqrt(br);
    printf ("El valor del lado b del triangulo rectangulo es: %f\n", b);

    float atr= ((1.0/2.0*L) * L /2 );
    printf ("El valor de la area del triangulo rectangulo es: %f\n", atr);

    float precio= ((ar+br+atr) * mcu * iva);
    printf ("El precio del terreno es: %f\n", precio);
}
