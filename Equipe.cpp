#include "Equipe.h"

Equipe::Equipe(string nom, int nombreXBots)
{
	this->nom = nom ; 
	setNombreXBots(nombreXBots);
	this->xBots = new XBot*[nombreXBots];
	for (int i = 0; i < nombreXBots; i++) {
		this->xBots[i] = nullptr ; 
	}
	Compteur::ajouterConstructeur();

}

Equipe::Equipe(const Equipe&  equipe)
{

	this->nom = equipe.nom ;
	this->nombreXBots = equipe.nombreXBots ;
	for (int i = 0; i < nombreXBots; i++) {
		this->xBots[i] = equipe.xBots[i];
		//this->xBots[i] = nullptr;
	}
	Compteur::ajouterConstructeurCopie();
	
}


Equipe::~Equipe()
{
	for (int i = 0 ; i < nombreXBots ; i++) {
		delete xBots[i] ;
		Compteur::ajouterDestructeur();
	}
	delete[] xBots ;
	Compteur::ajouterDestructeur();
}

void Equipe::ajouterXBots(XBot* xBot, int position)
{
	cout << " l'equipe " << nom << " ajoute un XBot a la position " 
		<< position + 1 << endl ;
	xBots[position] = xBot;
}

void Equipe::setNombreXBots(int nombreXBots)
{
	this->nombreXBots = nombreXBots ;
}

ostream& operator<< (ostream& os, const Equipe& equipe) {
	os << " Equipe : " << equipe.nom << "\n";
	for (int i = 0; i < equipe.nombreXBots; ++i) {
			os  << *(equipe.xBots[i]) << "\n";  
	}
	return os;
}
