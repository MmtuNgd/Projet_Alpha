#ifndef CLASSEPHYSIQUE_H_INCLUDED
#define CLASSEPHYSIQUE_H_INCLUDED

#include "Joueur.h"


class ClassePhysique : public Joueur
{
public:

    // Setter
    void setPointDeSerenite(int ptsSerenite);
    void setPointDeSereniteMax(int ptsSereniteMax);

    //Getter
    int getPointDeSerenite(void);
    int getPointDeSereniteMax(void);

private:
    int m_PtsSerenite;
    int m_PtsSereniteMax;


};

#endif // CLASSEPHYSIQUE_H_INCLUDED
