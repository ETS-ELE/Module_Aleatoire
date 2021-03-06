/************************************************************************************************/
//Projet   : Projet TP_2_Labyrinthe
//Fichier  : Aleatoire.h
//Contenu  : Contient les fonction relatif a la generation du labyrinthe
//Objectif : Cr�ation d'un algorithme de r�alisation de labyrinthe
//Cr�ation : 1 novembre 2014
//                                                  Cree par Samuel - Link - Geoffroy-Heroux
//                                                            Francis Masse
//                                                            Christopher Dom
//                                                            Vincent Lynch
//
/************************************************************************************************/

/*                                          DEFINE                                              */
/************************************************************************************************/
#ifndef MOD_ALEATOIRE
#define MOD_ALEATOIRE


/************************************************************************************************/

/*                                         INCLUDES                                             */
/************************************************************************************************/
#include "Module_pile.h"
#include "Labyrinthe.h"
#include <time.h>
/************************************************************************************************/

/*                                        DECLARATION                                           */
/************************************************************************************************/
void chemin_aleatoire_ajouter_un_pas(int* chemin[], int* longueur_chemin, int nb_lignes_grille, int nb_colonnes_grille);
/*
CHEMIN_ALEATOIRE_AJOUTER_UN_PAS
Cette proc�dure ajoute un pas � un chemin et ajuste sa longueur. La position du prochain pas est choisie au hasard,
mais doit �tre valide. Si la nouvelle position coupe le chemin existant, la boucle est tronqu�e.
Observez le chemin pr�sent� ici-bas.

Parametre : 	int* chemin[]		--> Pile contenant le chemin[] � trouver.
int* longueur_chemin	--> Longueur de la pile chemin[].
int nb_lignes_grille	--> Limite en i du labyrinthe.
int nb_colonnes_grille	--> limite en j du labyrithe.

Return : 	Void.
*/
/************************************************************************************************/
static int obtenir_prochaine_position(int chemin[], int *longueur_chemin, int nb_lignes_grille, int nb_colonnes_grille);
/*
CHEMIN_ALEATOIRE_AJOUTER_UN_PAS
Cette fonction retourne la prochaine position � visiter � partir de la derni�re position du chemin courant.
La position est choisie au hasard et doit �tre valide. La nouvelle position ne doit donc pas sortir du tableau.
Par exemple, pour le chemin pr�sent� plus haut, la prochaine position est 16, 22 ou 20.

Parametre : 	int* chemin[]		--> Pile contenant le chemin[] � trouver.
int* longueur_chemin	--> Longueur de la pile chemin[].
int nb_lignes_grille	--> Limite en i du labyrinthe.
int nb_colonnes_grille	--> limite en j du labyrithe.

Return : 	int Prochaine position valide.
*/
/************************************************************************************************/

#endif
