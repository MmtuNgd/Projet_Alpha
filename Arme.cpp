#include <iostream>
#include "Arme.h"

using namespace std;

Arme::Arme() : m_nom_arme("Aucune arme"), m_degats(0),m_poids(0)
{

}
Arme::Arme(std::string nom_arme, int degats, int poids) :  m_nom_arme(nom_arme), m_degats(degats), m_poids(poids)
{

}
// Methodes
void Arme::afficher(void)
{
    cout << "Arme actuelle : " << m_nom_arme << " / Degats : "<< m_degats<< " poids : " << m_poids <<endl;
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
    cout << "degat avant : "<< m_degats << endl;
    m_degats = degats;
    cout << "degat apres : "<< m_degats << endl;

}

string Arme::getNomArme(void)
{
    return m_nom_arme;
}

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
