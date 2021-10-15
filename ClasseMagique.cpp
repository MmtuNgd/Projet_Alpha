
#include <string>
#include "ClasseMagique.h"


ClasseMagique::ClasseMagique()
{
    setMana(100);
    setManaMax(100);
}

ClasseMagique::~ClasseMagique()
{

}

void ClasseMagique::competenceSpeciale(Personnage &cible)
{
    int dgtsBase(0), dgtsComp(0);
    dgtsBase = m_monArme->getDegatsArme();
    dgtsComp = dgtsBase*3;
    m_Mana -= 30;
    cible.recevoir_dgts(dgtsComp);
}

void ClasseMagique::setMana(int Mana)
{
    m_Mana = Mana;
}

void ClasseMagique::setManaMax(int ManaMax)
{
    m_ManaMax = ManaMax;
}

int ClasseMagique::getMana(void)
{
    return m_Mana;
}

int ClasseMagique::getManaMax(void)
{
    return m_Mana;
}
