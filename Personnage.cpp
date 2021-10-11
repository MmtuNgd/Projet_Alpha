

#include "Personnage.h"
#include "Arme.h"
#include <iostream>
#include <string>
using namespace std;

Personnage::Personnage() : m_nom("Mathieu"),m_vie(100),m_vie_max(100),m_vitesse(0),m_degats(1),m_equipe("Blanc")
{
 cout <<" aaaa " << endl;
}

Personnage::Personnage(std::string nom,int vie, int vie_max,int vitesse, int degats) : m_nom(nom),m_vie(vie),m_vie_max(vie_max),m_vitesse(vitesse),m_degats(degats)
{

}


void Personnage::recevoir_dgts(int dgts_recu)
{
    m_vie -= dgts_recu;
}

void Personnage::attaquer(Personnage &cible) const
{
    cible.recevoir_dgts(10);
}

void Personnage::afficher(void)
{
    cout << "Nom du personnage : " << m_nom <<endl;
    cout << "Vie actuelle du personnage/vie max : " << m_vie << "/" <<m_vie_max <<endl;
    cout << "Vitesse du personnage : " << m_vitesse <<endl;
    cout << "Degats du personnage : " << m_degats <<endl;
    cout << "Equipe du personnage : " << m_equipe.get_tag_equipe() << endl;
}

void Personnage::setVie(int NbVie)
{
    m_vie = NbVie;
}

void Personnage::setVieMax(int NbVieMax)
{
    m_vie_max = NbVieMax;
}

void Personnage::SetDegats(int degats)
{
    m_degats = degats;
}

void Personnage::SetEquipe(std::string equipe)
{
    m_equipe = equipe;
}

void Personnage::SetNomPerso(std::string nom)
{
    m_nom = nom;
}

int Personnage::getVie(void)
{
    return m_vie;
}

int Personnage::getVieMax(void)
{
    return m_vie_max;
}

int Personnage::getVitesse(void)
{
    return m_vitesse;
}

int Personnage:: getDegats(void)
{
    return m_degats;
}

string Personnage::getEquipe(void)
{
    return m_equipe.get_tag_equipe();
}

string Personnage::getNomPerso(void)
{
    return m_nom;
}

bool Personnage::estVivant(void)
{
    if(m_vie > 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
