#include <stdio.h>
#include <stdlib.h>
#include "mysterious.h"


int main()
{
  // Déclaration et initialisation des variables et constantes du programme
  const int MIN = 1;
  const int MAX = 100;
  int hiddenValue = 0;
  int userAttempt = 0;
  int userScore = 0;

  //Insertion d'une valeur aléatoire à l'interieur de la valeur à trouver
  hiddenValue = aleaGenVal(MIN, MAX);

  //Debut de la partie de guessing
  printf("veuillez entre une valeur comprise entre %d et %d\n", MIN, MAX);
  do
  {
    userScore++; // Incrémentation du nombre de tentatives

    // Enregistrement de la valeur entrée par l'utilisateur
    scanf("%d", &userAttempt);

    /* test sur la valeur entrée par l'utilisateur */
    if( userAttempt < hiddenValue)
    {
      printf("Le nombre mystere est plus grand Essayez encore\n");
    }
    if(userAttempt > hiddenValue)
    {
      printf("Le nombre mystere est plus petit Essayez encore\n");
    }

    if( userAttempt == hiddenValue)
    {
      printf("Felicitation ! Vous avez trouve le nombre de tentatives en %d coups", userScore);
    }

  } while (userAttempt != hiddenValue);
  
  return (0);
}