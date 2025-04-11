#pragma once
#include "XBotInterface.h"
#include "X215.h"
#include "Compteur.h"

class X215Adapter : public XBotInterface
{
private:
	X215* x215 = nullptr ;
public:
	X215Adapter(X215* x215) {
		this->x215 = x215; 
		Compteur::ajouterConstructeur();
	}

	X215Adapter(string nom, int direction, int force, int vitesse, int vision)
	{
		Compteur::ajouterConstructeur();
	}

	~X215Adapter() {
		delete x215; 
		Compteur::ajouterDestructeur();
	}

	X215Adapter(const X215Adapter& x215Adapter)
	{
		x215 = x215Adapter.x215;
		Compteur::ajouterConstructeurCopie();
	}


	void bouger(int xAmi, int yAmi, int& x, int& y, int xEnnemi, int yEnnemi) override;

	int attaquer(int xAmi, int yAmi, int xEnnemi, int yEnnemi) override;

	void defendre(int degat) override;

	bool estFonctionnel() const override;

	string getNom() const override;

};
