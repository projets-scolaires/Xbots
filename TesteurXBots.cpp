#include "TesteurXBots.h"

TesteurXBots::TesteurXBots()
{
	this->g990 = nullptr;
	this->x212 = nullptr;
}

TesteurXBots::TesteurXBots(X212* x212, G990* g990)
{
	this->x212 = x212;
	this->g990 = g990;
	Compteur::ajouterConstructeur; 
}

TesteurXBots::~TesteurXBots()
{
	Compteur::ajouterDestructeur;
}

TesteurXBots::TesteurXBots(const TesteurXBots& testeurXBots)
{
	this->x212 = testeurXBots.x212;
	this->g990 = testeurXBots.g990;
	Compteur::ajouterConstructeurCopie;
}






