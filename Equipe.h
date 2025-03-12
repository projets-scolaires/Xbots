#pragma once
#include<iostream>
#include "XBot.h"


using namespace std ;

class Equipe
{
private:
	int nombreXBots ;
	string  nom ;
	XBot** xBots ;

public:
	Equipe(string nom, int nombreXBots) ;
    Equipe(const Equipe& equipe);
	//Equipe(const Equipe& equipe) = delete ;
    ~Equipe() ; 

	void ajouterXBots(XBot* xBot, int position) ;
	XBot& getXBot(int i) const { return *this->xBots[i]; };
    int getNombreXBots() const { return this->nombreXBots ; } ;
	void setNombreXBots(int nombreXBots) ;

friend ostream& operator <<(ostream& out, const Equipe& f);

	
} ;

