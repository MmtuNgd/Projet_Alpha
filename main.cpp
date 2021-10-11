#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <cstdlib>

#include "Personnage.h"
#include "Arme.h"
#include "Equipe.h"
using namespace std;


int main()
{
    Personnage perso1;
    Personnage perso2;

    perso1.setVie(100);
    perso1.afficher();

    perso2.attaquer(perso1);
    perso1.afficher();


    return 0;
}


