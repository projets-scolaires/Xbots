#include<iostream>
#include "G990.h"
#include "Compteur.h"
using namespace std;


G990::G990()
{
	this->nord = false;
	this->est = false;
	setEnergiePhysique(0);
	setEnergieMaximale(0);
	setVision(0);
	Compteur::ajouterConstructeur();

}

G990::G990(bool nord, bool est, long energiePhysique, long energieMaximale, long vision)
{
	this->nord = nord;
	this->est = est;
	setEnergiePhysique(energiePhysique);
	setEnergieMaximale(energieMaximale);
	setVision(vision);
	Compteur::ajouterConstructeur();
}

G990::~G990()
{
	Compteur::ajouterDestructeur();
}

G990::G990(const G990& g990)
{
	this->nord = g990.nord;
	this->est = g990.est;
	setEnergiePhysique(g990.getEnergiePhysique());
	setEnergieMaximale(g990.getEnergieMaximale());
	setVision(g990.getVision());
	Compteur::ajouterConstructeurCopie();
}

void G990::initialiser(bool nord, bool est, long energiePhysique, long energieMaximale,long vision)
{
	this->nord = nord;
	this->est = est;
	setEnergiePhysique(energiePhysique);
	setEnergieMaximale(energieMaximale);
	setVision(vision);
}

void G990::deplacementNordSud(int valeur, int& x, int& y)
{
	if (nord == true) { y-=this->energieMaximale ; }
	else { y += this->energieMaximale; }
	y = min(max(0, y), 9);
}
void G990::deplacementEstOuest(int valeur, int& x, int& y){
	if (est == true) { x -= this->energieMaximale; }
	else { x += this->energieMaximale; }
	x = min(max(0, x), 9);
 
}

void G990::regarderNord() { nord = true; }

void G990::regarderSud() { nord = false; }
void G990::regarderEst() { est = true; }
void G990::regarderOuest() { est = false; }
void G990::bloquer(int xAmi, int yAmi, int& x, int& y, int xEnnemi, int yEnnemi){}

void G990::setEnergiePhysique(long energiePhysique)
{
	this->energiePhysique = energiePhysique;
}

void G990::setEnergieMaximale(long energieMaximale)
{
	this->energieMaximale = energieMaximale;
}

void G990::setVision(long vision)
{
	this->vision = vision;
}