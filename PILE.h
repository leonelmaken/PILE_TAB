#ifndef PILE_H_INCLUDED
#define PILE_H_INCLUDED
/*type bool*/
typedef enum
{
    false,
    true,
}Bool;
/*definition d'une pile*/
typedef struct PileElement
{
    int valeur;
    struct PileElement *suivant;
}PileElement,  *Pile;
/*fonctions a executer sur une pile*/
Pile nouvel_pile(void);
Bool pile_vide(Pile p);
Pile ajout_element(Pile p,int x);
Pile clear_pile(Pile p);
Pile depiler(Pile p);
int sommet_pile(Pile p);
int longuer_pile(Pile p);
void affiche_pile(Pile p);

#endif // PILE_H_INCLUDED
