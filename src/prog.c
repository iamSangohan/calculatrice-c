#include <somme.h>
#include <soustraction.h>
#include <produit.h>
#include <division.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    printf("Les variables sont : %d et %d\n", a, b);

    printf("Quelle operation voulez-vous faire ?\n");
    printf("1 - Somme\n");
    printf("2 - Soustraction\n");
    printf("3 - Produit\n");
    printf("4 - Division\n");
    printf("5 - Quitter\n");

    int choix = 0;
    printf("Votre choix : ");
    scanf("%d", &choix);

    switch(choix){
        case 1:
            printf("La somme de %d et %d est : %d\n", a, b, somme(a, b));
            break;
        case 2:
            printf("La soustraction de %d et %d est : %d\n", a, b, soustraction(a, b));
            break;
        case 3:
            printf("Le produit de %d et %d est : %d\n", a, b, produit(a, b));
            break;
        case 4:
            printf("La division de %d et %d est : %f\n", a, b, division(a, b));
            break;
        case 5:
            printf("Au revoir\n");
            return 0;
        default:
            printf("Erreur de choix\n");
            break;
    }

    return 0;
}