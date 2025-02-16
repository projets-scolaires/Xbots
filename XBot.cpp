#include "XBot.h"

XBot::XBot(string nom)
{
	this->nom = nom ;
	this->x = 0 ;
	this->y = 0 ;
	Compteur::ajouterConstructeur() ;
}

XBot::XBot(const XBot& xBot)
{
	this->nom = xBot.nom ;
	this->x = xBot.x ;
	this->y = xBot.y ;
	Compteur::ajouterConstructeurCopie() ;
}

XBot::~XBot()
{
	Compteur::ajouterDestructeur() ;
}

void XBot::bouger(int xAmi, int yAmi, int& x, int& y, int xEnnemi, int yEnnemi)
{
	cout << this->nom << "Bouge" ;
}

int XBot::attaquer(int x, int y, int xEnnemi, int yEnnemi)
{
	cout << this->nom << "attaque" ;
	return 0 ;
}

void XBot::defendre(int degat)
{
	cout << this->nom << " se defend " ;
}

bool XBot::EstFonctionnel()
{
	cout << this->nom << " est fonctionnel " ;
	return true;
}

int XBot::calculerDistance(int x1, int y1, int x2, int y2)
{
	double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	return round(distance * 100.0);
}

