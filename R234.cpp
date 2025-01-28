#include "R234.h"
#include"Compteur.h"

R234::R234()
{
	setDirection(0);
	setStrength(0);
	setSpeed(0);
	setRange(0);
	//Compteur::ajouterConstructeur();
}

R234::R234(int direction, int strenght, int speed, int range)
{
	setDirection(direction);
	setStrength(strenght);
	setSpeed(speed);
	setRange(range);
	Compteur::ajouterConstructeur();
}

R234::~R234()
{
	Compteur::ajouterDestructeur();
}

R234::R234(const R234& r234)
{
	setDirection(r234.direction);
	setStrength(r234.strength);
	setSpeed(r234.speed);
	setRange(r234.range);
	Compteur::ajouterConstructeurCopie();
}

void R234::initialiser(int direction, int strenght, int speed, int range)
{
	/*if (_direction < 0) { _direction = 0; }
	if (_direction > 3) { _direction = 3; }*/
   setDirection(direction);
   setStrength(strenght);
   setSpeed(speed);
	setRange(range);
}

int R234::doAttack(int defenceEnemy)
{
	return max(0, strength - defenceEnemy); // il retourne 0 si strenght - _defenceEnemy <0
}

int R234::doProtect(int attackEnemy)
{
	return max(0, (attackEnemy - (speed + strength) / 2));
}

void R234::doMove(int& x, int& y)
{
	speed += direction;
}
void R234::doRotateLeft()
{
	direction = (direction + 1) % 4;
}

void R234::doRotateRight()
{
	direction = (direction + 3) % 4;
}

void R234::setDirection(int direction) { 
	this->direction =  min(max(direction, 0), 3);
}
void R234::setStrength(int strength) { this->strength = strength; }
void R234::setRange(int range) { this->range = range; }
void R234::setSpeed(int _speed) {this-> speed = speed; }