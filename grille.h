//
// Created by Léa Varing on 29/04/2022.
//

#ifndef TAKUSU_GRILLE_H
#define TAKUSU_GRILLE_H


int grille_aleatoire(int *choix);
int **generation_alea_masque(void);
int affichage(int solution1 [4][4], int ** masque_alea2,int ** grille_de_jeu);
void jeu(char lettre, int chiffre, int lettre2, int **grille_jeu, int *resultat_verif,int *statut2jeu,int choix);
int **generation_alea_masque2(void);
int affichage2(int solution1 [8][8], int ** masque_alea2,int ** grille_de_jeu);
void affichage_jeu(int solution,int **masqueAlea,int **grille_jeu, char lettre, int chiffre, int lettre2, int statut_jeu, int *resultat_verif, int grille_choisie);
void affichage_jeu2(int solution,int **masqueAlea,int **grille_jeu, char lettre, int chiffre, int lettre2, int statut_jeu, int *resultat_verif, int grille_choisie);
void jeu2(char lettre, int chiffre, int lettre2, int **grille_jeu, int *resultat_verif,int *statut2jeu,int choix);
int  **saisir_masque(void);
int ** saisir_masque2(void);


#endif //TAKUSU_GRILLE_H