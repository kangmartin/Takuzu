#include "verification.h"
#include <stdlib.h>
#include <stdio.h>




void regles(int **tableau, int *resultat)
{
    int i, j, lig = 4, col = 4,verif=0,nombreDeZeroCol=0,nombreDeUnCol=0,nombreDeZeroLigne=0,nombreDeUnLigne=0,videColonne=0,videLigne=0;
    int erreur1 =0, erreur2 = 0,erreur3 = 0,erreur4=0,erreur5=0;
    int consecutive[4]={0};
    int compteurZero = 0;
    int compteurUn = 0;
    int consecutiveLigne[4]={0};
    for (i = 0; i < lig; i++)
    {

        for (j = 0; j < col; j++)
        {

            consecutiveLigne[j]=tableau[i][j];
            if(tableau[j][i] == 1)
            {
                nombreDeUnCol ++;
                consecutive[j]=1;


            }
            else if(tableau[j][i] == 0)
            {
                nombreDeZeroCol ++;
                consecutive[j]=0;



            }
            else
            {
                videColonne ++ ;
                consecutive[j]=-1;

            }

            if(tableau[i][j] == 1)
            {
                nombreDeUnLigne ++;

            }
            else if(tableau[i][j] == 0){
                nombreDeZeroLigne ++;

            }
            else
            {
                videLigne++;

            }

        }

        for ( int z = 0; z < 4; z++ )
        {
            if ( consecutiveLigne[z] == 0 && z!=0){
                if(consecutiveLigne[z-1] == 0)
                {
                    compteurZero++;
                }
                else
                {
                    compteurZero = 1;
                }

            }
            if(z == 0)
            {
                compteurZero++;
            }

            if ( consecutiveLigne[z] == 1 && z!=1){
                if(consecutiveLigne[z-1] == 1)
                {
                    compteurUn++;
                }
                else
                {
                    compteurUn = 1;
                }

            }
            if(z == 1)
            {
                compteurUn++;
            }
        }

        if(compteurUn>2 || compteurZero>2)
        {
            verif++;
            erreur5++;
        }

        compteurZero = 0;
        compteurUn = 0;

        for ( int z = 0; z < 4; z++ )
        {

            if ( consecutive[z] == 0 && z!=0){
                if(consecutive[z-1] == 0)
                {
                    compteurZero++;
                }
                else
                {
                    compteurZero = 1;
                }

            }
            if(z == 0)
            {
                compteurZero++;
            }

            if ( consecutive[z] == 1 && z!=1){
                if(consecutive[z-1] == 1)
                {
                    compteurUn++;
                }
                else
                {
                    compteurUn = 1;
                }

            }
            if(z == 1)
            {
                compteurUn++;
            }
        }

        if(compteurUn>2 || compteurZero>2)
        {
            verif++;
            erreur5++;
        }

        int compare = 0,statut_compare = 0;


        if(videColonne==0)
        {
            if(nombreDeUnCol!=nombreDeZeroCol)
            {
                verif +=1;
                erreur2++;


            }


        }
        if(videLigne==0)
        {
            if(nombreDeUnLigne!=nombreDeZeroLigne)
            {
                erreur1++;
                verif +=1;

            }

        }


        for(int ligneI=0;ligneI<4;ligneI++)
        {
            for(int colonneJ=0;colonneJ<4;colonneJ++)
            {
                for(int comparaison=0;comparaison<4;comparaison++)
                {
                    if(tableau[ligneI][comparaison] == tableau[colonneJ][comparaison] && ligneI!=colonneJ){

                        compare++;
                        if(tableau[ligneI][comparaison] == -1)
                        {
                            compare--;
                        }


                    }

                }
                if (compare == 4){
                    statut_compare++;
                }



                compare = 0;

            }
        }
        if(statut_compare>0){
            verif++;
            erreur3++;
        }

        compare = 0;
        for(int ligneI=0;ligneI<4;ligneI++)
        {
            for(int colonneJ=0;colonneJ<4;colonneJ++)
            {
                for(int comparaison=0;comparaison<4;comparaison++)
                {
                    if(tableau[comparaison][ligneI] == tableau[comparaison][colonneJ] && colonneJ!=ligneI){

                        compare++;
                        if(tableau[comparaison][ligneI] == -1)
                        {
                            compare--;
                        }
                    }

                }
                if (compare == 4){

                    statut_compare++;

                }

                compare = 0;

            }
        }
        if(statut_compare>0){
            verif++;
            erreur4++;
        }

        compteurZero = 0;
        compteurUn = 0;
        nombreDeZeroCol = 0;
        nombreDeUnCol = 0;
        nombreDeZeroLigne = 0;
        nombreDeUnLigne = 0;
        videLigne = 0;
        videColonne = 0;


    }


    if(erreur1>0)
    {
        printf("\n=================Regle numero 1 non respectee: =================\nDans une ligne, il doit y avoir autant de 0 que de 1\n");

    }
    if(erreur2>0)
    {
        printf("\n=================Regle numero 2 non respectee: =================\nDans une colonne, il doit y avoir autant de 0 que de 1\n");

    }
    if(erreur3>0)
    {
        printf("\n================= Regle numero 3 non respectee: =================\nIl ne peut pas y avoir deux lignes identiques dans une grille\n");

    }
    if(erreur4>0)
    {
        printf("\n=================Regle numero 4 non respectee: ================= \nIl ne peut pas y avoir deux colonnes identiques dans une grille\n");

    }
    if(erreur5>0)
    {
        printf("\n=================Regle numero 5 non respectee: =================\nDans une ligne ou une colonne, il ne peut y avoir plus de deux 0 ou deux 1 à la suite (on ne peut pas avoir\n"
               "trois 0 de suite ou trois 1 de suite) \n");

    }
    printf("\n=============== Grille de jeu =====================\n");
    if(verif==0)
    {

        *resultat = 1;

    }
    else
    {

        *resultat = 0;
    }


}

void regles2(int **tableau, int *resultat)
{
    int i, j, lig = 8, col = 8,verif=0,nombreDeZeroCol=0,nombreDeUnCol=0,nombreDeZeroLigne=0,nombreDeUnLigne=0,videColonne=0,videLigne=0;
    int erreur1 =0, erreur2 = 0,erreur3 = 0,erreur4=0,erreur5=0;
    int consecutive[8]={0};
    int compteurZero = 0;
    int compteurUn = 0;
    int consecutiveLigne[8]={0};
    for (i = 0; i < lig; i++)
    {

        for (j = 0; j < col; j++)
        {

            consecutiveLigne[j]=tableau[i][j];
            if(tableau[j][i] == 1)
            {
                nombreDeUnCol ++;
                consecutive[j]=1;


            }
            else if(tableau[j][i] == 0)
            {
                nombreDeZeroCol ++;
                consecutive[j]=0;



            }
            else
            {
                videColonne ++ ;
                consecutive[j]=-1;

            }

            if(tableau[i][j] == 1)
            {
                nombreDeUnLigne ++;

            }
            else if(tableau[i][j] == 0){
                nombreDeZeroLigne ++;

            }
            else
            {
                videLigne++;

            }

        }

        for ( int z = 0; z < 8; z++ )
        {
            if ( consecutiveLigne[z] == 0 && z!=0){
                if(consecutiveLigne[z-1] == 0)
                {
                    compteurZero++;
                }
                else
                {
                    compteurZero = 1;
                }

            }
            if(z == 0)
            {
                compteurZero++;
            }

            if ( consecutiveLigne[z] == 1 && z!=1){
                if(consecutiveLigne[z-1] == 1)
                {
                    compteurUn++;
                }
                else
                {
                    compteurUn = 1;
                }

            }
            if(z == 1)
            {
                compteurUn++;
            }
        }

        if(compteurUn>2 || compteurZero>2)
        {
            verif++;
            erreur5++;
        }

        compteurZero = 0;
        compteurUn = 0;

        for ( int z = 0; z < 8; z++ )
        {

            if ( consecutive[z] == 0 && z!=0){
                if(consecutive[z-1] == 0)
                {
                    compteurZero++;
                }
                else
                {
                    compteurZero = 1;
                }

            }
            if(z == 0)
            {
                compteurZero++;
            }

            if ( consecutive[z] == 1 && z!=1){
                if(consecutive[z-1] == 1)
                {
                    compteurUn++;
                }
                else
                {
                    compteurUn = 1;
                }

            }
            if(z == 1)
            {
                compteurUn++;
            }
        }

        if(compteurUn>2 || compteurZero>2)
        {
            verif++;
            erreur5++;
        }

        int compare = 0,statut_compare = 0;


        if(videColonne==0)
        {
            if(nombreDeUnCol!=nombreDeZeroCol)
            {
                verif +=1;
                erreur2++;


            }


        }
        if(videLigne==0)
        {
            if(nombreDeUnLigne!=nombreDeZeroLigne)
            {
                erreur1++;
                verif +=1;

            }

        }


        for(int ligneI=0;ligneI<8;ligneI++)
        {
            for(int colonneJ=0;colonneJ<8;colonneJ++)
            {
                for(int comparaison=0;comparaison<8;comparaison++)
                {
                    if(tableau[ligneI][comparaison] == tableau[colonneJ][comparaison] && ligneI!=colonneJ){

                        compare++;
                        if(tableau[ligneI][comparaison] == -1)
                        {
                            compare--;
                        }


                    }

                }
                if (compare == 8){
                    statut_compare++;
                }



                compare = 0;

            }
        }
        if(statut_compare>0){
            verif++;
            erreur3++;
        }

        compare = 0;
        for(int ligneI=0;ligneI<8;ligneI++)
        {
            for(int colonneJ=0;colonneJ<8;colonneJ++)
            {
                for(int comparaison=0;comparaison<8;comparaison++)
                {
                    if(tableau[comparaison][ligneI] == tableau[comparaison][colonneJ] && colonneJ!=ligneI){

                        compare++;
                        if(tableau[comparaison][ligneI] == -1)
                        {
                            compare--;
                        }
                    }

                }
                if (compare == 8){

                    statut_compare++;

                }

                compare = 0;

            }
        }
        if(statut_compare>0){
            verif++;
            erreur4++;
        }

        compteurZero = 0;
        compteurUn = 0;
        nombreDeZeroCol = 0;
        nombreDeUnCol = 0;
        nombreDeZeroLigne = 0;
        nombreDeUnLigne = 0;
        videLigne = 0;
        videColonne = 0;


    }


    if(erreur1>0)
    {
        printf("\n=================Regle numero 1 non respectee: =================\nDans une ligne, il doit y avoir autant de 0 que de 1\n");

    }
    if(erreur2>0)
    {
        printf("\n=================Regle numero 2 non respectee: =================\nDans une colonne, il doit y avoir autant de 0 que de 1\n");

    }
    if(erreur3>0)
    {
        printf("\n================= Regle numero 3 non respectee: =================\nIl ne peut pas y avoir deux lignes identiques dans une grille\n");

    }
    if(erreur4>0)
    {
        printf("\n=================Regle numero 4 non respectee: ================= \nIl ne peut pas y avoir deux colonnes identiques dans une grille\n");

    }
    if(erreur5>0)
    {
        printf("\n=================Regle numero 5 non respectee: =================\nDans une ligne ou une colonne, il ne peut y avoir plus de deux 0 ou deux 1 à la suite (on ne peut pas avoir\n"
               "trois 0 de suite ou trois 1 de suite) \n");

    }
    printf("\n=============== Grille de jeu =====================\n");
    if(verif==0)
    {

        *resultat = 1;

    }
    else
    {

        *resultat = 0;
    }
}

