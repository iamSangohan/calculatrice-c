/**
     * @file soustraction.c
     * @author iamSangohan (MENSAH Luc Germain)
     * @version 0.1
     * @date 2023-02-24
     * Ce code est la definition de la fonction soustraction declarée dans le fichier soustraction.h
*/

#include "soustraction.h"

/**
    * @fn int soustraction(int a, int b)
    * @brief Fonction qui effectue une soustraction
    * @return La soustraction des deux nombres
    * @see soustraction.h
*/
int soustraction(int a, int b){
    int soustraction = a-b;
    return soustraction;
}