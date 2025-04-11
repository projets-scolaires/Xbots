#pragma once
#include "XBotInterface.h"
#include "R234.h"
#include "Compteur.h"

class R234Adapter : public XBotInterface
{
private:
	R234* r234 = nullptr ;
public:
	R234Adapter(R234* r234) {
		this->r234 = r234;
		Compteur::ajouterConstructeur();
	}

	R234Adapter(string nom, int direction, int force, int vitesse, int vision)
	{
		Compteur::ajouterConstructeur();
	}

	~R234Adapter() {
		delete r234;
		Compteur::ajouterDestructeur();
	}

	R234Adapter(const R234Adapter& r234Adapter)
	{
		r234 = r234Adapter.r234;
		Compteur::ajouterConstructeurCopie();
	}


	void bouger(int xAmi, int yAmi, int& x, int& y, int xEnnemi, int yEnnemi) override;

	int attaquer(int xAmi, int yAmi, int xEnnemi, int yEnnemi) override;

	void defendre(int degat) override;

	bool estFonctionnel() const override;

	string getNom() const override;
};
