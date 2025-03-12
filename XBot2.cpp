#include "XBot2.h"

XBot2::XBot2(string nom):XBot(nom)
{
	Compteur::ajouterConstructeur();
}

XBot2::XBot2(const XBot2& xBot2):XBot(xBot2.getNom())
{
	Compteur::ajouterConstructeurCopie();
}

XBot2::~XBot2()
{
	Compteur::ajouterDestructeur();
}

