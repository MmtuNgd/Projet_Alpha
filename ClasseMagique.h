#ifndef CLASSEMAGIQUE_H_INCLUDED
#define CLASSEMAGIQUE_H_INCLUDED

#include "Joueur.h"

class ClasseMagique : public Joueur
{
public:

    // Setter
    void setMana(int Mana);
    void setManaMax(int ManaMax);

    //Getter
    int getMana(void);
    int getManaMax(void);

private:
    int m_Mana;
    int m_ManaMax;



};

#endif // CLASSEMAGIQUE_H_INCLUDED
