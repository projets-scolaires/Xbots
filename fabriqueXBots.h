#pragma once
#include<iostream>
#include "Compteur.h" 
#include "Equipe.h"
#include"X212Adapter.h"
#include"X213Adapter.h"
#include"X215Adapter.h"
#include"G990Adapter.h"
#include"R234Adapter.h"
#include"W000Adapter.h"
#include "Hasard.h"

#include<iostream>
using namespace std;

class FabriqueXBots
{
public :
	FabriqueXBots();
	FabriqueXBots(const FabriqueXBots& fxBot);
	~FabriqueXBots(); 

	Equipe* creerEquipeXBot(int nbrXBotACreer, string nomEquipe);

	X212Adapter* creerX212() const ;
	X213Adapter* creerX213() const;
	X215Adapter* creerX215() const; 
	G990Adapter* creerG990() const; 
	R234Adapter* creerR234() const; 
	W000Adapter* creerW000Adapter(); 
	Hasard hasard;


};

