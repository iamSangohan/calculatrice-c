/**
    * @file somme.c
    * @author iamSangohan (MENSAH Luc Germain)
    * @version 0.1
    * @date 2023-02-24
    * Ce programme permet de faire la somme de deux nombres
*/

#include "somme.h"

/**
    * @fn int somme(int a, int b)
    * @brief Fonction qui permet de faire la somme de deux nombres
    * @param a Premier nombre
    * @param b Deuxieme nombre
    * @return somme La somme des deux nombres
    * @see somme.h
*/
int somme(int a, int b){
    int somme = a+b;
    return somme;
}