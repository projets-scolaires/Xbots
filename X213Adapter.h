#pragma once
#include "XBotInterface.h"
#include "X213.h"
#include "Compteur.h"

class X213Adapter : public XBotInterface
{
private:
	X213* x213 = nullptr ;
public:
	X213Adapter(X213* x213) {
		this->x213 = x213;
		Compteur::ajouterConstructeur();
	}

	X213Adapter(string nom, int direction, int force, int vitesse, int vision)
	{
		Compteur::ajouterConstructeur();
	}

	~X213Adapter() {
		delete x213;
		Compteur::ajouterDestructeur();
	}

	X213Adapter(const X213Adapter& x213Adapter)
	{
		x213 = x213Adapter.x213;
		Compteur::ajouterConstructeurCopie();
	}


	void bouger(int xAmi, int yAmi, int& x, int& y, int xEnnemi, int yEnnemi) override;

	int attaquer(int xAmi, int yAmi, int xEnnemi, int yEnnemi) override;

	void defendre(int degat) override;

	bool estFonctionnel() const override;

	string getNom() const override;
};
