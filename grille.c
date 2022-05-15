//
//
//Martin KANG
//Léa VARING
//L1-Groupe E
//
// PROJET TAKUZU
//
//
#include "grille.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "liste_grille.c"
#include "verification.h"
#include "unistd.h"

/*
 *  Certaines fonctions sont en dupliquées pour la version en 8x8
 */

int ** saisir_masque(void) { // L'utilisateur saisi manuellement toutes cases du masque avec les valeurs qu'il veut

    char lettre = 0,lettre2=0;
    int chiffre = 0;
    int suite;

    int ** masque_saisi = (int **) malloc(4 * sizeof(int )); // allocation des colonnes
    int i, j;

    for (i = 0; i < 4; i++)
        masque_saisi[i] = (int) malloc(4 * sizeof(int)); //allocation du nombre de cases par colonnes

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf(" %d\t\t", masque_saisi[i][j] = 8);
        }
        printf("\n");
    }

    int k=0;
    do {

        printf("Choissisez quelle case vous souhaitez remplir (Exemple: A1. B2...):");
        scanf(" %c%d", &lettre, &chiffre);


        if (lettre == 'A') {
            lettre2 = 0;
        } else if (lettre == 'B') {
            lettre2 = 1;
        } else if (lettre == 'C') {
            lettre2 = 2;
        } else {
            lettre2 = 3;
        }

        if (chiffre == 1) {
            chiffre = 0;
        } else if (chiffre == 2) {
            chiffre = 1;
        } else if (chiffre == 3) {
            chiffre = 2;
        } else {
            chiffre = 3;
        }
        printf("%d %d\n", lettre2, chiffre);

        if (masque_saisi[chiffre][lettre2] == 8) {
            printf("\nQuelle valeur souhaitez vous placer ? (0 ou 1):");
            scanf("%d", &masque_saisi[chiffre][lettre2]);

            for(i=0;i<4;i++){
                for (j=0; j<4; j++){
                    printf("%d\t\t", masque_saisi[i][j]);
                }
                printf("\n");
            }


        }
        k++;

    }while (k<16);

    return masque_saisi;
}

int ** saisir_masque2(void) {

    char lettre = 0,lettre2=0;
    int chiffre = 0;

    int ** masque_saisi = (int **) malloc(8 * sizeof(int )); //allocation des colonnes
    int i, j;

    for (i = 0; i < 8; i++)
        masque_saisi[i] = (int) malloc(8 * sizeof(int)); //allocation du nombre de cases par colonnes

    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            printf(" %d\t", masque_saisi[i][j] = 8);
        }
        printf("\n");
    }

    int k=0;
    do {

        printf("Choissisez quelle case vous souhaitez remplir (Exemple: A1. B2...):");
        scanf(" %c%d", &lettre, &chiffre);


        if (lettre == 'A') {
            lettre2 = 0;
        } else if (lettre == 'B') {
            lettre2 = 1;
        } else if (lettre == 'C') {
            lettre2 = 2;
        } else if (lettre == 'D') {
            lettre2 = 3;
        } else if (lettre == 'E') {
            lettre2 = 4;
        } else if (lettre == 'F') {
            lettre2 = 5;
        } else if (lettre == 'G') {
            lettre2 = 6;
        } else {
            lettre2 = 7;
        }

        if (chiffre == 1) {
            chiffre = 0;
        } else if (chiffre == 2) {
            chiffre = 1;
        } else if (chiffre == 3) {
            chiffre = 2;
        } else if (chiffre == 4) {
            chiffre = 3;
        } else if (chiffre == 5) {
            chiffre = 4;
        } else if (chiffre == 6) {
            chiffre = 5;
        } else if (chiffre == 7) {
            chiffre = 6;
        } else {
            chiffre = 7;
        }
        printf("%d %d\n", lettre2, chiffre);

        if (masque_saisi[chiffre][lettre2] == 8) {
            printf("\nQuelle valeur souhaitez vous placer ? (0 ou 1):");
            scanf("%d", &masque_saisi[chiffre][lettre2]);

            for(i=0;i<8;i++){
                for (j=0; j<8; j++){
                    printf("%d\t", masque_saisi[i][j]);
                }
                printf("\n");
            }


        }
        k++;

    }while (k<64);

    return masque_saisi;
}



int grille_aleatoire(int *choix) { // Tire au sort un chiffre entre 1 et 3

    srand(time(NULL));
    int nbgen = rand() % 3 + 1;
    *choix = nbgen;
}

int ** generation_alea_masque(void) { // Genere aléatoirement un masque
    srand(time(NULL));

    int **masque_alea = (int **) malloc(4 * sizeof(int *)); //allocation des colonnes
    int i, j;

    for (i = 0; i < 4; i++)
        masque_alea[i] = (int *) malloc(4 * sizeof(int)); //allocation du nombre de cases par colonnes

    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++)
            masque_alea[i][j] = rand() % 2;



    return masque_alea;
}

int ** generation_alea_masque2(void) {
    srand(time(NULL));

    int **masque_alea = (int **) malloc(8 * sizeof(int *)); //allocation des colonnes
    int i, j;

    for (i = 0; i < 8; i++)
        masque_alea[i] = (int *) malloc(8 * sizeof(int)); //allocation du nombre de cases par colonnes

    for (i = 0; i < 8; i++)
        for (j = 0; j < 8; j++)
            masque_alea[i][j] = rand() % 2;



    return masque_alea;
}


int affichage(int solution [4][4], int ** masque_alea2,int ** grille_de_jeu){ // Affiche la grille de jeu en fonction du masque et de la grille soltion


    int i,j;

    for(i=0; i<4; i++){
        for (j=0; j<4; j++){
            if(masque_alea2[i][j]==1){
                printf("%d\t", solution[i][j]);
                grille_de_jeu[i][j] = solution[i][j];
            }
            else{
                printf("?\t");
                grille_de_jeu[i][j] = -1;

            }
        }
        printf("\n");
    }

}

int affichage2(int solution [8][8], int ** masque_alea2,int ** grille_de_jeu){


    int i,j;

    for(i=0; i<8; i++){
        for (j=0; j<8; j++){
            if(masque_alea2[i][j]==1){
                printf("%d\t", solution1[i][j]);
                grille_de_jeu[i][j] = solution[i][j];

            }
            else{
                printf("?\t");
                grille_de_jeu[i][j] = -1;

            }
        }
        printf("\n");
    }

}

void jeu(char lettre, int chiffre, int lettre2, int **grille_jeu, int *resultat_verif,int *statut2jeu,int choix, int statut_auto)
/*
 * Fonction qui permet à l'utilisateur de jouer en remplissant sucessivement toutes les cases par une coordoonnée
 * Chaque fois que le joueur joue son coup est vérifié par la fonction règle (fichier verification.c)
 * La variable statut2jeu est incrémentée à chaque fois que le joueur joue un coup incorrect
 * */
{
    int ordi_chiffre,ordi_lettre, ordi_compteur = 0;
    int partie_gagne = 0;
    int suite;
    for(int i=0; i<4; i++){
        for (int j=0; j<4; j++){
            if(grille_jeu[i][j]==-1){
                partie_gagne++;

            }

        }
    }
    if(partie_gagne!=0) // Si l'utilisataur gagne ou perd il sors de la boucle
    {
        int placementEffectif = 0;
        ordi_compteur = 0;
        if(statut_auto == 0){
            printf("Choissisez ou vous souhaitez vous placer (exemple: A1,B2...):");
            scanf(" %c%d",&lettre,&chiffre);
        }else {
            for(int i=0; i<4; i++){
                for (int j=0; j<4; j++){
                    if(grille_jeu[i][j]==-1){
                        if (ordi_compteur == 0)
                        {
                            ordi_lettre = j;
                            ordi_chiffre = i;
                            printf("L'ordinateur a choisi de joue sur la ligne %d et la colonne %d\n",i+1,j+1);



                        }
                        ordi_compteur++;
                    }

                }
            }

        }


        if (statut_auto == 0){
            if(lettre=='A'){
                lettre2 = 0;
            }
            else if(lettre=='B'){
                lettre2 = 1;
            }
            else if(lettre == 'C'){
                lettre2 = 2;
            }
            else{
                lettre2 = 3;
            }

            if(chiffre==1){
                chiffre = 0;
            }
            else if(chiffre==2){
                chiffre = 1;
            }
            else if(chiffre == 3){
                chiffre = 2;
            }
            else{
                chiffre = 3;
            }
        }else{
            lettre2 = ordi_lettre;
            chiffre = ordi_chiffre;
        }

        if(grille_jeu[chiffre][lettre2]==-1)
        {
            if(statut_auto == 0){
                printf("\nQuelle valeur souhaitez vous placer ? (0 ou 1):");
                scanf("%d",&grille_jeu[chiffre][lettre2]);
                placementEffectif = 0;


            }
            else{
                srand(time(NULL));
                int nb = rand() % 2;
                grille_jeu[chiffre][lettre2] = nb;
                printf("Place le chiffre %d\n",grille_jeu[chiffre][lettre2]);
                sleep(4);
            }

            switch(choix)
            {
                case 1:
                    if(grille_jeu[chiffre][lettre2] == solution1[chiffre][lettre2])
                    {
                        placementEffectif = 1;

                    }
                    break;
                case 2:
                    if(grille_jeu[chiffre][lettre2] == solution2[chiffre][lettre2])
                    {
                        placementEffectif = 1;

                    }
                    break;
                case 3:
                    if(grille_jeu[chiffre][lettre2] == solution3[chiffre][lettre2])
                    {
                        placementEffectif = 1;

                    }
                    break;
                default:
                    break;

            }


            regles(grille_jeu,&resultat_verif);
            if(resultat_verif==0){
                grille_jeu[chiffre][lettre2] = -1;
                for(int i=0; i<4; i++){
                    for (int j=0; j<4; j++){
                        if(grille_jeu[i][j]==-1){
                            printf("?\t");

                        }
                        else{
                            printf("%d\t",grille_jeu[i][j]);

                        }
                    }
                    printf("\n");
                }
                printf("\nCoup incorrect ! - Ton placement n'a pas ete effectue\n");
                *statut2jeu += 1;
            }
            else{
                if(placementEffectif != 1){
                    grille_jeu[chiffre][lettre2] = -1;

                }
                for(int i=0; i<4; i++){
                    for (int j=0; j<4; j++){
                        if(grille_jeu[i][j]==-1){
                            printf("?\t");

                        }
                        else{
                            printf("%d\t",grille_jeu[i][j]);

                        }
                    }
                    printf("\n");
                }

                if(placementEffectif != 1){
                    printf("\nCoup valide mais pas correct ! - Ton placement n'a pas ete effectue\n");

                }
                else{
                    printf("\nCoup correct !\n");
                }


            }
        }
    }
    else
    {
        *statut2jeu = 5;
    }
    if(statut_auto == 1){
        printf("Entrez le chiffre 1 pour passer au prochain coup de l'ordi:");
        scanf("%d",&suite);
    }



}


void jeu2(char lettre, int chiffre, int lettre2, int **grille_jeu, int *resultat_verif,int *statut2jeu,int choix, int statut_auto)
{

    int ordi_chiffre,ordi_lettre, ordi_compteur = 0;
    int partie_gagne = 0;
    int suite;
    for(int i=0; i<8; i++){
        for (int j=0; j<8; j++){
            if(grille_jeu[i][j]==-1){
                partie_gagne++;
            }
        }
    }
    if(partie_gagne!=0)
    {
        int placementEffectif = 0;
        if(statut_auto == 0){
            printf("Choissisez ou vous souhaitez vous placer (exemple: A1,B2...):");
            scanf(" %c%d",&lettre,&chiffre);
        }else {
            for(int i=0; i<8; i++){
                for (int j=0; j<8; j++){
                    if(grille_jeu[i][j]==-1){
                        if (ordi_compteur == 0)
                        {
                            ordi_lettre = j;
                            ordi_chiffre = i;
                            printf("L'ordinateur a choisi de joue sur la ligne %d et la colonne %d\n",i+1,j+1);



                        }
                        ordi_compteur++;
                    }

                }
            }

        }


        if(lettre=='A'){
            lettre2 = 0;
        }
        else if(lettre=='B'){
            lettre2 = 1;
        }
        else if(lettre == 'C'){
            lettre2 = 2;
        }
        else if(lettre == 'D'){
            lettre2 = 3;
        }
        else if(lettre=='E'){
            lettre2 = 4;
        }
        else if(lettre == 'F'){
            lettre2 = 5;
        }
        else if(lettre == 'G'){
            lettre2 = 6;
        }else{
            lettre2 = 7;
        }


        if (statut_auto==0){
        if(chiffre==1){
            chiffre = 0;
        }
        else if(chiffre==2){
            chiffre = 1;
        }
        else if(chiffre == 3){
            chiffre = 2;
        }
        else if(chiffre == 4){
            chiffre = 3;
        }
        else if(chiffre == 5){
            chiffre = 4;
        }
        else if(chiffre == 6){
            chiffre = 5;
        }
        else if(chiffre == 7){
            chiffre = 6;
        }

        else{
            chiffre = 7;
        }
    }else{
        lettre2 = ordi_lettre;
        chiffre = ordi_chiffre;
    }


        printf("%d %d\n",lettre2,chiffre);

        if(grille_jeu[chiffre][lettre2]==-1)
        {
            if(statut_auto == 0){
                printf("\nQuelle valeur souhaitez vous placer ? (0 ou 1):");
                scanf("%d",&grille_jeu[chiffre][lettre2]);
                placementEffectif = 0;


            }
            else{
                srand(time(NULL));
                int nb = rand() % 2;
                grille_jeu[chiffre][lettre2] = nb;
                printf("Place le chiffre %d\n",grille_jeu[chiffre][lettre2]);
                sleep(4);
            }
            placementEffectif = 0;

            switch(choix)
            {
                case 1:
                    if(grille_jeu[chiffre][lettre2] == solution4[chiffre][lettre2])
                    {
                        placementEffectif = 1;

                    }
                    break;
                case 2:
                    if(grille_jeu[chiffre][lettre2] == solution5[chiffre][lettre2])
                    {
                        placementEffectif = 1;

                    }
                    break;
                case 3:
                    if(grille_jeu[chiffre][lettre2] == solution6[chiffre][lettre2])
                    {
                        placementEffectif = 1;

                    }
                    break;
                default:
                    break;

            }


            regles2(grille_jeu,&resultat_verif);
            if(resultat_verif==0){
                grille_jeu[chiffre][lettre2] = -1;
                for(int i=0; i<8; i++){
                    for (int j=0; j<8; j++){
                        if(grille_jeu[i][j]==-1){
                            printf("?\t");

                        }
                        else{
                            printf("%d\t",grille_jeu[i][j]);

                        }
                    }
                    printf("\n");
                }
                printf("\nCoup incorrect ! - Ton placement n'a pas ete effectue\n");
                *statut2jeu += 1;
            }
            else{
                if(placementEffectif != 1){
                    grille_jeu[chiffre][lettre2] = -1;

                }
                for(int i=0; i<8; i++){
                    for (int j=0; j<8; j++){
                        if(grille_jeu[i][j]==-1){
                            printf("?\t");

                        }
                        else{
                            printf("%d\t",grille_jeu[i][j]);

                        }
                    }
                    printf("\n");
                }

                if(placementEffectif != 1){
                    printf("\nCoup valide mais pas correct ! - Ton placement n'a pas ete effectue\n");

                }
                else{
                    printf("\nCoup correct !\n");
                }


            }
        }
    }
    else
    {
        *statut2jeu = 5;
    }
    if(statut_auto == 1){
        printf("Entrez le chiffre 1 pour passer au prochain coup de l'ordi:");
        scanf("%d",&suite);
    }

}



