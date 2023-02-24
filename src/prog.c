/**
* @file prog.c
* @author iamSangohan (MENSAH Luc Germain)
* @version 0.1
* @date 2023-02-24
* Ce programme demande à l'utilisateur de saisir une opération
* mathématique et affiche le résultat à l'écran.
* Cela permet à l'utilisateur de faire des simples opérations mathématiques,
* telles que des sommes, des soustractions, des produits et des divisions.
*/

#include <somme.h>
#include <soustraction.h>
#include <produit.h>
#include <division.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    // On stocke les valeurs saisi par l'utilisateur dans les variables a et b
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    printf("Les variables sont : %d et %d\n", a, b);

    // On affiche les choix d'opérations possibles à l'utilisateur
    printf("Quelle operation voulez-vous faire ?\n");
    printf("1 - Somme\n");
    printf("2 - Soustraction\n");
    printf("3 - Produit\n");
    printf("4 - Division\n");
    printf("5 - Quitter\n");

    // On demande à l'utilisateur son choix
    int choix = 0;
    printf("Votre choix : ");
    scanf("%d", &choix);

    // En fonction du choix de l’utilisateur, on affiche le résultat de l'opération
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