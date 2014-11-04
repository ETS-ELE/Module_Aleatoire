/************************************************************************************************/
//Projet   : Projet TP_2_Labyrinthe
//Fichier  : Aleatoire.h
//Contenu  : Contient les fonction relatif a la generation du labyrinthe
//Objectif : Création d'un algorithme de réalisation de labyrinthe
//Création : 1 novembre 2014
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

//Les gars c'est quoi ça??
#define nb_lignes_world_map 5
#define nb_colonnes_world_map 4
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
        Cette fonction retourne la prochaine position à visiter à partir de la dernière position du chemin courant. 
        La position est choisie au hasard et doit être valide. La nouvelle position ne doit donc pas sortir du tableau. 
        Par exemple, pour le chemin présenté plus haut, la prochaine position est 16, 22 ou 20.

	Parametre : 	int* chemin[]	--> Tableau contenant le labyrinthe à afficher.
	                int* longueur_chemin
	                
	Return : 	Void.
*/
/************************************************************************************************/
static int obtenir_prochaine_position(int chemin[],int longueur_chemin,int nb_lignes_grille,int nb_colonnes_grille);
#endif
