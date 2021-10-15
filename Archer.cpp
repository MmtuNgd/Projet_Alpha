#include "Archer.h"
#include <iostream>
#include <string>
using namespace std;

Archer::Archer()
{
    setNomDeClasse("Archer");
    SetNomPerso("Aucun nom");
    setVie(100);
    setVieMax(100);
    setVitesse(10);

}

Archer::Archer (std::string nom,int vie, int vieMax, int vitesse, Arme arme)
{
    setNomDeClasse("Archer");
    SetNomPerso(nom);
    setVie(vie);
    setVieMax(vieMax);
    setVitesse(vitesse);
    setMonArme(arme);
    SetDegats(arme.getDegatsArme());
}

void Archer::competenceAttaque(Personnage &personnage)
{
    personnage.recevoir_dgts(10);
}

void Archer::afficher(void)
{
    cout << "Nom du personnage : " << getNomPerso() <<endl;
    cout << "Vie actuelle du personnage/vie max : " << getVie() << "/" << getVieMax() <<endl;
    cout << "Vitesse du personnage : " << getVitesse() <<endl;
    cout << "Degats du personnage : " << getDegats() <<endl;
    cout << "Equipe du personnage : " << getEquipe() << endl;
    cout << "Classe du personnage : " << getNomDeClasse() << endl;
    cout << "Nom de l arme : " << m_monArme->getNomArme() << endl;
    cout << "Pts de serenite : " << getPointDeSerenite() << endl;
}
