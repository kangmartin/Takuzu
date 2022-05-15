//
//
//Martin KANG
//Léa VARING
//L1-Groupe E
//
// PROJET TAKUZU
//
//

#include "menu.h"
#include <stdio.h>


void menu1(void){
    printf(" _____    ___    _   __  _   _   ______  _   _ \n"
           "|_   _|  / _ \\  | | / / | | | | |___  / | | | |\n"
           "  | |   / /_\\ \\ | |/ /  | | | |    / /  | | | |\n"
           "  | |   |  _  | |    \\  | | | |   / /   | | | |\n"
           "  | |   | | | | | |\\  \\ | |_| | ./ /___ | |_| |\n"
           "  \\_/   \\_| |_/ \\_| \\_/  \\___/  \\_____/  \\___/ \n"
           "  \tLea VARING - Martin KANG (L1 Groupe E)\n                                             "
           );

    printf("\n1) Resoudre une grille solo\n");
    printf("2) Resoudre automatiquement une grille\n");
    printf("Que voulez-vous faire: \n");


}

void sous_menu1 (void){
    printf("-------------------\n");
    printf("1) JOUER \n");
    printf("2) Saisir manuellement un masque\n");
    printf("3) Generer automatiquement un masque\n");
    printf("Que voulez-vous faire: \n");

}


void choix_taille(void){
    printf("-----------------\n");
    printf("Tapez 1) si vous voulez une grille 4x4\n");
    printf("Tapez 0) si vous voulez une grille 8x8\n");
    printf("Que voulez-faire: \n");
}
