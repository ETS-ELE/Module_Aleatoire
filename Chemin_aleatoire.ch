#include "Module_pile.h"

void chemin_aleatoire_ajouter_un_pas(int* chemin[], int* longueur_chemin, int nb_lignes_grille, int nb_colonnes_grille);

static int obtenir_prochaine_position(int chemin[], int longueur_chemin, int nb_lignes_grille, int nb_colonnes_grille)
	//Retourne la prochaine visite

void chemin_aleatoire_ajouter_un_pas(int* chemin[], int* longueur_chemin, int nb_lignes_grille, int nb_colonnes_grille)
{
	int prochain_pas = 0;
	int position = 0;
	prochain_pas = obtenir_prochaine_position(*chemin, *longueur_chemin, nb_lignes_grille, nb_colonnes_grille);
	position =  pile_est_present(*chemin,  *longueur_chemin, prochain_pas);
	if(position > 0)
	{
		pile_tronquer(chemin, longueur_chemin, position);
	}
	else
	{
		pile_ajouter(chemin, longueur_chemin, prochain_pas);
	}

}
