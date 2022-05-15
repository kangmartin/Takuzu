//
//
//Martin KANG
//Léa VARING
//L1-Groupe E
//
// PROJET TAKUZU
//
//

#ifndef TAKUSU_GRILLE_H
#define TAKUSU_GRILLE_H


int grille_aleatoire(int *choix);
int **generation_alea_masque(void);
int affichage(int solution1 [4][4], int ** masque_alea2,int ** grille_de_jeu);
void jeu(char lettre, int chiffre, int lettre2, int **grille_jeu, int *resultat_verif,int *statut2jeu,int choix, int statut_auto);
int **generation_alea_masque2(void);
int affichage2(int solution1 [8][8], int ** masque_alea2,int ** grille_de_jeu);
void jeu2(char lettre, int chiffre, int lettre2, int **grille_jeu, int *resultat_verif,int *statut2jeu,int choix, int statut_auto);
int  **saisir_masque(void);
int ** saisir_masque2(void);


#endif //TAKUSU_GRILLE_H