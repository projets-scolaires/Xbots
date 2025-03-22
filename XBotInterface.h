#pragma once
#include<iostream>
#include "XBot.h" ;
#include "Compteur.h" ;
using namespace std; 

class XBotInterface 
{
public :
	XBotInterface(XBot* xBot);
	XBotInterface(const XBotInterface& xBot);
	virtual ~XBotInterface();

	virtual string getNom() const { return nom; }
	virtual void bouger(int xAmi, int yAmi, int& x, int& y, int xEnnemi, int yEnnemi);
	virtual int attaquer(int xAmi, int yAmi, int xEnnemi, int yEnnemi);
	virtual void defendre(int degat);
	virtual bool estFonctionnel() const; 

	friend ostream& operator << (ostream os, const XBot& xBot) {
		return os;
	}

	friend ostream & operator <<(ostream& out, const XBotInterface& xbi) {
		out << "XBOT { " << xbi.getNom() << "}"; 
		return out;
	}
protected:
	int  calculerDistance(int x1, int y1, int x2, int y2)  const ;
	string nom;

};

