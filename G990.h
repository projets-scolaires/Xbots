#pragma once
#include<iostream>
using namespace std;

class G990
{
private:
	bool nord;
	bool est;
	long energiePhysique;
	long energieMaximale;
	long vision;

public:
	G990();
	G990(bool nord, bool est, long energiePhysique, long energieMaximale, long vision);
	~G990();
	G990(const G990& g990);
	void initialiser(bool nord, bool est, long energiePhysique,long energieMaximale ,long vision);
	void deplacementNordSud(int valeur, int& x, int& y);
	void deplacementEstOuest(int valeur, int& x, int& y);
	void regarderNord();
	void regarderSud();
	void regarderEst();
	void regarderOuest();
	void bloquer(int xAmi, int yAmi, int& x, int& y, int xEnnemi, int yEnnemi);

	bool getNord() const { return nord; }
	bool getEst() const { return est; }
	long getEnergiePhysique() const { return energiePhysique; }
	long getEnergieMaximale() const { return energieMaximale; }
	long getVision() const { return vision; }


	void setEnergiePhysique(long energiePhysique);

	void setEnergieMaximale(long energieMaximale);

	void setVision(long vision);


};

