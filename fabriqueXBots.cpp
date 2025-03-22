#include "fabriqueXBots.h"

fabriqueXBots::fabriqueXBots()
{
	Compteur::ajouterConstructeur();
}

fabriqueXBots::fabriqueXBots(const fabriqueXBots& fxBot)
{
	Compteur::ajouterConstructeurCopie(); 
}

fabriqueXBots::~fabriqueXBots()
{
	Compteur::ajouterDestructeur();
}

Equipe* fabriqueXBots::creerEquipeXBot(int nbrXBotACreer, string nomEquipe)
{
	return nullptr;
}


