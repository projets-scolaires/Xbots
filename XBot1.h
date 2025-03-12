#pragma once

#include "XBot.h"
class XBot1 : public XBot
{

private :
	int nombreAttaquesRecues;
	
public :
	XBot1(string nom) ;
	XBot1(const XBot1& xBot1);
	~XBot1(); 

	void defendre(int degat); // redefinition
	void defendre(); // surchage de la methode
	bool EstFonctionnel();
	



};

