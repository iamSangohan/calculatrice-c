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

/**
    * @fn int main(int argc, char *argv[])
    * @brief Fonction principale du programme
    * @param argc Nombre d'arguments
    * @param argv Tableau des arguments
*/
int main(int argc, char *argv[]){
    /** 
        * On recupere les deux variables a et b entrées par l'utilisateur
    */
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    printf("Les variables sont : %d et %d\n", a, b);

    /**
        * On affiche le menu de l'application
    */
    printf("Quelle operation voulez-vous faire ?\n");
    printf("1 - Somme\n");
    printf("2 - Soustraction\n");
    printf("3 - Produit\n");
    printf("4 - Division\n");
    printf("5 - Quitter\n");

    /**
        * On recupere le choix de l'utilisateur
    */
    int choix = 0;
    printf("Votre choix : ");
    scanf("%d", &choix);

    /**
        * On effectue l'operation choisie par l'utilisateur
    */
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