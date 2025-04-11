#include "X213.h"
#include "Compteur.h"


X213::X213()
{
	setDirection(0);
	setNom("x213_initial");
	setForce(0);
	setVitesse(0);
	setVision(0);
	Compteur::ajouterConstructeur();
}

X213::X213(string nom, int direction, int force, int vitesse, int vision)
{
	setDirection(direction);
	setNom(nom);
	setForce(force);
	setVitesse(vitesse);
	setVision(vision);
	Compteur::ajouterConstructeur();
}

X213::~X213() {
	Compteur::ajouterDestructeur();
}

X213::X213(const X213& x213) {
	setDirection(x213.getDirection());
	setNom(x213.getNom());
	setForce(x213.getForce());
	setVitesse(x213.getForce());
	setVision(x213.getVision());
	Compteur::ajouterConstructeurCopie();
}

void X213::initialiser(string nom, int direction, int force, int vitesse, int vision)
{
	setDirection(direction);
	setNom(nom);
	setForce(force);
	setVitesse(vitesse);
	setVision(vision);
}

int X213::bloquer() {
	return vitesse / 3 + force;
}

void X213::mouvement(int& x, int& y) {
	int deplacement = vitesse + 1;
	switch (direction) {
	case 0: x -= deplacement; break;
	case 1: y += deplacement; break;
	case 2: x += deplacement; break;
	case 3: y -= deplacement; break;
	}
	x = max(min(x, 9), 0);
	y = max(min(y, 9), 0);
}

void X213::superCourse(int& x, int& y) {
	int deplacement = vitesse + (vitesse * (force / 10));
	switch (direction)
	{
	case 0: x -= deplacement; break;
	case 1: y += deplacement; break;
	case 2: x += deplacement; break;
	case 3: y -= deplacement; break;
	}
}

void X213::tournerLesTalons() {
	direction = (direction + 2) % 4; //0 <-- -->2 et 1<-- -->3 
}

void X213::setNom(string nom) { this->nom = nom; }
void X213::setDirection(int direction) {
	/*if (direction < 0) { direction = 0; }
if (direction > 3){direction = 3; }*/

	this->direction = min(max(direction, 0), 3);
}
void X213::setForce(int force) { this->force = force; }
void X213::setVision(int vision) { this->vision = vision; }
void X213::setVitesse(int vitesse) { this->vitesse = vitesse; }