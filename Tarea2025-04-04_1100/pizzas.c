#include <stdio.h>

int main()
{
    int pizza, pizzav, pizzanov;

    printf ( "¿que tipo de pizza desea? 1.- vegetariana 2.- no vegetariana\n");
    scanf("%d",&pizza);
    if (pizza == 1) {
        printf ("Ingredientes para pizza vegetariana, elija uno: 1.- pimiento 2.-tofu\n");
        scanf("%d",&pizzav);
        if (pizzav == 2) {printf ("Su pizza es vegetariana y todos sus ingredientes son mozzarella, tomate y tofu");}
        else {printf ("Su pizza es vegetariana y todos sus ingredientes son: mozzarella, tomate y pimiento");}
    }
        else {
            printf ("Ingredientes para pizza no vegetariana, elija uno: 1.-peperoni 2.-jamon  3.-salmon\n");
        scanf("%d",&pizzanov);
        if (pizzanov == 1) {printf ("Su pizza no es vegetariana y todos sus ingredientes son: mozzarella, tomate y peperoni");}
         else {
            if (pizzanov == 2) {printf ("Su pizza no es vegetariana y todos sus ingredientes son: mozzarella, tomate y jamon");}
        else {
            if (pizzanov == 3) {printf ("Su pizza no es vegetariana y todos sus ingredientes son: mozzarella, tomate y salmon");}
                 else {printf ("no existe en el menu");}
            }
        }
    }
    return 0;
}
