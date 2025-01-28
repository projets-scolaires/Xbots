#pragma once
#include<iostream>
using namespace std;

class R234
{
private:
	int direction;
	int strength;
	int speed;
	int range;

public:
	R234();//constructeur par defaut
	R234(int direction, int strenght, int speed, int range);
	//constructeur
	~R234(); // destructeur
	R234(const R234& r234); //constructeur par copie
	void initialiser(int direction, int strenght, int speed, int range);
	int doAttack(int defenceEnemy);
	int doProtect(int attackEnemy);
	void doMove(int& x, int& y);
	void doRotateLeft();
	void doRotateRight();

	int getDirection() const { return direction; }
	int getStrength() const { return strength; }
	int getSpeed() const { return speed; }
	int getRange() const { return range; }

	void setDirection(int direction);
	void setStrength(int strength);
	void setSpeed(int speed);
	void setRange(int range);



};

