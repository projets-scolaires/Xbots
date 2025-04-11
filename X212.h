#pragma once

#include<iostream>
#include<string>

using namespace std ;

class X212 
{
	private :
	   string nom ;
	   int direction ;
	   int force ;
	   int vitesse ;
	   int vision ;


	public :
		// Constructeurs 
		X212(); //constructeur par defaut
		X212(string nom, int direction, int force, int vitesse, int vision);
		//constructeur
		~X212(); //destructeur
		X212(const X212&); //constructer par copie

	   void initialiser(string nom, int direction, int force, int vitesse, int vision);
	   int bloquer();
	   void mouvement(int& x, int& y);
	   void superCourse(int& x, int& y);
	   void esquive(int& x, int& y, int xDanger, int yDanger) ;
	   
	   string getNom() const { return nom; }
	   int getDirection() const{ return direction; }
	   int getForce() const { return force; }
	   int getVitesse() const { return vitesse; }
	   int getVision() const { return vision; }  


	   void setNom(string nom);
	   void setDirection(int direction) ;
	   void setForce(int force);
	   void setVitesse(int vitesse);
	   void setVision(int vision);
	  
};