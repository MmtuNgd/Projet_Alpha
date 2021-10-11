
#include <string>
#include <iostream>

#include "ClassePhysique.h"


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
