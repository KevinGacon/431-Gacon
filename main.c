//
// Created by Kevin.GACON on 04.04.2019.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <locale.h>
#include "plateau.h"
#include "AffichagePlateau.h"
#include "GamePredefini.h"
#include "Score.h"
#include "Demarage.h"

int Interface () {
    int choix, Quitter;

    system("cls");                      //Fonction qui permet de plus rien afficher
    printf("==================\n"
           "LA BATAILLE NAVALE\n");     //Il nous demande de faire le choix entre "jouer",
    printf("==================\n\n");   //"Aide", "Score" ou "Quitter"
    printf("1.[Jouer]\n");
    printf("2.[Aide]\n");
    printf("3.[Score]\n");
    printf("4.[Quitter]\n");
    scanf("%d", &choix);

        switch (choix) {
            case 1:
                system("cls");
                printf("================================\n"    //Si le choix du menu était de jouer,
                       "Choississez le nombre de grille\n"     //alors il nous demande de faire
                       "================================\n\n"  //le choix entre "une grille"
                       "1. [une GRILLE] 2. [deux GRILLES]\n"   //, "deux grille" ou Retourner au menu
                       "3. [Retour au menu]\n"
                       "->");
                scanf("%d", &choix);
                switch (choix) {
                    case 1:
                        system("cls");
                        printf("============================\n"   //Si le choix du nombre de grille était
                               "Choisissez votre mode de jeu\n"   //"une grille", alors il nous demande de faire
                               "============================\n\n" //le choix entre un "plateau prédéfini"
                               "1.[Plateau Predefini]\n"          //ou de retourner au menu
                               "2.[Retour au menu]\n"
                               "->");
                        scanf("%d", &choix);
                        switch (choix) {
                            case 1:
                                GamePredefini();   //Si le choix du mode de jeu était le plateau prédéfini,
                                break;             //alors le mode de jeu se lance

                            default:
                                Interface();       //Si le choix du mode de jeu était de retourner au menu,
                                break;             //alors il retournera au menu
                        }
                        break;

                    case 2:             //Si le choix du nombre de grille était
                        Interface();    //"deux grilles", alors
                        break;

                    default:            //Si le choix du nombre de grille était
                        Interface();    //"Retour au menu", alors il retournera au menu
                        break;
                }
                break;

            case 2:
                system("cls");
                printf("=================================================================================\n"
                       "AIDE\n"
                       "=================================================================================\n"
                       "1) But du jeu :\n"
                       "---------------------------------------------------------------------------------\n"
                       "*Une grille de jeu numerotee de 1 a 10 verticalement et de A a J horizontalement.\n\n"
                       "=================================================================================\n"
                       "2) LES BATEAUX:\n"
                       "---------------------------------------------------------------------------------\n"
                       "*1 cuirasse ( 4 cases)\n"
                       "*2 croiseurs (3 cases)\n"
                       "*3 torpilleurs (2 cases)\n"
                       "*4 sous-marin (1 cases)\n");
                system("pause");
                Interface();
                break;

            case 3:
                Score();

            case 4:
                system("cls");
                printf("Voulez-vous quitter le jeu ?\n"
                       "1.[Oui] 2.[Non]\n");
                scanf("%d", &Quitter);
                switch (Quitter) {
                    case 1:
                        exit(0);

                    case 2:
                        Interface();
                        break;

                    default:
                        Interface();
                        break;
                }
            break;

            default:
                Interface();
            break;
        }
    }

int main() {
    GamePredefini();
}
