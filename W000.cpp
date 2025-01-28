#include "W000.h"
#include "Compteur.h"


W000::W000()
{
	setNom("W000_initial");
	setDirection(0);
	setForce(0);
	setVitesse(0);
	setVision(0);
	//Compteur::ajouterConstructeur();
	
}

W000::W000(string nom, int direction, int force, int vitesse, int vision)
{
	setNom(nom);
	setDirection(direction);
	setForce(force);
	setVitesse(vitesse);
	setVision(vision);
	Compteur::ajouterConstructeur();
}

W000::~W000()
{
	Compteur::ajouterDestructeur();
}

W000::W000(const W000& w000)
{
	setNom(w000.getNom());
	setDirection(w000.getDirection());
	setForce(w000.getForce());
	setVitesse(w000.getVitesse());
	setVision(w000.vision);
	Compteur::ajouterConstructeurCopie();
}

void W000::initialiser(string nom, int direction, int force, int vitesse, int vision)
{
	setNom(nom);
	setDirection(direction);
	setForce(force);
	setVitesse(vitesse);
	setVision(vision);

}

void W000::bloquer(int xAmi, int yAmi,int& x, int& y, int xEnnemi, int yEnnemi){}

void W000::bouger(int& x, int& y) {
	vitesse += 2;

}
void W000::setNom(string nom) { this->nom = nom; }
void W000::setDirection(int direction) { 
	/*if (direction < 0) { direction = 0; }
	if (direction > 3){direction = 3; */
	this->direction = min(max(direction, 0), 3);
}
void W000::setForce(int force) { this->force = force; }
void W000::setVitesse(int vitesse) { this->vitesse = vitesse; }
void W000::setVision(int vision) { this->vision = vision; }