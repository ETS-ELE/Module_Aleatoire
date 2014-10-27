#include "Module_pile.h"
#include <time.h>
#define nb_lignes_world_map 5
#define nb_colonnes_world_map 4

void chemin_aleatoire_ajouter_un_pas(int* chemin[], int* longueur_chemin, int nb_lignes_grille, int nb_colonnes_grille);

static int obtenir_prochaine_position(int chemin[],int longueur_chemin,int nb_lignes_grille,int nb_colonnes_grille);




static int obtenir_prochaine_position(int chemin[],int longueur_chemin,int nb_lignes_grille,int nb_colonnes_grille)
{
	srand(time(NULL)); //au pire on le laisse drette la
	
	int position_x = chemin[0] / nb_lignes_grille;
	int position_y = chemin[0] % nb_lignes_grille;
	int old_position_x = chemin[1] / nb_lignes_grille;
	int old_position_y = chemin[1] % nb_lignes_grille;
	int changement_y = 0, changement_x = 0;
	int nombre_a_renvoyer;

	if (longueur_chemin == 1) //si la poile est de 1 seul element
	{
	old_position_x = -1;	//assigne les valeur precedente de x a des valeurs qui ne peuvent etre atteintes
	old_position_y = -1;
	}
	
	while ((!(changement_y == 0) && !(changement_x == 0)) 
			|| (changement_y == 0 && changement_x == 0) 
			|| ((old_position_x == position_x) && (old_position_y == position_y)))
	{		
		do {
		position_x = chemin[0] / nb_lignes_grille;	//reinitialise la position a sa valeur originale
		changement_x = (rand()%3)-1; //genere un NB random de -1, 0 ou 1
		position_x += changement_x; //la position change de changement_x
		} while ((position_x < 0) || (position_x >= (nb_colonnes_grille)));

		do {
		position_y = chemin[0] % nb_lignes_grille;	//reinitialise la position a sa valeur originale
		changement_y = (rand()%3)-1;	//genere un NB random de -1, 0 ou 1
		position_y += changement_y;		//la position change de changement_x
		} while ((position_y < 0) || (position_y >= nb_lignes_grille));


	}

	nombre_a_renvoyer = ((nb_lignes_grille*position_x) + position_y);
	return nombre_a_renvoyer;
	
}




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
