#include "Arene.h"

Arene::Arene(Equipe& equipe1, Equipe& equipe2)
{
	*this->equipes[0] = equipe1 ;
	*this->equipes[1] = equipe2 ;
	Compteur::ajouterConstructeur();
}

Arene::Arene(const Arene& equipe)
{
	*this->equipes[0] = *equipe.equipes[0] ;
	*this->equipes[1] = *equipe.equipes[1] ;
	Compteur::ajouterConstructeurCopie();
}

Arene::~Arene()
{
	delete[] this->equipes ;
	Compteur::ajouterDestructeur();
}


void Arene::debuterCombat() {
	for (Equipe* equipe : this->equipes) {
		for (int i = 0; i < equipe->getNombreXBots(); i++) {
			int x = equipe->getXBot(i).getx();
			int y = equipe->getXBot(i).gety();
			equipe->getXBot(i).EstFonctionnel();
			equipe->getXBot(i).bouger(2, 4, x, y, 5, 1);
			equipe->getXBot(i).bouger(1, 3, x, y, 0, 6);
			equipe->getXBot(i).attaquer(1, 2, 3, 4);
			equipe->getXBot(i).defendre(3);
		}					
	}
}