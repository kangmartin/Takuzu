//
//
//Martin KANG
//Léa VARING
//L1-Groupe E
//
// PROJET TAKUZU
//
//

#include <stdio.h>
#include "menu.h"
#include "grille.h"


int main() {

#include "liste_grille.c"

    int grille_choisie = 0;
    int choix, resultat_verif = -1;
    int **manuel_masque = solution1;
    int **manuel_masque2 = solution3;
    int statut_jeu = 0;
    char lettre = 0,lettre2=0;
    int chiffre = 0;
    int **grille_jeu = generation_alea_masque();
    int suite = 0;
    menu1();
    scanf("%d", &choix);

    switch (choix) {
        case 1:
            sous_menu1();
            scanf("%d", &choix);
            switch (choix) {
                case 1:
                    choix_taille();
                    scanf("%d", &choix);
                    if (choix == 1) {

                        int **masqueAlea = generation_alea_masque();
                        grille_aleatoire(&grille_choisie);

                        switch (grille_choisie) {
                            case 1:

                                printf("\n=============== Grille de jeu =====================\n");
                                affichage(solution1, masqueAlea, grille_jeu);
                                do{
                                    jeu(lettre,chiffre,lettre2,grille_jeu,&resultat_verif,&statut_jeu,grille_choisie,0);
                                    if(statut_jeu<3){
                                        printf("Nombre de vies: %d\n\n",3-statut_jeu);

                                    }
                                }while (statut_jeu<3);


                                break;

                            case 2:

                                printf("\n=============== Grille de jeu =====================\n");
                                affichage(solution2, masqueAlea, grille_jeu);
                                do{
                                    jeu(lettre,chiffre,lettre2,grille_jeu,&resultat_verif,&statut_jeu,grille_choisie,0);
                                    if(statut_jeu<3){
                                        printf("Nombre de vies: %d\n\n",3-statut_jeu);

                                    }

                                }while (statut_jeu<3);


                                break;

                            case 3:

                                printf("\n=============== Grille de jeu =====================\n");
                                affichage(solution3, masqueAlea, grille_jeu);
                                do{
                                    jeu(lettre,chiffre,lettre2,grille_jeu,&resultat_verif,&statut_jeu,grille_choisie,0);
                                    if(statut_jeu<3){
                                        printf("Nombre de vies: %d\n\n",3-statut_jeu);

                                    }
                                }while (statut_jeu<3);

                                break;
                            default:
                                break;
                        }

                    }else if(choix==0){
                        int **grille_jeu = generation_alea_masque2();
                        int **masqueAlea = generation_alea_masque2();
                        grille_aleatoire(&grille_choisie);

                        switch (grille_choisie) {
                            case 1:

                                printf("\n=============== Grille de jeu =====================\n");
                                affichage2(solution4, masqueAlea, grille_jeu);
                                do{
                                    jeu2(lettre,chiffre,lettre2,grille_jeu,&resultat_verif,&statut_jeu,grille_choisie,0);
                                    if(statut_jeu<3){
                                        printf("Nombre de vies: %d\n\n",3-statut_jeu);
                                    }
                                }while (statut_jeu<3);


                                break;

                            case 2:

                                printf("\n=============== Grille de jeu =====================\n");
                                affichage2(solution5, masqueAlea, grille_jeu);
                                do{
                                    jeu2(lettre,chiffre,lettre2,grille_jeu,&resultat_verif,&statut_jeu,grille_choisie,0);
                                    if(statut_jeu<3){
                                        printf("Nombre de vies: %d\n\n",3-statut_jeu);
                                    }

                                }while (statut_jeu<3);


                                break;

                            case 3:

                                printf("\n=============== Grille de jeu =====================\n");
                                affichage2(solution6, masqueAlea, grille_jeu);
                                do{
                                    jeu2(lettre,chiffre,lettre2,grille_jeu,&resultat_verif,&statut_jeu,grille_choisie,0);
                                    if(statut_jeu<3){
                                        printf("Nombre de vies: %d\n\n",3-statut_jeu);
                                    }
                                }while (statut_jeu<3);

                                break;
                            default:
                                break;
                        }
                    }

                    break;



                case 2:

                    choix_taille();
                    grille_aleatoire(&grille_choisie);
                    scanf("%d", &choix);
                    if(choix==1){
                        manuel_masque = saisir_masque();
                        printf("\n----------------- Grille masque manuellement saisi: ------------------- \n");
                        for(int i=0; i<4; i++){
                            for (int j=0; j<4; j++){
                                printf("%d\t", manuel_masque[i][j]);
                            }
                            printf("\n");
                        }

                        switch (grille_choisie) {
                            case 1:

                                printf("\n=============== Grille de jeu =====================\n");
                                affichage(solution1, manuel_masque, grille_jeu);
                                do{
                                    jeu(lettre,chiffre,lettre2,grille_jeu,&resultat_verif,&statut_jeu,grille_choisie,0);
                                    if(statut_jeu<3){
                                        printf("Nombre de vies: %d\n\n",3-statut_jeu);
                                    }
                                }while (statut_jeu<3);
                                break;

                            case 2:

                                printf("\n=============== Grille de jeu =====================\n");
                                affichage(solution2, manuel_masque, grille_jeu);
                                do{
                                    jeu(lettre,chiffre,lettre2,grille_jeu,&resultat_verif,&statut_jeu,grille_choisie,0);
                                    if(statut_jeu<3){
                                        printf("Nombre de vies: %d\n\n",3-statut_jeu);
                                    }
                                }while (statut_jeu<3);
                                break;

                            case 3:

                                printf("\n=============== Grille de jeu =====================\n");
                                affichage(solution3, manuel_masque, grille_jeu);
                                do{
                                    jeu(lettre,chiffre,lettre2,grille_jeu,&resultat_verif,&statut_jeu,grille_choisie,0);
                                    if(statut_jeu<3){
                                        printf("Nombre de vies: %d\n\n",3-statut_jeu);
                                    }
                                }while (statut_jeu<3);
                                break;

                            default:
                                break;
                        }



                    }
                    if(choix == 0){

                        manuel_masque2 = saisir_masque2();
                        grille_aleatoire(&grille_choisie);
                        printf("\n----------------- Grille masque manuellement saisi: ------------------- \n");
                        for(int i=0; i<8; i++){
                            for (int j=0; j<8; j++){
                                printf("%d\t", manuel_masque2[i][j]);
                            }
                            printf("\n");
                        }

                        switch (grille_choisie) {
                            case 1:

                                printf("\n=============== Grille de jeu =====================\n");
                                affichage2(solution4, manuel_masque2, grille_jeu);
                                do{
                                    jeu2(lettre,chiffre,lettre2,grille_jeu,&resultat_verif,&statut_jeu,grille_choisie,0);
                                    if(statut_jeu<3){
                                        printf("Nombre de vies: %d\n\n",3-statut_jeu);
                                    }
                                }while (statut_jeu<3);
                                break;

                            case 2:

                                printf("\n=============== Grille de jeu =====================\n");
                                affichage2(solution5, manuel_masque2, grille_jeu);
                                do{
                                    jeu2(lettre,chiffre,lettre2,grille_jeu,&resultat_verif,&statut_jeu,grille_choisie,0);
                                    if(statut_jeu<3){
                                        printf("Nombre de vies: %d\n\n",3-statut_jeu);
                                    }
                                }while (statut_jeu<3);
                                break;

                            case 3:

                                printf("\n=============== Grille de jeu =====================\n");
                                affichage2(solution6, manuel_masque2, grille_jeu);
                                do{
                                    jeu2(lettre,chiffre,lettre2,grille_jeu,&resultat_verif,&statut_jeu,grille_choisie,0);
                                    if(statut_jeu<3){
                                        printf("Nombre de vies: %d\n\n",3-statut_jeu);
                                    }
                                }while (statut_jeu<3);
                                break;

                            default:
                                break;
                        }
                    }



                    break;
                case 3:
                    choix_taille();
                    scanf("%d", &choix);
                    if (choix == 1) {

                        int **masqueAlea = generation_alea_masque();
                        grille_aleatoire(&grille_choisie);
                        printf("\n----------------- Grille masque automatiquement genere: ------------------- \n");
                        for(int i=0; i<4; i++){
                            for (int j=0; j<4; j++){
                                printf("%d\t", masqueAlea[i][j]);
                            }
                            printf("\n");
                        }
                        switch (grille_choisie) {
                            case 1:

                                printf("\n=============== Grille de jeu =====================\n");
                                affichage(solution1, masqueAlea, grille_jeu);
                                do{
                                    jeu(lettre,chiffre,lettre2,grille_jeu,&resultat_verif,&statut_jeu,grille_choisie,0);
                                    if(statut_jeu<3){
                                        printf("Nombre de vies: %d\n\n",3-statut_jeu);
                                    }
                                }while (statut_jeu<3);
                                break;

                            case 2:

                                printf("\n=============== Grille de jeu =====================\n");
                                affichage(solution2, masqueAlea, grille_jeu);
                                do{
                                    jeu(lettre,chiffre,lettre2,grille_jeu,&resultat_verif,&statut_jeu,grille_choisie,0);
                                    if(statut_jeu<3){
                                        printf("Nombre de vies: %d\n\n",3-statut_jeu);
                                    }
                                }while (statut_jeu<3);
                                break;

                            case 3:

                                printf("\n=============== Grille de jeu =====================\n");
                                affichage(solution3, masqueAlea, grille_jeu);
                                do{
                                    jeu(lettre,chiffre,lettre2,grille_jeu,&resultat_verif,&statut_jeu,grille_choisie,0);
                                    if(statut_jeu<3){
                                        printf("Nombre de vies: %d\n\n",3-statut_jeu);
                                    }
                                }while (statut_jeu<3);
                                break;

                            default:
                                break;
                        }

                    }else if(choix==0){
                        int **grille_jeu = generation_alea_masque2();
                        int **masqueAlea = generation_alea_masque2();
                        grille_aleatoire(&grille_choisie);
                        printf("\n----------------- Grille masque automatiquement genere: ------------------- \n");
                        for(int i=0; i<8; i++){
                            for (int j=0; j<8; j++){
                                printf("%d\t", masqueAlea[i][j]);
                            }
                            printf("\n");
                        }
                        switch (grille_choisie) {
                            case 1:

                                printf("\n=============== Grille de jeu =====================\n");
                                affichage2(solution4, masqueAlea, grille_jeu);
                                do{
                                    jeu2(lettre,chiffre,lettre2,grille_jeu,&resultat_verif,&statut_jeu,grille_choisie,0);
                                    if(statut_jeu<3){
                                        printf("Nombre de vies: %d\n\n",3-statut_jeu);
                                    }
                                }while (statut_jeu<3);
                                break;

                            case 2:

                                printf("\n=============== Grille de jeu =====================\n");
                                affichage2(solution5, masqueAlea, grille_jeu);
                                do{
                                    jeu2(lettre,chiffre,lettre2,grille_jeu,&resultat_verif,&statut_jeu,grille_choisie,0);
                                    if(statut_jeu<3){
                                        printf("Nombre de vies: %d\n\n",3-statut_jeu);
                                    }
                                }while (statut_jeu<3);
                                break;

                            case 3:

                                printf("\n=============== Grille de jeu =====================\n");
                                affichage2(solution6, masqueAlea, grille_jeu);
                                do{
                                    jeu2(lettre,chiffre,lettre2,grille_jeu,&resultat_verif,&statut_jeu,grille_choisie,0);
                                    if(statut_jeu<3){
                                        printf("Nombre de vies: %d\n\n",3-statut_jeu);
                                    }
                                }while (statut_jeu<3);
                                break;
                            default:
                                break;
                        }
                    }

                    break;
                case 4:

                    break;
                default:
                    printf("Action impossible, relancez le programme !");
            }
            break;
        case 2:
            choix_taille();
            scanf("%d", &choix);
            if (choix == 1) {

                int **masqueAlea = generation_alea_masque();
                grille_aleatoire(&grille_choisie);

                switch (grille_choisie) {
                    case 1:

                        printf("\n=============== Grille de jeu =====================\n");
                        affichage(solution1, masqueAlea, grille_jeu);
                        do{
                            jeu(lettre,chiffre,lettre2,grille_jeu,&resultat_verif,&statut_jeu,grille_choisie,1);
                            if(statut_jeu<3){
                                printf("Nombre de vies: %d\n\n",3-statut_jeu);

                            }
                        }while (statut_jeu<3);


                        break;

                    case 2:

                        printf("\n=============== Grille de jeu =====================\n");
                        affichage(solution2, masqueAlea, grille_jeu);
                        do{
                            jeu(lettre,chiffre,lettre2,grille_jeu,&resultat_verif,&statut_jeu,grille_choisie,1);
                            if(statut_jeu<3){
                                printf("Nombre de vies: %d\n\n",3-statut_jeu);

                            }

                        }while (statut_jeu<3);


                        break;

                    case 3:

                        printf("\n=============== Grille de jeu =====================\n");
                        affichage(solution3, masqueAlea, grille_jeu);
                        do{
                            jeu(lettre,chiffre,lettre2,grille_jeu,&resultat_verif,&statut_jeu,grille_choisie,1);
                            if(statut_jeu<3){
                                printf("Nombre de vies: %d\n\n",3-statut_jeu);

                            }
                        }while (statut_jeu<3);

                        break;
                    default:
                        break;
                }

            }else if(choix==0){
                int **grille_jeu = generation_alea_masque2();
                int **masqueAlea = generation_alea_masque2();
                grille_aleatoire(&grille_choisie);

                switch (grille_choisie) {
                    case 1:

                        printf("\n=============== Grille de jeu =====================\n");
                        affichage2(solution4, masqueAlea, grille_jeu);
                        do{
                            jeu2(lettre,chiffre,lettre2,grille_jeu,&resultat_verif,&statut_jeu,grille_choisie,1);
                            if(statut_jeu<3){
                                printf("Nombre de vies: %d\n\n",3-statut_jeu);
                            }
                        }while (statut_jeu<3);


                        break;

                    case 2:

                        printf("\n=============== Grille de jeu =====================\n");
                        affichage2(solution5, masqueAlea, grille_jeu);
                        do{
                            jeu2(lettre,chiffre,lettre2,grille_jeu,&resultat_verif,&statut_jeu,grille_choisie,1);
                            if(statut_jeu<3){
                                printf("Nombre de vies: %d\n\n",3-statut_jeu);
                            }

                        }while (statut_jeu<3);


                        break;

                    case 3:

                        printf("\n=============== Grille de jeu =====================\n");
                        affichage2(solution6, masqueAlea, grille_jeu);
                        do{
                            jeu2(lettre,chiffre,lettre2,grille_jeu,&resultat_verif,&statut_jeu,grille_choisie,1);
                            if(statut_jeu<3){
                                printf("Nombre de vies: %d\n\n",3-statut_jeu);
                            }
                        }while (statut_jeu<3);

                        break;
                    default:
                        break;
                }
            }

            break;
        case 3:
            sous_menu1();
            scanf("%d", &choix);
            break;
        default:
            printf("Action impossible, relancez le programme");
            return 0;
    }
    if(statut_jeu == 5){

        printf("\n======================== BRAVO :) Vous avez gagnee ! ========================\n");
    }
    else if(statut_jeu == 0)
    {
        printf("FIN DU PROGRAMME");
    }
    else{
        printf("\n======================== DOMMAGE :( Vous avez perdu !  ========================\n");
    }
}


