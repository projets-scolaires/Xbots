#include "fabriqueXBots.h"

FabriqueXBots::FabriqueXBots()
{
	Compteur::ajouterConstructeur();
}

FabriqueXBots::FabriqueXBots(const FabriqueXBots& fxBot)
{
	Compteur::ajouterConstructeurCopie(); 
}

FabriqueXBots::~FabriqueXBots()
{
	Compteur::ajouterDestructeur();
}

Equipe* FabriqueXBots::creerEquipeXBot(int nbrXBotACreer, string nomEquipe)
{
	return nullptr;
}

X212Adapter* FabriqueXBots::creerX212() const
{
	X212* x212 = new X212("X212", 3, 4, 4, 4);
	return new X212Adapter(x212);
}

X213Adapter* FabriqueXBots::creerX213() const
{
	X213* x213 = new X213("x213", 0, 5, 4, 3);
	return new X213Adapter(x213);
}

X215Adapter* FabriqueXBots::creerX215() const
{
	X215* x215 = new X215("x215", 2, 3, 5, 2);
	return new X215Adapter(x215);
}

G990Adapter* FabriqueXBots::creerG990() const
{
	G990* g990 = new G990(true, true, 32, 65, 121);
	return new G990Adapter(g990);
}

R234Adapter* FabriqueXBots::creerR234() const
{
	R234* r234 = new R234(2, 3, 6, 3);
	return new R234Adapter(r234);
}

W000Adapter* FabriqueXBots::creerW000Adapter()
{
	W000* w000 = new W000("w000", 3, 5, 12, 10);
	return new W000Adapter(w000);
}



