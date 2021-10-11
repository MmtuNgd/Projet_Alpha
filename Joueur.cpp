

#include "Joueur.h"
#include <string>
#include <iostream>

using namespace std;


void Joueur::setMonArme(Arme arme)
{
    m_monArme = arme;
}

Arme Joueur::getMonArme(void)
{
    return m_monArme;
}
