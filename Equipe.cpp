
#include "Equipe.h"
#include "Personnage.h"
#include <iostream>
using namespace std;

Equipe::Equipe() : m_tag_equipe("Blanc")
{

}

Equipe::Equipe(std::string tag) : m_tag_equipe(tag)
{

}

void Equipe::set_tag_equipe(std::string tag_team)
{
    m_tag_equipe = tag_team;
}

string Equipe::get_tag_equipe(void)
{
   return m_tag_equipe;
}

void Equipe::afficher()
{
    cout << "Equipe : " << m_tag_equipe<< endl;
}
