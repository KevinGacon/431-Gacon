//
// Created by Kevin.GACON on 04.04.2019.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <locale.h>
#import  "main.c"
#import  "GamePredefini.h"


#ifndef BATAILLENAVALE_SCORE_H
#define BATAILLENAVALE_SCORE_H

#endif //BATAILLENAVALE_SCORE_H



int Score () {

    int score1 = 0,score2 = 0,score3 = 0,score4 = 0,score5 = 0,score6 = 0,score7 = 0,score8 = 0,score9 = 0,score10 = 0;
    system("cls");;
    printf("================================================================================\n"
           "SCORE\n"
           "================================================================================\n\n");
    printf("1.  %d\n", score1);
    printf("2.  %d\n", score2);
    printf("3.  %d\n", score3);
    printf("4.  %d\n", score4);
    printf("5.  %d\n", score5);
    printf("6.  %d\n", score6);
    printf("7.  %d\n", score7);
    printf("8.  %d\n", score8);
    printf("9.  %d\n", score9);
    printf("10. %d\n", score10);
    system("pause");
    Interface();
}