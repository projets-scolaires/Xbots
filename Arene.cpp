#include "Arene.h"

Arene::Arene(Equipe& equipe1, Equipe& equipe2)
{
	this->equipes[0] = &equipe1 ;
	this->equipes[1] = &equipe2 ;
	Compteur::ajouterConstructeur();
}

/*Arene::Arene(const Arene& arene)
{
	this->equipes[0] = arene.equipes[0] ;
	this->equipes[1] = arene.equipes[1] ;
	Compteur::ajouterConstructeurCopie();
}*/

Arene::~Arene()
{
	Compteur::ajouterDestructeur();
}


void Arene::debuterCombat() {
	cout << "debut du combat \n ";
	for (Equipe* equipe : this->equipes) {
		for (int i = 0; i < equipe->getNombreXBots(); i++) {
			int x = 0;
			int y = 0;
			equipe->getXBot(i).EstFonctionnel();
			equipe->getXBot(i).bouger(2, 4, x, y, 5, 1);
			equipe->getXBot(i).bouger(1, 3, x, y, 0, 6);
			equipe->getXBot(i).attaquer(1, 2, 3, 4);
			equipe->getXBot(i).defendre(3);
			cout << endl;
		}	

	}



}