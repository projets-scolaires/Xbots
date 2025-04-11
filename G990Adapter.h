#pragma once
#include "XBotInterface.h"
#include "G990.h"
#include "Compteur.h"

class G990Adapter : public XBotInterface
{
private:
	G990* g990 = nullptr;
public:
	G990Adapter(G990* g990) {
		this->g990 = g990;
		Compteur::ajouterConstructeur();
	}

	G990Adapter(string nom, int direction, int force, int vitesse, int vision)
	{
		Compteur::ajouterConstructeur();
	}

	~G990Adapter() {
		delete g990;
		Compteur::ajouterDestructeur();
	}

	G990Adapter(const G990Adapter& g990Adapter)
	{
		this->g990 = g990Adapter.g990;
		Compteur::ajouterConstructeurCopie();
	}


	void bouger(int xAmi, int yAmi, int& x, int& y, int xEnnemi, int yEnnemi) override;

	int attaquer(int xAmi, int yAmi, int xEnnemi, int yEnnemi) override;

	void defendre(int degat) override;

	bool estFonctionnel() const override;

	string getNom() const override;

};
