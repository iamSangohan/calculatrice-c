/**
    * @file division.c
    * @author iamSangohan (MENSAH Luc Germain)
    * @version 0.1
    * @date 2023-02-24
    * Ce code est la definition de la fonction division declarée dans le fichier division.h
*/

#include "division.h"

/**
    * @fn double division(int a, int b)
    * @brief Fonction qui effectue une division
    * @return La division des deux nombres
    * @see division.h
*/
double division(int a, int b){
    double division = (double)a/b;
    return division;
}