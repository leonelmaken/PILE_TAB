#include <stdio.h>
#include <stdlib.h>
#include  "PILE.h"
int main()
{
    printf("Hello world!\n");
    int choix,rep;

    Pile mapile = nouvel_pile();
    if(pile_vide(mapile))
        printf("la pile est vide.\n");
    else
        affiche_pile(mapile);
            printf("\n-----------------------------\n");
    mapile = ajout_element(mapile,14);//on empile une suite d'elements
    mapile = ajout_element(mapile,47);
    mapile = ajout_element(mapile,12);
    mapile = ajout_element(mapile,99);
    affiche_pile(mapile);
    printf("la pile est pleine.\n");
    mapile = depiler(mapile);
    affiche_pile(mapile);
    printf("affiche le sommet de la pile : %d\n",sommet_pile(mapile));
    printf("affiche la taille de la pile : %d\n",longuer_pile (mapile));
    affiche_pile(mapile);//on affiche
    if(pile_vide(mapile))
        printf("la pile est vide.\n");
    else
        printf("la pile est pleine.\n");
   mapile = clear_pile(mapile);//on vide la pile
           printf("\n-----------------------------\n");
    if(pile_vide(mapile))
        printf("la pile est vide.\n");
    else
        printf("la pile est pleine.\n");

   mapile = depiler(mapile);
    affiche_pile(mapile);
    printf("affiche le sommet de la pile : %d\n",sommet_pile(mapile));
    printf("affiche la taille de la pile : %d\n",longuer_pile (mapile));
  return 0;
}
