#ifndef EQUIPE_H_INCLUDED
#define EQUIPE_H_INCLUDED

#include <string>
class Equipe
{
public:
    Equipe();
    Equipe(std::string tag);

    void set_tag_equipe(std::string tag_team);
    std::string get_tag_equipe(void);

    void afficher();
  //  std::string get_tag_equipe(Personnage m_personnage);

private:
    std::string m_tag_equipe;
//    Personnage m_personnage;
};





#endif // EQUIPE_H_INCLUDED

