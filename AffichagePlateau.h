//
// Created by Kevin.GACON on 28.03.2019.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <locale.h>


#ifndef BATAILLENAVALE_AFFICHAGEPLATEAU_H
#define BATAILLENAVALE_AFFICHAGEPLATEAU_H

#endif

int Afficheplat() {                                         //Fonctiom qui permet d'afficher un tableau correctemnt
    int a, b, NumVertical = 0, PlatHor = 0, PlatVert = 0;

    system("cls");
    printf("   A B C D E F G H I J\n");                     //Crée une première ligne avec les lettres
    for (a = 0; a < 9; a++) {
        NumVertical = NumVertical + 1;                      //Met un nombre 
        printf(" %d", NumVertical);
        for (b = 0; b < 10; b++) {
            printf(" %c", plateau[PlatHor][PlatVert]);
            PlatHor++;
        }
        PlatHor = 0;
        PlatVert++;
        printf("\n");
    }
    NumVertical = NumVertical + 1;
    printf("%d ", NumVertical);
    PlatHor = 0;
    for (b = 0; b < 10; b++) {
        printf("%c ", plateau[PlatHor][9]);
        PlatHor++;
    }
}
