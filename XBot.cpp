#include "XBot.h"

XBot::XBot(string nom)
{
	this->nom = nom ;
	Compteur::ajouterConstructeur() ;
}

XBot::XBot(const XBot& xBot)
{
	this->nom = xBot.nom ;
	Compteur::ajouterConstructeurCopie() ;
}

XBot::~XBot()
{
	Compteur::ajouterDestructeur() ;
}

void XBot::bouger(int xAmi, int yAmi, int& x, int& y, int xEnnemi, int yEnnemi)
{
	cout << nom << " Bouge " << endl;
}

int XBot::attaquer(int x, int y, int xEnnemi, int yEnnemi)
{
	cout << nom << " attaque " << endl;
	return 0 ;
}

void XBot::defendre(int degat)
{
	cout << nom << " se defend " << endl ;
}

bool XBot::EstFonctionnel()
{
	cout << nom << " est fonctionnel "  << endl;
	return true;
}

int XBot::calculerDistance(int x1, int y1, int x2, int y2)
{
	double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	return round(distance * 100.0);
}

ostream& operator<<(ostream& os, const XBot& xbot) {
	os << "Je me nomme " << xbot.nom;
	return os;
}

