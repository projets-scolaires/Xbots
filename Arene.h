#pragma once
#include "equipe.h"
#include<iostream>

using namespace std;


class Arene
{
private:
	Equipe* equipes[2];

public : 
	Arene(Equipe& equipe1, Equipe& equipe2);
	//Arene(const Arene& arene) = delete;
	Arene(const Arene& arene);
	~Arene();
	

	void debuterCombat();
};

