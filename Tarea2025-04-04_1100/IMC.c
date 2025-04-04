#include <stdio.h>
int main()
{
    double peso, estatura, iMC;

    printf ( "¿cual es su peso (KG)?" );
   scanf("%d",&peso);
    printf ("¿cual es su estatura (M)?");
    scanf("%d",&estatura);
    iMC = peso / estatura * estatura;
    if (iMC >= 40.0) {
        printf ("Obesidad clase 3");
    } else {
        if (iMC >= 35.0) {
            printf ("Obsesidad clase 2");
        } else {
            if (iMC >= 30.0) {
                printf ("obesidad clase 1");
            } else {
                if (iMC >= 25.0) {
                    printf ("sobre peso");
                } else {
                    if (iMC >= 18.5) {
                        printf ("normal");
                    } else {
                        if (iMC <= 18.4) {
                            printf ("bajo peso");
                        } else {
                            printf ("cadaver");
                        }
                    }
                }
            }
        }
    }
    return 0;
}
