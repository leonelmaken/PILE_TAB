#include <stdio.h>
#include <stdlib.h>
#include  "PILE.h"
Pile nouvel_pile(void)
{
   return NULL;
}
/*---------------------------------------------------------------*/
Bool pile_vide(Pile p)
{
    if(p == NULL)
        return true;
    return false;
}
/*---------------------------------------------------------------*/
Pile ajout_element(Pile p,int x)
{
    PileElement *element;
    element = malloc(sizeof(*element));
    if(element == NULL)
    {
        fprintf(stderr,"probleme allocation dynamique");
        exit(EXIT_FAILURE);
    }
    element -> valeur = x;
    element -> suivant = p;
    return element;
}
/*---------------------------------------------------------------*/
Pile clear_pile(Pile p)
{
    PileElement *element;
    if(pile_vide(p))
        return nouvel_pile();
    element = p ->suivant;
    free(p);
    return clear_pile(element);
}
/*---------------------------------------------------------------*/
void affiche_pile(Pile p)
{
    if(pile_vide(p))
    {
        printf("pile vide rien a afficher.\n");
        return;
    }
    while(!pile_vide(p))
    {
        printf("[%d]\n",p->valeur);
        p = p->suivant;
    }
}
/*---------------------------------------------------------------*/
Pile depiler(Pile p)
{
    PileElement *element;
    if(pile_vide(p))
    {
        return nouvel_pile();
    }
    element =  p->suivant;
    free(p);
    return element;
}
/*---------------------------------------------------------------*/
int sommet_pile(Pile p)
{
    if(pile_vide(p))
    {
        printf("la pile est vide.");
        return -1;
    }
    return p->valeur;
}
/*---------------------------------------------------------------*/
int longuer_pile(Pile p)
{
    int compt = 0;
    while(!pile_vide(p))
    {
        compt++;
        p =   p->suivant;
    }
    return compt;
}
