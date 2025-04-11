#include "X213Adapter.h"

void X213Adapter::bouger(int xAmi, int yAmi, int& x, int& y, int xEnnemi, int yEnnemi)
{
	x = xAmi;
	y = max(y, yAmi);
}

int X213Adapter::attaquer(int xAmi, int yAmi, int xEnnemi, int yEnnemi)
{
	xEnnemi = min(0, xAmi - xEnnemi);
	yEnnemi = 0; 
	return 0;
}

void X213Adapter::defendre(int degat)
{
	degat = int(degat / 2) + 1;
}

bool X213Adapter::estFonctionnel() const
{
	return (true) ? x213->getForce() != 0 : x213->getForce() == 0;
}

string X213Adapter::getNom() const
{
	return x213->getNom();
}


