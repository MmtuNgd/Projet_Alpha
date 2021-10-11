#ifndef ARME_H_INCLUDED
#define ARME_H_INCLUDED


#include <string>

class Arme
{
public:
    Arme();
    Arme(std::string nom_arme, int degats,int poids);


    void afficher();

    //Setter
    void setNomArme(std::string nom_Arme);
    void setPoids(int poids);
    void setDegatsArme(int degats);
   //void changer_arme(std::string nom_arme, int degats);

    //Getter
    std::string getNomEquipe(void);
    int getDegatsArme(void);
    int getPoids(void);
private:
    std::string m_nom_arme;
    int m_degats;
    int m_poids;
};

#endif // ARME_H_INCLUDED
