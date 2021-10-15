

#include "Joueur.h"
#include <string>
#include <iostream>

using namespace std;

Joueur::Joueur()
{
    m_monArme = new Arme("Arme factis",0,0);
}

Joueur::~Joueur()
{
    delete m_monArme;
}
void Joueur::setMonArme(Arme arme)
{
    *m_monArme = arme;
    SetDegats(arme.getDegatsArme());
//    cout << "Changement d arme effectuee" << endl;

}

Arme Joueur::getMonArme(void)
{
    return *m_monArme;
}

void Joueur::setNomDeClasse(string nomDeClasse)
{
    m_nomDeClasse = nomDeClasse;
}

string Joueur::getNomDeClasse(void)
{
    return m_nomDeClasse;
}

