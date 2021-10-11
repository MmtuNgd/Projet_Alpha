#ifndef JOUEUR_H_INCLUDED
#define JOUEUR_H_INCLUDED

#include "Personnage.h"
#include "Arme.h"
#include <string>
#include <iostream>

class Joueur : public Personnage
{
public:

    void setMonArme(Arme arme);
    Arme getMonArme(void);


private:
    Arme m_monArme;


};



#endif // JOUEUR_H_INCLUDED
