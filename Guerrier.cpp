#include "Guerrier.h"

#include <iostream>
using namespace std;

Guerrier::Guerrier()
{
    setNomDeClasse("Guerrier");
    SetNomPerso("Aucun nom");
    setVie(100);
    setVieMax(100);
    setVitesse(10);
    setPointDeSerenite(100);
}

Guerrier::Guerrier(std::string nom,int vie, int vie_max,int vitesse,Arme arme)
{

    setNomDeClasse("Guerrier");
    SetNomPerso(nom);
    setVie(vie);
    setVieMax(vie_max);
    setVitesse(vitesse);
    setMonArme(arme);
    SetDegats(arme.getDegatsArme());

}




void Guerrier::afficher(void)
{
    cout << "Nom du personnage : " << getNomPerso() <<endl;
    cout << "Vie actuelle du personnage/vie max : " << getVie() << "/" << getVieMax() <<endl;
    cout << "Vitesse du personnage : " << getVitesse() <<endl;
    cout << "Degats du personnage : " << getDegats() <<endl;
    cout << "Equipe du personnage : " << getEquipe() << endl;
    cout << "Classe du personnage : " << getNomDeClasse() << endl;
    cout << "Pts de serenite du personnage : " << getPointDeSerenite() << endl;

    cout << "Nom de l arme : " << m_monArme->getNomArme() << endl;
}


