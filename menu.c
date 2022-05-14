#include "menu.h"
#include <stdlib.h>
#include <stdio.h>


void menu1(void){
    printf(" _____    ___    _   __  _   _   ______  _   _ \n"
           "|_   _|  / _ \\  | | / / | | | | |___  / | | | |\n"
           "  | |   / /_\\ \\ | |/ /  | | | |    / /  | | | |\n"
           "  | |   |  _  | |    \\  | | | |   / /   | | | |\n"
           "  | |   | | | | | |\\  \\ | |_| | ./ /___ | |_| |\n"
           "  \\_/   \\_| |_/ \\_| \\_/  \\___/  \\_____/  \\___/ \n"
           "  \tLea VARING - Martin KANG\n                                             "
           );

    printf("\n1) resoudre une grille solo\n");
    printf("2) resoudre automatiquement une grille\n");
    printf("Que voulez vous faire: \n");


}

void sous_menu1 (void){
    printf("------------------\n");
    printf("1) JOUER \n");
    printf("2) saisir manuellement un masque\n");
    printf("3) generer automatiquement un masque\n");
    printf("Que voulez vous faire: \n");

}

void sous_menu2(void){
    printf("1) saisir manuellement un masque\n");
    printf("2) saisir automatiquement un masque\n");
    printf("3) JOUER !\n");
    printf("Que voulez vous faire: \n");
}

void choix_taille(void){
    printf("-----------------\n");
    printf("Tapez 1) si vous voulez une grille 44\n");
    printf("Tapez 0) si vous voulez une grille 88\n");
    printf("Que voulez faire: \n");
}
