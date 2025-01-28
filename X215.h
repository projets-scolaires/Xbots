#pragma once
#include<iostream>
using namespace std;

class X215
{
private:
	string nom;
	int direction;
	int force;
	int vitesse;
	int vision;
	bool rageCombat = false; //valeur par defaut


public: 
	X215();//constructeur par defaut
	X215(string nom, int direction, int force, int vitesse, int vision);
	//constructeur
	~X215(); // destructeur
	X215(X215& x215); // constructeur par copie

	void initialiser(string nom, int direction, int force, int vitesse, int vision, bool rageCombat = false);
	int bloquer();
	void mouvement(int& x, int& y);
	void superCourse(int& x, int& y);
	void esquive(int& x, int& y, int xDanger, int yDanger);
	void tournerLesTalons();

	string getNom() const { return nom; }
	int getDirection() const { return direction; }
	int getForce() const { return force;  }
	int getVitesse() const { return vitesse; }
	int getVision() const { return vision; }


	void exploserRage();
	void controlerRage();
	void setNom(string nom);
	void setDirection(int direction);
	void setForce(int force);
	void setVitesse(int vitesse);
	void setVision(int vision);

};

