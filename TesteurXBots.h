#pragma once
#include<iostream>
#include "X212.h"
#include "G990.h"
using namespace std;

#include "Compteur.h"

class TesteurXBots
{
private:
	X212* x212;
	G990* g990;

public:
	TesteurXBots(); //constructeur par defaut
	TesteurXBots(X212* x212, G990* g990);

	~TesteurXBots();
	TesteurXBots(const TesteurXBots& testeurXBots);//constructeur par copie

};
