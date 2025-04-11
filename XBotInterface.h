#pragma once
#include <iostream>
#include "Compteur.h"

using namespace std;

class XBotInterface
{
public:
	XBotInterface() { Compteur::ajouterConstructeur(); }
	XBotInterface(const XBotInterface& xbi) { Compteur::ajouterConstructeurCopie(); }
	virtual ~XBotInterface() { Compteur::ajouterDestructeur(); }

	virtual string getNom() const { return "XBot"; }
	virtual void bouger(int xAmi, int yAmi, int& x, int& y, int xEnnemi, int yEnnemi) {}
	virtual int attaquer(int xAmi, int yAmi, int xEnnemi, int yEnnemi) { return 0; }
	virtual void defendre(int degat) {}
	virtual bool estFonctionnel() const { return true; }

	friend ostream& operator <<(ostream& out, const XBotInterface& xbi) {
		out << "XBOT { " << xbi.getNom() << " }";
		return out;
	}

protected:
	virtual int calculerDistance(int x1, int y1, int x2, int y2) const { return 0; }
};
