#pragma once
#include<iostream>
#include<string>
using namespace std;

class X213
{
private :
	string nom;
	int direction;
	int force;
	int vitesse;
	int vision;
public :
	X213(); //Contructeur par defaut
	X213(string nom, int direction, int force, int vitesse, int vision);
	//constructeur
	~X213(); //destructeur
	X213(const X213&); //constructeur par copie
	void initialiser(string nom, int direction, int force, int vitesse, int vision);
	int bloquer();
	void mouvement(int& x, int& y);
	void superCourse(int& x, int& y);
	void tournerLesTalons();

	string getNom() const { return nom; }
	int getDirection() const { return direction; }
	int getForce() const { return force; }
	int getVitesse() const { return vitesse; }
	int getVision() const { return vision; }

	void setNom(string nom);
	void setDirection(int direction);
	void setForce(int force);
	void setVitesse(int vitesse);
	void setVision(int vision);


};

