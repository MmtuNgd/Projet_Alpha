#ifndef PERSONNAGE_H_INCLUDED
#define PERSONNAGE_H_INCLUDED

#include <string>
#include "Arme.h"
#include "Equipe.h"
// Class

class Personnage
{
public:
    Personnage();
    Personnage(std::string nom,int vie, int vie_max,int vitesse, int degats);

    void recevoir_dgts(int dgts_recu);
    void attaquer(Personnage &cible) const;
    void afficher(void);
    bool estVivant(void);
    // Setter
    void setVie(int NbVie);
    void setVieMax(int NbVieMax);
    void SetDegats(int degats);
    void SetEquipe(std::string equipe);
    void SetNomPerso(std::string nom);

    // Getter
    int getVie(void);
    int getVieMax(void);
    int getVitesse(void);
    int getDegats(void);
    std::string getEquipe(void);
    std::string getNomPerso(void);

private:
    int m_vie;
    int m_vie_max;
    int m_vitesse;
    int m_degats;

    Equipe m_equipe;
    std::string m_nom;
};




#endif // PERSONNAGE_H_INCLUDED

