/**
 * @name NANMEGNI NGASSAM
 * @file mysterious.c
 * @date 29/10/2022
 * @brief Implémentation des fonctions necessaires pour le jeu du nombre mystère
 */

#include "mysterious.h"


int aleaGenVal(int min, int max)
{
  int valeur = 0;

  srand(time(NULL));
  valeur = (rand()%(max-min+1)) + min;

  return valeur;
}