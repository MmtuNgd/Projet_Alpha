#include <iostream>
#include "Arme.h"

using namespace std;

Arme::Arme() : m_nom_arme("Epee Courte"), m_degats(1),m_poids(1)
{

}
Arme::Arme(std::string nom_arme, int degats, int poids) :  m_nom_arme(nom_arme), m_degats(degats), m_poids(poids)
{

}
// Methodes
void Arme::afficher(void)
{
    cout << "Arme actuelle : " << m_nom_arme << " / Degats : "<< m_degats<< endl;
}

// Setter
void Arme::setNomArme(std::string nom_Arme)
{
    m_nom_arme = nom_Arme;
}

void Arme::setPoids(int poids)
{
    m_poids = poids;
}

void Arme::setDegatsArme(int degats)
{
    m_degats = degats;
}

//void Arme::changer_arme(std::string nom_arme, int degats)
//{
//    cout << "Changement d arme effectuee" << endl;
//    m_nom_arme = nom_arme;
//    m_degats = degats;
//}


// Getter

string Arme::getNomEquipe(void)
{

}

int Arme::getDegatsArme(void)
{
    return m_degats;
}

int Arme::getPoids(void)
{
    return m_poids;
}
