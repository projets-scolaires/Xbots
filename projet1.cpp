// projet1.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
/*
#include"X212.h"
#include"X213.h"
#include"X215.h"
#include"R234.h"
#include"G990.h"
#include"W000.h"
#include "TesteurXBots.h"
*/

#include "Compteur.h"
#include "Equipe.h"
#include "XBot.h"
#include "Arene.h"
#include "XBot1.h"
#include "XBot2.h"
#include "AreneFinale.h"
#include "FabriqueXBots.h"

/*

void testX212()
{
	int x = 3;
	int y = 5;
	string nom = "x212_1";
	int direction = 0;
	int force = 4;
	int vitesse = 3;
	int vision = 5;

	X212 x212;
	x212.initialiser(nom, direction, force, vitesse, vision);

	cout << "NOM       : " << x212.getNom() << endl;
	x212.setDirection(-1000);
	cout << "DIRECTION : " << x212.getDirection() << endl;
	cout << "FORCE     : " << x212.getForce() << endl;
	cout << "VITESSE   : " << x212.getVitesse() << endl;
	cout << "VISION    : " << x212.getVision() << endl;

	cout << "BLOQUER   : " << x212.bloquer() << endl;
	cout << "-. (" << x << "," << y << "," << x212.getDirection() << ")" << endl;
	x212.mouvement(x, y);
	cout << "MOUVEMENT ";
	cout << "-. (" << x << "," << y << "," << x212.getDirection() << ")" << endl;

	x212.setDirection(2);
	cout << "CHANGEMENT DE DIRECTION";
	cout << "-. (" << x << "," << y << "," << x212.getDirection() << ")" << endl;
	x212.superCourse(x, y);
	cout << "SUPER COURSE ";
	cout << "-. (" << x << "," << y << "," << x212.getDirection() << ")" << endl;
	cout << "MOUVEMENT ";
	x212.mouvement(x, y);
	cout << "-. (" << x << "," << y << "," << x212.getDirection() << ")" << endl;

	x212.setDirection(1);
	x212.esquive(x, y, x, y + 2);
	cout << "ESQUIVE";
	cout << "-. (" << x << "," << y << "," << x212.getDirection() << ")" << endl;
}
*/

/*
void testX213()
{
	int x = 3;
	int y = 5;
	string nom = "x213_1";
	int direction = 0;
	int force = 4;
	int vitesse = 3;
	int vision = 5;

	X213 x213;
	x213.initialiser(nom, direction, force, vitesse, vision);


	cout << "NOM       : " << x213.getNom() << endl;
	x213.setDirection(-1000);
	cout << "DIRECTION : " << x213.getDirection() << endl;
	cout << "FORCE     : " << x213.getForce() << endl;
	cout << "VITESSE   : " << x213.getVitesse() << endl;
	cout << "VISION    : " << x213.getVision() << endl;

	cout << "BLOQUER   : " << x213.bloquer() << endl;
	cout << "-. (" << x << "," << y << "," << x213.getDirection() << ")" << endl;
	x213.mouvement(x, y);
	cout << "MOUVEMENT ";
	cout << "-. (" << x << "," << y << "," << x213.getDirection() << ")" << endl;

	x213.setDirection(2);
	cout << "CHANGEMENT DE DIRECTION";
	cout << "-. (" << x << "," << y << "," << x213.getDirection() << ")" << endl;

	x213.superCourse(x, y);
	cout << "SUPER COURSE ";
	cout << "-. (" << x << "," << y << "," << x213.getDirection() << ")" << endl;
	cout << "MOUVEMENT ";
	x213.mouvement(x, y);
	cout << "-. (" << x << "," << y << "," << x213.getDirection() << ")" << endl;

	x213.setDirection(1);
	cout << "CHANGEMENT DE DIRECTION";
	cout << "-. (" << x << "," << y << "," << x213.getDirection() << ")" << endl;
	x213.tournerLesTalons();
	cout << "TOURNER LES TALONS ";
	cout << "-. (" << x << "," << y << "," << x213.getDirection() << ")" << endl;
}
*/

/*
void testX215()
{
	int x = 3;
	int y = 5;
	string nom = "x215_1";
	int direction = 0;
	int force = 4;
	int vitesse = 3;
	int vision = 5;

	X215 x215;
	x215.initialiser(nom, direction, force, vitesse, vision);


	cout << "NOM       : " << x215.getNom() << endl;
	x215.setDirection(-1000);
	cout << "DIRECTION : " << x215.getDirection() << endl;
	cout << "FORCE     : " << x215.getForce() << endl;
	cout << "VITESSE   : " << x215.getVitesse() << endl;
	cout << "VISION    : " << x215.getVision() << endl;

	cout << "BLOQUER   : " << x215.bloquer() << endl;
	cout << "-. (" << x << "," << y << "," << x215.getDirection() << ")" << endl;
	x215.mouvement(x, y);
	cout << "MOUVEMENT ";
	cout << "-. (" << x << "," << y << "," << x215.getDirection() << ")" << endl;

	x215.setDirection(2);
	cout << "CHANGEMENT DE DIRECTION";
	cout << "-. (" << x << "," << y << "," << x215.getDirection() << ")" << endl;

	x215.superCourse(x, y);
	cout << "SUPER COURSE ";
	cout << "-. (" << x << "," << y << "," << x215.getDirection() << ")" << endl;
	cout << "MOUVEMENT ";
	x215.mouvement(x, y);
	cout << "-. (" << x << "," << y << "," << x215.getDirection() << ")" << endl;

	x215.setDirection(1);
	cout << "CHANGEMENT DE DIRECTION";
	cout << "-. (" << x << "," << y << "," << x215.getDirection() << ")" << endl;
	x215.tournerLesTalons();
	cout << "TOURNER LES TALONS ";
	cout << "-. (" << x << "," << y << "," << x215.getDirection() << ")" << endl;

	x215.setDirection(1);
	cout << "CHANGEMENT DE DIRECTION";
	cout << "-. (" << x << "," << y << "," << x215.getDirection() << ")" << endl;
	x215.esquive(x, y, x, y + 2);
	cout << "ESQUIVE";
	cout << "-. (" << x << "," << y << "," << x215.getDirection() << ")" << endl;
}
*/

/*
void testR234()
{
	int x = 3;
	int y = 5;
	int direction = 0;
	int strength = 4;
	int speed = 3;
	int range = 5;

	R234 r234;
	r234.initialiser(direction, strength, speed, range);

	cout << "DIRECTION : " << r234.getDirection() << endl;
	cout << "STRENGTH  : " << r234.getStrength() << endl;
	cout << "SPEED     : " << r234.getSpeed() << endl;
	cout << "RANGE     : " << r234.getRange() << endl;

	cout << "ATTACK_1: " << r234.doAttack(2) << endl;
	cout << "ATTACK_2: " << r234.doAttack(6) << endl;

	cout << "PROTECT_1: " << r234.doProtect(2) << endl;
	cout << "PROTECT_2: " << r234.doProtect(7) << endl;

	cout << "-. (" << x << "," << y << "," << r234.getDirection() << ")" << endl;
	r234.doMove(x, y);
	cout << "-. (" << x << "," << y << "," << r234.getDirection() << ")" << endl;
	r234.doRotateRight();
	cout << "-. (" << x << "," << y << "," << r234.getDirection() << ")" << endl;
	r234.doRotateRight();
	r234.doRotateRight();
	r234.doRotateRight();
	r234.doRotateRight();
	r234.doRotateRight();
	r234.doRotateRight();
	cout << "-. (" << x << "," << y << "," << r234.getDirection() << ")" << endl;
	r234.doRotateLeft();
	r234.doRotateLeft();
	r234.doRotateLeft();
	r234.doRotateLeft();
	r234.doRotateLeft();
	cout << "-. (" << x << "," << y << "," << r234.getDirection() << ")" << endl;

	r234.doMove(x, y);
	r234.doMove(x, y);
	r234.doMove(x, y);
	r234.doMove(x, y);
	r234.doMove(x, y);
	r234.doMove(x, y);
	r234.doMove(x, y);
	r234.doMove(x, y);
	cout << "-. (" << x << "," << y << "," << r234.getDirection() << ")" << endl;
}

*/


/*
void testG990()
{
	int x = 3;
	int y = 5;
	bool nord = true;
	bool est = false;
	int energiePhysique = 7;
	int energieMaximale = 7;
	int vision = 5;

	G990 g990;
	g990.initialiser(nord, est, energiePhysique, energieMaximale, vision);

	cout << "NORD       : " << g990.getNord() << endl;
	g990.regarderSud();
	cout << "NORD       : " << g990.getNord() << endl;

	cout << "EST       : " << g990.getEst() << endl;
	g990.regarderEst();
	cout << "EST       : " << g990.getEst() << endl;

	cout << "ENERGIE_P : " << g990.getEnergiePhysique() << endl;
	cout << "ENERGIE_M : " << g990.getEnergieMaximale() << endl;
	cout << "VISION    : " << g990.getVision() << endl;


	cout << "Deplacement SUD de 10" << endl;
	cout << "-. (" << x << "," << y << ")" << endl;
	g990.deplacementNordSud(10, x, y);
	cout << "-. (" << x << "," << y << ")" << endl;

	g990.regarderNord();
	cout << "Deplacement NORD de 200" << endl;
	cout << "-. (" << x << "," << y << ")" << endl;
	g990.deplacementNordSud(200, x, y);
	cout << "-. (" << x << "," << y << ")" << endl;


	cout << "Deplacement Est de 10" << endl;
	cout << "-. (" << x << "," << y << ")" << endl;
	g990.deplacementEstOuest(10, x, y);
	cout << "-. (" << x << "," << y << ")" << endl;

	g990.regarderOuest();
	cout << "Deplacement OUEST de 200" << endl;
	cout << "-. (" << x << "," << y << ")" << endl;
	g990.deplacementEstOuest(200, x, y);
	cout << "-. (" << x << "," << y << ")" << endl;

	// test blocage #1
	cout << "G990 est entre l'ami et l'ennemi" << endl;
	int xAmi = 2; int yAmi = 1; int xEnnemi = 8; int yEnnemi = 7;
	x = 4; y = 5;
	cout << "-. (" << x << "," << y << ")" << endl;
	g990.bloquer(xAmi, yAmi, x, y, xEnnemi, yEnnemi);
	cout << "-. (" << x << "," << y << ")" << endl;

	// test blocage #2
	cout << "G990 est derriere l'ami et l'ennemi" << endl;
	xAmi = 4; yAmi = 5; xEnnemi = 8; yEnnemi = 7;
	x = 2; y = 1;
	cout << "-. (" << x << "," << y << ")" << endl;
	g990.bloquer(xAmi, yAmi, x, y, xEnnemi, yEnnemi);
	cout << "-. (" << x << "," << y << ")" << endl;

	// test blocage #3
	cout << "G990 est devant l'ami et l'ennemi" << endl;
	xAmi = 1; yAmi = 2; xEnnemi = 4; yEnnemi = 4;
	x = 7; y = 8;
	cout << "-. (" << x << "," << y << ")" << endl;
	g990.bloquer(xAmi, yAmi, x, y, xEnnemi, yEnnemi);
	cout << "-. (" << x << "," << y << ")" << endl;
}  
*/

/*
void testW000()
{
	int x = 3;
	int y = 5;
	string nom = "W000_1";
	int direction = 0;
	int force = 4;
	int vitesse = 3;
	int vision = 5;

	W000 w000;
	w000.initialiser(nom, direction, force, vitesse, vision);

	cout << "NOM       : " << w000.getNom() << endl;
	w000.setDirection(-1000);
	cout << "DIRECTION : " << w000.getDirection() << endl;
	cout << "FORCE     : " << w000.getForce() << endl;
	cout << "VITESSE   : " << w000.getVitesse() << endl;
	cout << "VISION    : " << w000.getVision() << endl;

	cout << "MOUVEMENT ";
	cout << "-. (" << x << "," << y << "," << w000.getDirection() << ")" << endl;
	w000.bouger(x, y);
	cout << "-. (" << x << "," << y << "," << w000.getDirection() << ")" << endl;
	w000.setDirection(2);
	w000.bouger(x, y);
	cout << "-. (" << x << "," << y << "," << w000.getDirection() << ")" << endl;

	w000.setVitesse(10);
	// test blocage #1
	cout << "W000 est entre l'ami et l'ennemi" << endl;
	int xAmi = 2; int yAmi = 1; int xEnnemi = 8; int yEnnemi = 7;
	x = 4; y = 5;
	cout << "-. (" << x << "," << y << ")" << endl;
	w000.bloquer(xAmi, yAmi, x, y, xEnnemi, yEnnemi);
	cout << "-. (" << x << "," << y << ")" << endl;

	// test blocage #2
	cout << "W000 est derriere l'ami et l'ennemi" << endl;
	xAmi = 4; yAmi = 5; xEnnemi = 8; yEnnemi = 7;
	x = 2; y = 1;
	cout << "-. (" << x << "," << y << ")" << endl;
	w000.bloquer(xAmi, yAmi, x, y, xEnnemi, yEnnemi);
	cout << "-. (" << x << "," << y << ")" << endl;

	// test blocage #3
	cout << "W000 est devant l'ami et l'ennemi" << endl;
	xAmi = 1; yAmi = 2; xEnnemi = 5; yEnnemi = 4;
	x = 7; y = 8;
	cout << "-. (" << x << "," << y << ")" << endl;
	w000.bloquer(xAmi, yAmi, x, y, xEnnemi, yEnnemi);
	cout << "-. (" << x << "," << y << ")" << endl;
}
*/

/*
void testsXBots()

{
	char choix = 'q';
	string nom1 = "<Wilson FOTSING>";
	string nom2 = "<Laurent Fabrice NGWE >";

	do
	{
		cout << "---------------------------------------------------" << endl;
		cout << "NOM #1 : " << nom1 << "/NOM #2 : " << nom2 << endl;
		cout << "1-X212/2-X213/3-X215/4-R234/5-G990/6-W000/q-quitter" << endl;
		cout << "Choix du test >> ";
		std::cin >> choix;

		switch (choix)
		{
		case '1':
			testX212();
			break;
		case '2':
			testX213();
			break;
		case '3':
			testX215();
			break;
		case '4':
			testR234();
			break;
		case '5':
			testG990();
			break;
		case '6':
			testW000();
			break;
		}
	} while (choix != 'q');
}

*/

/*

void testChargementXBots() {
	X212 x212("x212", 0, 4, 3, 5); 
	X213 x213("x213", 0, 4, 3, 5);
    X215 x215("x215", 0, 4, 3, 5); 
    R234 r234(0, 4, 3, 5); 
    G990 g990(true, false, 7, 7, 5); 
    W000 w000("W000", 0, 4, 3, 5); 
    X212 x212Copie(x212);
    X213 x213Copie(x213); 
    X215 x215Copie(x215); 
    R234 r234Copie(r234); 
    G990 g990Copie(g990); 
    W000 w000Copie(w000); 
    cout << "X212 : " << x212.getNom() << "/" 
    << x212Copie.getNom() << endl; cout << "X213 : " 
    << x213.getNom() << "/" << x213Copie.getNom() << endl; 
    cout << "X215 : " << x215.getNom() << "/" << x215Copie.getNom() << endl;
    cout << "R234 : " << r234.getStrength() << "/" << r234Copie.getStrength() << endl;
    cout << "G990: " << g990.getEnergiePhysique() << "/" << g990Copie.getEnergiePhysique() << endl; 
    cout << "W000 : " << w000.getNom() << "/" << w000Copie.getNom() << endl; 
}


*/

/*

void testPointeursXBots() {
	X212* x212 = new X212("x212", 0, 4, 3, 5);
	X213* x213 = new X213("x213", 0, 4, 3, 5);
	X215* x215 = new X215("x215", 0, 4, 3, 5);
	R234* r234 = new R234(0, 4, 3, 5);
	G990* g990 = new G990(true, false, 7, 7, 5);
	W000* w000 = new W000("W000", 0, 4, 3, 5);
	X212* x212Copie = new X212(*x212);
	X213* x213Copie = new X213(*x213);
	X215* x215Copie = new X215(*x215);
	R234* r234Copie = new R234(*r234);
	G990* g990Copie = new G990(*g990);
	W000* w000Copie = new W000(*w000);

	cout << "X212 : " << x212->getNom() << "/"
		<< x212Copie->getNom() << endl; cout << "X213 : "
		<< x213->getNom() << "/" << x213Copie->getNom() << endl;
	cout << "X215 : " << x215->getNom() << "/" << x215Copie->getNom() << endl;
	cout << "R234 : " << r234->getStrength() << "/" << r234Copie->getStrength() << endl;
	cout << "G990: " << g990->getEnergiePhysique() << "/" << g990Copie->getEnergiePhysique() << endl;
	cout << "W000 : " << w000->getNom() << "/" << w000Copie->getNom() << endl;

	delete x212;
	delete x213;
	delete x215;
	delete r234;
	delete g990;
	delete w000;
	delete x212Copie;
	delete x213Copie;
	delete x215Copie;
	delete r234Copie;
	delete g990Copie;
	delete w000Copie;
}
*/


/*
void testeur()
{
	TesteurXBots testeur1(new X212("X212", 1, 1, 1, 1), new G990(true, true, 1, 1, 1));
	TesteurXBots testeur2(testeur1);
}  */


/*
int main2()
{
	//testsXBots();   // Semaine #2
	//testChargementXBots();   // Semaine #3 
	//testPointeursXBots(); // Semaine #4
	testeur(); // Semaine #4
	cout << Compteur::getInformation() << endl; cin.get();
	return 0;
} */


/*void(testChargementEquipes(Equipe& equipeRouge, Equipe* equipeBleu)) {
	 // AJOUTER 4 XBOTS à l’équipe ROUGE
	cout << "\n Chargement des xbots, equipe Rouge \n";
	XBot* rougeBot1 = new XBot("rougeBot1");
	XBot* rougeBot2 = new XBot("rougeBot2");
	XBot* rougeBot3 = new XBot("rougeBot3");
	XBot* rougeBot4 = new XBot("rougeBot4"); 
	equipeRouge.ajouterXBots(rougeBot1, 0);
	equipeRouge.ajouterXBots(rougeBot2, 1); 
	equipeRouge.ajouterXBots(rougeBot3, 2);
	equipeRouge.ajouterXBots(rougeBot4, 3);

	 //AJOUTER 5 XBOTS à l’équipe BLEU
	cout << "\n Chargement des xbots, equipe Bleu \n";
	XBot* bleuBot1 = new XBot("bleuBot1");
	XBot* bleuBot2 = new XBot("bleuBot2");
	XBot* bleuBot3 = new XBot("bleuBot3");
	XBot* bleuBot4 = new XBot("bleuBot4");
	XBot* bleuBot5 = new XBot("bleuBot5");

	equipeBleu->ajouterXBots(bleuBot1, 0);
	equipeBleu->ajouterXBots(bleuBot2, 1);
	equipeBleu->ajouterXBots(bleuBot3, 2);
	equipeBleu->ajouterXBots(bleuBot4, 3);
	equipeBleu->ajouterXBots(bleuBot5, 4);
	
	 //AFFICHER l’équipe rouge (utiliser la méthode getNombreXBots) 
	equipeRouge.getNombreXBots();
     //AFFICHER l’équipe bleue (utiliser la méthode getNombreXBots) 
	equipeBleu->getNombreXBots();
	
		
} 



void(testChargementEquipesHeritage(Equipe& equipeRouge, Equipe* equipeBleu)) {

	// AJOUTER 4 XBOTS1 à l’équipe ROUGE
	cout << "ajout de 4 XBOt1 a l'equipe Rouge  \n";
	XBot1* xbot1Rouge1 = new XBot1("xbot1Rouge1");
	XBot1* xbot1Rouge2 = new XBot1("xbot1Rouge2");
	XBot1* xbot1Rouge3 = new XBot1("xbot1Rouge3");
	XBot1* xbot1Rouge4 = new XBot1("xbot1Rouge4");
	equipeRouge.ajouterXBots(xbot1Rouge1, 0);
	equipeRouge.ajouterXBots(xbot1Rouge2, 1);
	equipeRouge.ajouterXBots(xbot1Rouge3, 2);
	equipeRouge.ajouterXBots(xbot1Rouge4, 3);


	//AJOUTER 5 XBOTS2 à l’équipe BLEU
	cout << "\n Chargement des xbots, equipe Bleu \n";

	XBot2* xbot2bleu1 = new XBot2("xbot2bleu1");
	XBot2* xbot2bleu2 = new XBot2("xbot2bleu2");
	XBot2* xbot2bleu3 = new XBot2("xbot2bleu3");
	XBot2* xbot2bleu4 = new XBot2("xbot2bleu4");
	XBot2* xbot2bleu5 = new XBot2("xbot2bleu5");
		
	equipeBleu->ajouterXBots(xbot2bleu1, 0);
	equipeBleu->ajouterXBots(xbot2bleu2, 1);
	equipeBleu->ajouterXBots(xbot2bleu3, 2);
	equipeBleu->ajouterXBots(xbot2bleu4, 3);
	equipeBleu->ajouterXBots(xbot2bleu5, 4);

	//AFFICHER l’équipe rouge (utiliser la méthode getNombreXBots) 
	equipeRouge.getNombreXBots();
	//AFFICHER l’équipe bleue (utiliser la méthode getNombreXBots) 
	equipeBleu->getNombreXBots();

	
}*/

/*
int main3() {
	cout << "Realise par Wilson FOTSING  et Laurent Fabrice NGWE \n" ;
	 //CRÉER l’équipe ROUGE de 4 XBots sur la pile (stack) 
	Equipe equipeRouge("ROUGE", 4) ;

    // CRÉER l’équipe BLEU de 5 XBots dans le tas (heap) 
	
	Equipe* equipeBleu = new Equipe("BLEU", 5);
	// APPELER testChargementEquipes 

    //testChargementEquipes(equipeRouge, equipeBleu);

	//testChargementEquipesHeritage(equipeRouge,equipeBleu);


	cout << endl;
	// CRÉER l’arène 
	Arene arene(equipeRouge, *equipeBleu);
	cout << equipeRouge << endl;
	cout << *equipeBleu << endl;
	// Débuter le combat! 
	arene.debuterCombat();
	delete equipeBleu;


     cout << Compteur::getInformation() << endl; 
	 cin.get();
 
	
	 
	return 0; 
}*/

int main() {
	{
		AreneFinale arene;
		FabriqueXBots fabriqueXBots;
		Equipe* equipeRouge = fabriqueXBots.creerEquipeXBot(10, "Rouge"); 
		Equipe* equipeBleu = fabriqueXBots.creerEquipeXBot(10, "Bleu");

		arene.setEquipes(equipeRouge, equipeBleu);
		arene.debuterCombat();

		delete equipeRouge; 
		delete equipeBleu; 

		cout << Compteur::getInformation() << endl ; 
		cin.get(); 
		return 0;


	}
}