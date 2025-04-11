#pragma once

#include "XBotInterface.h"
#include "Equipe.h"
#include "Hasard.h"

class AreneFinale
{
public:
	static constexpr int TAILLE = 10;
	static constexpr int NOMBRE_XBOT = 10;

	AreneFinale();
	AreneFinale(const AreneFinale& arene) = delete;
	~AreneFinale();

	void setEquipes(Equipe* equipeA, Equipe* equipeB);
	void debuterCombat();

private:
	static constexpr int EQUIPE_A = 0;
	static constexpr int EQUIPE_B = 1;

	class Combattant
	{
	public:
		Combattant(XBotInterface* xbot, int x, int y, char id)
		{
			this->xbot = xbot;
			this->x = x;
			this->y = y;
			this->id = id;
		}
		int x;
		int y;
		char id;
		XBotInterface* xbot;

		friend ostream& operator<<(ostream& os, const Combattant& combattant)
		{
			os << "{id:" << combattant.id << "/x:" << combattant.x << "/y:" << combattant.y
				<< "/xbot:" << combattant.xbot << "}";
			return os;
		}

	};

	Combattant*** combattants;
	Hasard hasard;

	bool minimumFonctionnel(Combattant** equipe) const;
	void tourCombat(Combattant** attaquants, Combattant** defenseurs);
	int getVivant(Combattant** equipe, int moi) const;
	void setCoordonneesAleatoire(int& x, int& y);
	bool verifierDisponibiliteCoordonnees(int x, int y) const;
	void afficherCombattants() const;
	friend ostream& operator<<(ostream& os, const AreneFinale& arene);
};