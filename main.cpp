#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <cstdlib>

#include "Personnage.h"
#include "Arme.h"
#include "Equipe.h"
#include "Guerrier.h"
#include "Archer.h"
#include "Sorcier.h"
#define VIE_MAX 100
#define VITESSE_INITIALE 10

using namespace std;


int main()
{
    int Nombre_Joueur(0);


    Arme arme_depart("Couteau de depart",5,1);
    Arme RayonLaser("Rayon laser ",5000,50);
    Arme GrosseEpee("Grosse Epee ",30,3);
    Arme Pistolet("Pistolet ",80,2);
    Arme Baguette("Baguette Explosive",45,2);
    Guerrier guerrier_Mathieu("Mathieu le guerrier",VIE_MAX,VIE_MAX,VITESSE_INITIALE,Pistolet);
    Guerrier guerrier_Anas("Anas le guerrier",VIE_MAX,VIE_MAX,VITESSE_INITIALE,GrosseEpee);
    Archer archer1("Archer 1",VIE_MAX,VIE_MAX,VITESSE_INITIALE,arme_depart);
    Sorcier Sorcier1 ("Gargamel",VIE_MAX,VIE_MAX,VITESSE_INITIALE,Baguette);
    cout << "=======================PERSO 1 ========================\n\n"<<endl;
    //guerrier_Mathieu.afficher();
    cout << "=======================PERSO 2 ========================\n\n"<<endl;
    guerrier_Anas.afficher();
    cout << "=======================PERSO 3 ========================\n\n"<<endl;
    archer1.afficher();
    cout << "=======================PERSO 4 ========================\n\n"<<endl;
    Sorcier1.afficher();

    Sorcier1.competenceSpeciale(guerrier_Anas);


    cout << "=======================PERSO APRES ATTAQUE ========================\n\n"<<endl;
    Sorcier1.afficher();
    guerrier_Anas.afficher();

    return 0;

}


