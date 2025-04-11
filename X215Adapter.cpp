#include "X215Adapter.h"
#include"X215.h"

void X215Adapter::bouger(int xAmi, int yAmi, int& x, int& y, int xEnnemi, int yEnnemi)
{
	x = max(x + 4, 9);
	y = min(0, yAmi+y);
}

int X215Adapter::attaquer(int xAmi, int yAmi, int xEnnemi, int yEnnemi)
{
	x215->setForce(max(xEnnemi + yEnnemi, 9));
	return 0;
}

void X215Adapter::defendre(int degat)
{
	x215->bloquer();
}

bool X215Adapter::estFonctionnel() const
{
	return (true) ? x215->getForce() != 0 : x215->getForce() == 0;
}

string X215Adapter::getNom() const
{
	return x215->getNom();
}




