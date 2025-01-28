#include "X212.h"
#include "Compteur.h"


X212::X212()
{
	setDirection(0);
	setNom("x212_initial");
	setForce(0);
	setVitesse(0);
	setVision(0);
	//Compteur::ajouterConstructeur();
}

X212::X212(string nom, int direction, int force, int vitesse, int vision)
{
	setDirection(direction);
	setNom(nom);
	setForce(force);
	setVitesse(vitesse);
	setVision(vision);
	Compteur::ajouterConstructeur();
}

X212::~X212() {
	Compteur::ajouterDestructeur();
}

X212::X212(const X212& x212) {
	setDirection(x212.getDirection());
	setNom(x212.getNom());
	setForce(x212.getForce());
	setVitesse(x212.getForce());
	setVision(x212.getVision());
	Compteur::ajouterConstructeurCopie();
}

void X212::initialiser(string nom, int direction, int force, int vitesse, int vision)
{
	setDirection(direction);
	setNom(nom);
	setForce(force);
	setVitesse(vitesse);
	setVision(vision); 

};

int X212::bloquer()
{
	return vitesse/3 + force;
};

void X212::mouvement(int& x, int& y)
{
	int deplacement = vitesse + 1;
	switch (direction)
	{
	case 0 : x -= deplacement; break;
	case 1 : y += deplacement; break;
	case 2 : x += deplacement; break;
	case 3 : y -= deplacement; break;
	}
	x = max(min(x, 9), 0);
	y = max(min(y, 9), 0);

}

void X212:: superCourse(int& x, int& y)
{
	int deplacement = vitesse + (vitesse * force / 10);
	switch (direction)
	{
	case 0 : x -= deplacement; break;
	case 1 : y += deplacement; break;
	case 2 : x += deplacement;  break;
	case 3: y -= deplacement; break;
	}
	x = max(min(x, 9), 0);
	y = max(min(y, 9), 0);
}

void X212:: esquive(int& x, int& y, int _xDanger, int _yDanger)
{
	this->vitesse = this->vitesse / 2; 
	int deplacement = this->vitesse + 2;
	x = max(min(x, 9), 0);
	y = max(min(y, 9), 0);

}

void X212::setNom(string nom) 
{
	this->nom = nom;
}



void X212::setDirection(int direction)
{
	/*if (direction < 0) { direction = 0; }
	if (direction > 3){direction = 3;}*/
	this->direction = min(max(direction, 0), 3);
}

void X212::setForce(int force)
{
	this->force = force;
}

void X212::setVitesse(int vitesse)
{
	this->vitesse = vitesse;
}

void X212::setVision(int vision)
{
	this->vision = vision;
}

