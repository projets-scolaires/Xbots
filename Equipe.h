#pragma once
#include<iostream>
#include "XBot.h"
#include "XBotInterface.h"
#include<array>

using namespace std ;

class Equipe
{
private:
	string  nom ;
	//XBotInterface** xBots ;
	array <XBotInterface*, 10> xBots ;


public:
	Equipe(string nom) ;
    Equipe(const Equipe& equipe);
	//Equipe(const Equipe& equipe) = delete ;
    ~Equipe() ; 

	void ajouterXBot(XBotInterface* xBot, int position) ;
	XBotInterface& getXBot(int i) const { return *this->xBots[i]; };
    //int getNombreXBots() const { return this->nombreXBots ; } ;
	// void setNombreXBots(int nombreXBots) ;

friend ostream& operator <<(ostream& out, const Equipe& f);

	
} ;

