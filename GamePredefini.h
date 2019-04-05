//
// Created by Kevin.GACON on 04.04.2019.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <locale.h>
#import "AffichagePlateau.h"
#import "plateau.h"
#import "main.c"
#import "Score.h"

#ifndef BATAILLENAVALE_GAMEPREDEFINI_H
#define BATAILLENAVALE_GAMEPREDEFINI_H

#endif //BATAILLENAVALE_GAMEPREDEFINI_H

int GamePredefini () {
    int PlatHor = 0, PlatVert = 0;
    char Horizontal;
    int Vertical = 0;
    int couprestant = 25;
    int nbrRand = 0, touche = 0, score = 0;


    nbrRand = rand() % 2;

    do {
        system("cls");

        Afficheplat();

        printf("\n\nScore : %d", score);
        printf("\nCoups restants : %d", couprestant);
        printf("\n========================================"
               "\nChoisissez votre ligne HORIZONTAL (a-j):");
        scanf("%c", &Horizontal);

        switch (Horizontal) {
            case 'a':
                PlatHor = 0;
                break;

            case 'b':
                PlatHor = 1;
                break;

            case 'c':
                PlatHor = 2;
                break;

            case 'd':
                PlatHor = 3;
                break;

            case 'e':
                PlatHor = 4;
                break;

            case 'f':
                PlatHor = 5;
                break;

            case 'g':
                PlatHor = 6;
                break;

            case 'h':
                PlatHor = 7;
                break;

            case 'i':
                PlatHor = 8;
                break;

            case 'j':
                PlatHor = 9;
                break;

            default:
                break;
        }

        printf("\nChoisissez votre ligne VERTICAL (1-10):");
        scanf("%d", &Vertical);
        PlatVert = Vertical - 1;

        if (nbrRand == 1) {
            if (grillepre1[PlatHor][PlatVert] == 2) {
                if (plateau[PlatHor][PlatVert] == 'o') {
                    printf("deja joue !");
                    GamePredefini();
                } else {
                    plateau[PlatHor][PlatVert] = 'o';
                    printf("touche !\n");
                    touche++;
                    score = score + 50;
                    if (touche == 20) {
                        printf("Bien joue !\ntu as gagne !");

                        system("pause");
                        Score();
                    }
                }
                if (grillepre1[PlatHor][PlatVert] != 2) {
                    plateau[PlatHor][PlatVert] = 'x';
                    printf("rate !\n");
                    score--;
                }
            }
        }

        if (nbrRand == 2) {
            if (grillepre2[PlatHor][PlatVert] == 2) {
                if (plateau[PlatHor][PlatVert] == 'o') {
                    printf("deja joue !");
                    GamePredefini();
                } else {
                    plateau[PlatHor][PlatVert] = 'o';
                    printf("touche !\n");
                    touche++;
                    score = score + 50;
                    if (touche == 20) {
                        printf("Bien joue !\ntu as gagne !");

                        system("pause");
                        Score();
                    }
                }
                if (grillepre2[PlatHor][PlatVert] != 2) {
                    plateau[PlatHor][PlatVert] = 'x';
                    printf("rate !\n");
                    score--;
                }
            }
        }

        if (nbrRand == 3) {
            if (grillepre3[PlatHor][PlatVert] == 2) {
                if (plateau[PlatHor][PlatVert] == 'o') {
                    printf("deja joue !");
                    GamePredefini();
                } else {
                    plateau[PlatHor][PlatVert] = 'o';
                    printf("touche !\n");
                    touche++;
                    score = score + 50;
                    if (touche == 20) {
                        printf("Bien joue !\ntu as gagne !");

                        system("pause");
                        Score();
                    }
                }
                if (grillepre3[PlatHor][PlatVert] != 2) {
                    plateau[PlatHor][PlatVert] = 'x';
                    printf("rate !\n");
                    score--;
                }
            }
        }

        Horizontal = 0;
        Vertical = 0;
        couprestant--;
    } while (couprestant != 0);
    Score();
}
