/**
    * @file produit.c
    * @author iamSangohan (MENSAH Luc Germain)
    * @version 0.1
    * @date 2023-02-24
    * Ce code est la definition de la fonction produit declarée dans le fichier produit.h
*/

#include "produit.h"

/**
    * @fn int produit(int a, int b)
    * @brief Fonction qui effectue un produit
    * @param a Premier nombre
    * @param b Deuxieme nombre
    * @return Le produit des deux nombres
    * @see produit.h
*/
int produit(int a, int b){
    int produit = a*b;
    return produit;
}