#pragma once
#include<iostream>

using namespace std;

class W000
{
private:
	string nom;
	int direction;
	int force;
	int vitesse;
	int vision;

public:
	W000(); 
	W000(string nom, int direction, int force, int vitesse, int vision);
	~W000();
	W000(const W000& W000);
	void initialiser(string nom, int direction, int force, int vitesse, int vision);
	void bloquer(int xAmi, int yAmi, int& x, int& y, int xEnnemi, int yEnnemi);
	void bouger(int& x, int& y);

	string getNom() const { return this->nom; }
	int getDirection() const { return this->direction; }
	int getForce() const { return this->force; }
	int getVitesse() const { return this->vitesse; }
	int getVision() const { return this->vision; }

	void setNom(string nom);
	void setDirection(int direction);
	void setForce(int force);
	void setVitesse(int vitesse);
	void setVision(int vision);












};

