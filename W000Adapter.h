#pragma once
#include "XBotInterface.h"
#include "W000.h"
#include "Compteur.h"

class W000Adapter : public XBotInterface
{
private:
	W000* w000 = nullptr;
public:
	W000Adapter(W000* w000) {
		this->w000 = w000;
		Compteur::ajouterConstructeur();
	}

	W000Adapter(string nom, int direction, int force, int vitesse, int vision)
	{
		Compteur::ajouterConstructeur();
	}

	~W000Adapter() {
		delete w000;
		Compteur::ajouterDestructeur();
	}

	W000Adapter(const W000Adapter& w000Adapter)
	{
		w000 = w000Adapter.w000;
		Compteur::ajouterConstructeurCopie();
	}


	void bouger(int xAmi, int yAmi, int& x, int& y, int xEnnemi, int yEnnemi) override;

	int attaquer(int xAmi, int yAmi, int xEnnemi, int yEnnemi) override;

	void defendre(int degat) override;

	bool estFonctionnel() const override;

};
