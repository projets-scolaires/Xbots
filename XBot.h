#pragma once
#include<iostream>
#include <cmath>

#include "Compteur.h" ;

using namespace std;

class XBot
{
private:
	string nom; 
public:
	//XBot();  
	XBot(string nom);
	XBot(const XBot& xBot);
	virtual ~XBot(); // <-- Destructeur 
	
	string getNom() const {return this->nom; };
	void bouger(int xAmi, int yAmi, int& x, int& y, int xEnnemi, int yEnnemi) ; 
	int attaquer(int x, int y, int xEnnemi, int yEnnemi);
	void defendre(int degat);
	bool EstFonctionnel();
protected:
	int calculerDistance(int x1, int y1, int x2, int y2);

friend ostream& operator <<(ostream& out, const XBot& f);
}; 

