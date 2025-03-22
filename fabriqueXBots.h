#pragma once
#include<iostream>
#include "Compteur.h" ;
#include "Equipe.h"
using namespace std;

class fabriqueXBots
{
public :
	fabriqueXBots();
	fabriqueXBots(const fabriqueXBots& fxBot);
	~fabriqueXBots(); 

	Equipe* creerEquipeXBot(int nbrXBotACreer, string nomEquipe);

};

