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

static int obtenir_prochaine_position(int chemin[],int longueur_chemin,int nb_lignes_grille,int nb_colonnes_grille);
