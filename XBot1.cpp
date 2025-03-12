#include "XBot1.h"

XBot1::XBot1(string nom):XBot(nom)
{
	nombreAttaquesRecues = 0;
	Compteur::ajouterConstructeur();
}

XBot1::XBot1(const XBot1& xBot1):XBot(xBot1)
{
	this->nombreAttaquesRecues = xBot1.nombreAttaquesRecues;
	Compteur::ajouterConstructeurCopie();

}

XBot1::~XBot1()
{
	Compteur::ajouterDestructeur();
	XBot::~XBot();
}

void XBot1::defendre(int degat)
{
	degat = max(degat-2,0); // pour eviter les nombres negatifs en soustrayant 2
	XBot::defendre(degat);
	nombreAttaquesRecues += 1;
}

void XBot1::defendre()
{
	defendre(1);
}

bool XBot1::EstFonctionnel()
{
	//Le XBot est fonctionnel si nombreAttaquesRecues < 2
	if (nombreAttaquesRecues < 2){
		cout << this->getNom() << " est fonctionnel " << endl;
		return true;
	}
	return false;
}





