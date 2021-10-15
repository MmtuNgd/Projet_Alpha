
#include <string>
#include <iostream>

#include "ClassePhysique.h"


ClassePhysique::ClassePhysique()
{
    setPointDeSerenite(100);
    setPointDeSereniteMax(100);
}

ClassePhysique::~ClassePhysique()
{

}

void ClassePhysique::competenceSpeciale(Personnage &cible)
{
  int dgtsBase(0), dgtsComp(0);
  dgtsBase = m_monArme->getDegatsArme();
  dgtsComp = dgtsBase*2;
  cible.recevoir_dgts(dgtsComp);
  m_PtsSerenite -=30;

}

void ClassePhysique::setPointDeSerenite(int ptsSerenite)
{
    m_PtsSerenite = ptsSerenite;
}

void ClassePhysique::setPointDeSereniteMax(int ptsSereniteMax)
{
    m_PtsSereniteMax = ptsSereniteMax;
}

int ClassePhysique::getPointDeSerenite(void)
{
    return m_PtsSerenite;
}

int ClassePhysique::getPointDeSereniteMax(void)
{
    return m_PtsSereniteMax;
}
