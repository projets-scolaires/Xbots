#include "XBotInterface.h"

XBotInterface::XBotInterface(XBot* xBot)
{
	Compteur::ajouterConstructeur();
}

XBotInterface::XBotInterface(const XBotInterface& xBot)
{
	Compteur::ajouterConstructeurCopie(); 
}

XBotInterface::~XBotInterface()
{
	Compteur::ajouterDestructeur(); 
}

void XBotInterface::bouger(int xAmi, int yAmi, int& x, int& y, int xEnnemi, int yEnnemi)
{
}

int XBotInterface::attaquer(int xAmi, int yAmi, int xEnnemi, int yEnnemi)
{
	return 0;
}

void XBotInterface::defendre(int degat)
{
}

bool XBotInterface::estFonctionnel() const
{
	return true;
}

int XBotInterface::calculerDistance(int x1, int y1, int x2, int y2)  const
{
	return 0;
}




