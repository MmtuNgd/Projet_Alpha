#include "Pretre.h"
#include "Personnage.h"


void Pretre::competenceAttaque(Personnage &personnage)
{
    personnage.recevoir_dgts(10);
}
