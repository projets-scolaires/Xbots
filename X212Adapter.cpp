#include "X212Adapter.h"
#include"X212.h"

void X212Adapter::bouger(int xAmi, int yAmi, int& x, int& y, int xEnnemi, int yEnnemi)
{
	x = max(x + 1, 9);
	y = min(y - 1, 0);
}

int X212Adapter::attaquer(int xAmi, int yAmi, int xEnnemi, int yEnnemi)
{
	xEnnemi = int(xEnnemi / 2);
	xEnnemi = min(yEnnemi - 2, 0);
	return 0;
}

void X212Adapter::defendre(int degat)
{
	degat -= 1;
}

bool X212Adapter::estFonctionnel() const
{
	return (true) ? x212->getForce() != 0 : x212->getForce() == 0;
}

string X212Adapter::getNom() const
{
	return x212->getNom();
}




