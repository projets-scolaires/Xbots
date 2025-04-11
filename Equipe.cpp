#include "Equipe.h"

Equipe::Equipe(string nom)
{
	this->nom = nom ;
	for (int i = 0; i < xBots.size(); i++) {
		this->xBots[i] = nullptr ; 
	}
	Compteur::ajouterConstructeur();

}

Equipe::Equipe(const Equipe&  equipe)
{

	this->nom = equipe.nom ;
	for (int i = 0; i < xBots.size(); i++) {
		if (equipe.xBots[i] != nullptr) {
			this->xBots[i] = equipe.xBots[i];
			//this->xBots[i] = new XBotInterface(*equipe.xBots[i]);
		}
		else {
			this->xBots[i] = nullptr;
		}
	}

	Compteur::ajouterConstructeurCopie();
	
}


Equipe::~Equipe()
{
	for (XBotInterface* xBot : xBots) {
		delete xBot ;  
		Compteur::ajouterDestructeur();
	}
}


void Equipe::ajouterXBot(XBotInterface* xBot, int position)
{
	cout << " l'equipe " << nom << " ajoute un XBot a la position " 
		<< position + 1 << endl ;
	xBots[position] = xBot;
}

//void Equipe::setNombreXBots(int nombreXBots)
//{
//	this->nombreXBots = nombreXBots ;
//}

ostream& operator<< (ostream& os, const Equipe& equipe) {
	os << " Equipe : " << equipe.nom << "\n";
	for (int i = 0; i < equipe.xBots.size(); ++i) {
			os  << (equipe.xBots[i]) << "\n";
	}
	return os;
}
