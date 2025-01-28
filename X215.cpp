#include "X215.h"
#include"Compteur.h"

X215::X215()
{
	setDirection(0);
	setNom("X215_initial");
	setForce(0);
	setVitesse(0);
	setVision(0);
	//Compteur::ajouterConstructeur();
}

X215::X215(string nom, int direction, int force, int vitesse, int vision)
{
	setDirection(direction);
	setNom(nom);
	setForce(force);
	setVitesse(vitesse);
	setVision(vision);
	Compteur::ajouterConstructeur();
}

X215::~X215()
{
	Compteur::ajouterDestructeur();
}

X215::X215(X215& x215)
{
	setDirection(x215.getDirection());
	setNom(x215.getNom());
	setForce(x215.getForce());
	setVitesse(x215.getVitesse());
	setVision(x215.getVision());
	Compteur::ajouterConstructeurCopie();
}

void X215::initialiser(string nom, int direction, int force, int vitesse, int vision, bool rageCombat )
{
	setDirection(direction);
	setNom(nom);
	setForce(force);
	setVitesse(vitesse);
	setVision(vision);
	this->rageCombat = rageCombat; 

}
int X215::bloquer()
{
	if (rageCombat == true) { return force * 3; }
	else { return vitesse / 3 + force; }
}
void X215::mouvement(int& x, int& y)
{
	int deplacement = vitesse + 1; 
	switch (direction)
	{
	case 0: x -= deplacement; break;
	case 1: y += deplacement; break;
	case 2: x += deplacement; break;
	case 3: y -= deplacement; break; 
	}
	x = max(min(x, 9), 0);
	y = max(min(y, 9), 0);
}

void X215::superCourse(int& x, int& y)
{
	if (rageCombat == true) {
		mouvement(x,  y);
	}
	else {
		int deplacement = (vitesse + (vitesse * force / 10));
		switch (direction) {
		case 0: x -= deplacement; break;
		case 1: y += deplacement; break;
		case 2: x += deplacement; break;
		case 3: y -= deplacement; break;
		}
		x = max(min(x, 9), 0);
		y = max(min(y, 9), 0);

	}
}

void X215::esquive(int& x, int& y, int xDanger, int yDanger){}

void X215::tournerLesTalons() {
	direction = (direction + 2) % 4;//il tourne de 180 degres
}

void X215::exploserRage() {rageCombat = true;}

void X215::controlerRage(){ rageCombat = false;}

void X215::setNom(string nom) { this->nom = nom; }

void X215::setDirection(int direction) { 
	/*if (_direction < 0) { _direction = 0; }
	if (_direction > 3){_direction = 3; */
	this->direction = min(max(direction, 0), 3);
}

void X215::setForce(int force) { this->force = force; }

void X215::setVitesse(int vitesse) { this->vitesse = vitesse; }

void X215::setVision(int vision) { this->vision = vision; }