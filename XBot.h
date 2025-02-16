#pragma once
#include<iostream>
#include <cmath>

#include "Compteur.h" ;

using namespace std;

class XBot
{
private:
	string nom; 
	int x ;
	int y ; 
	//jai ajouté x et y pour pouvoir evoluer, ca n a pas ete donne dans l exo
public:
	XBot(string nom);
	XBot(const XBot& xBot);
	~XBot(); // <-- Destructeur 
	
	string getNom() const { return this->nom; };
	int getx() const { return this->x; }
	int gety() const { return this->y; }
	void bouger(int xAmi, int yAmi, int& x, int& y, int xEnnemi, int yEnnemi) ; 
	int attaquer(int x, int y, int xEnnemi, int yEnnemi);
	void defendre(int degat);
	bool EstFonctionnel();
	int calculerDistance(int x1, int y1, int x2, int y2);
}; 

