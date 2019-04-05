//
// Created by Kevin.GACON on 28.03.2019.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <locale.h>


#ifndef BATAILLENAVALE_PLATEAU_H
#define BATAILLENAVALE_PLATEAU_H

#endif //BATAILLENAVALE_PLATEAU_H

char plateau [10][10] = {
        254, 254, 254, 254, 254, 254, 254, 254, 254, 254,
        254, 254, 254, 254, 254, 254, 254, 254, 254, 254,
        254, 254, 254, 254, 254, 254, 254, 254, 254, 254,
        254, 254, 254, 254, 254, 254, 254, 254, 254, 254,
        254, 254, 254, 254, 254, 254, 254, 254, 254, 254,
        254, 254, 254, 254, 254, 254, 254, 254, 254, 254,
        254, 254, 254, 254, 254, 254, 254, 254, 254, 254,
        254, 254, 254, 254, 254, 254, 254, 254, 254, 254,
        254, 254, 254, 254, 254, 254, 254, 254, 254, 254,
        254, 254, 254, 254, 254, 254, 254, 254, 254, 254
};

int grillepre1 [10][10] = {   //Grille Prédéfinie numéro 1
        1,1,1,2,2,1,1,1,1,1,
        1,2,1,1,2,2,2,2,2,1,
        1,2,1,1,1,1,1,1,1,1,
        1,2,1,1,2,2,1,1,1,2,
        2,2,1,1,1,1,1,1,1,2,
        2,1,1,2,2,1,2,2,1,2,
        2,1,1,1,1,1,1,1,1,1,
        2,1,1,2,2,2,1,1,1,1,
        1,1,1,1,1,2,2,2,1,1,
        1,1,1,1,1,1,1,1,1,1
};

int grillepre2 [10][10] = {   //Grille Prédéfinie numéro 2
        1,1,2,2,2,2,2,1,1,1,
        1,1,1,1,2,2,1,1,1,1,
        1,1,1,1,1,1,2,1,1,1,
        1,1,1,1,1,1,2,1,1,1,
        1,2,1,1,1,2,2,1,2,1,
        1,2,1,1,1,2,1,1,2,1,
        1,1,2,2,2,1,1,1,2,1,
        1,1,1,1,1,2,2,2,2,1,
        1,2,2,1,1,1,1,1,1,1,
        1,1,2,2,2,2,1,1,1,1
};

int grillepre3 [10][10] = {   //Grille Prédéfinie numéro 3
        1,2,1,1,1,1,1,1,1,2,
        1,2,1,2,1,1,1,1,1,2,
        1,1,1,2,1,1,1,1,1,2,
        1,2,1,1,2,1,1,2,1,2,
        1,2,1,1,2,1,1,2,1,1,
        1,2,2,2,2,1,1,2,1,1,
        1,2,1,1,1,2,1,1,1,1,
        1,2,1,1,1,2,1,1,1,1,
        1,1,1,1,1,1,1,1,1,1,
        2,2,2,2,1,2,2,2,1,1
};