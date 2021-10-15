#include "Sorcier.h"
#include "Personnage.h"
#include <string>

using namespace std;
Sorcier::Sorcier()
{
    setNomDeClasse("Sorcier");
    SetNomPerso("Aucun nom");
    setVie(100);
    setVieMax(100);
    setVitesse(10);
    setMana(100);
    setManaMax(100);
}

Sorcier::Sorcier(string nom,int vie, int vieMax,int vitesse,Arme arme)
{
    setNomDeClasse("Sorcier");
    SetNomPerso(nom);
    setVie(vie);
    setVieMax(vieMax);
    setVitesse(vitesse);
    setMonArme(arme);
    SetDegats(arme.getDegatsArme());
    setMana(100);
    setManaMax(100);
}

Sorcier::afficher(void)
{
    cout << "Nom du personnage : " << getNomPerso() <<endl;
    cout << "Vie actuelle du personnage/vie max : " << getVie() << "/" << getVieMax() <<endl;
    cout << "Vitesse du personnage : " << getVitesse() <<endl;
    cout << "Degats du personnage : " << getDegats() <<endl;
    cout << "Equipe du personnage : " << getEquipe() << endl;
    cout << "Classe du personnage : " << getNomDeClasse() << endl;
    cout << "Nom de l arme : " << m_monArme->getNomArme() << endl;
    cout << "Pts de mana : " << getMana() << endl;
}
