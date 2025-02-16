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
		this->xBots[i] = nullptr;
	}
	Compteur::ajouterConstructeurCopie();
	
}

Equipe::~Equipe()
{
	for (int i = 0 ; i < this->nombreXBots ; i++) {
		delete this->xBots[i] ;
	}
	delete[] this->xBots ;
}

void Equipe::ajouterXBots(XBot* xBot, int position)
{
	cout << "l equipe" << this->nom << "ajoute un XBot" ;
}

void Equipe::setNombreXBots(int nombreXBots)
{
	this->nombreXBots = nombreXBots ;
}
