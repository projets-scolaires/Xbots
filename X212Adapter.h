#pragma once
#include "XBotInterface.h"
#include "X212.h"
#include "Compteur.h"

class X212Adapter : public XBotInterface
{
private:
	X212* x212 = nullptr ;
public:
	X212Adapter(X212* x212){
		this->x212 = x212; 
		Compteur::ajouterConstructeur();
	}

	X212Adapter(string nom, int direction, int force, int vitesse, int vision)	  
	{
		Compteur::ajouterConstructeur();
	}

	~X212Adapter() {
		delete x212;
		Compteur::ajouterDestructeur();
	}

	X212Adapter(const X212Adapter& x212Adapter)
	{
		x212 = x212Adapter.x212 ;
		Compteur::ajouterConstructeurCopie();
	}


	void bouger(int xAmi, int yAmi, int& x, int& y, int xEnnemi, int yEnnemi) override;

	int attaquer(int xAmi, int yAmi, int xEnnemi, int yEnnemi) override;

	void defendre(int degat) override;

	bool estFonctionnel() const override;

	string getNom() const override; 

};
