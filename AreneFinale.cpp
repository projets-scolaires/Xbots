#include "AreneFinale.h"
#include "Compteur.h"

AreneFinale::AreneFinale()
{
    combattants = new Combattant * *[2];
    combattants[EQUIPE_A] = new Combattant * [NOMBRE_XBOT];
    combattants[EQUIPE_B] = new Combattant * [NOMBRE_XBOT];
    for (int x = 0; x < NOMBRE_XBOT; x++)
    {
        combattants[EQUIPE_A][x] = nullptr;
        combattants[EQUIPE_B][x] = nullptr;
    }
    Compteur::ajouterConstructeur();
}

AreneFinale::~AreneFinale()
{
    Compteur::ajouterDestructeur();
}

bool AreneFinale::minimumFonctionnel(Combattant** equipe) const
{
    for (int x = 0; x < NOMBRE_XBOT; x++)
        if (equipe[x]->xbot->estFonctionnel())
            return true;
    return false;
}

void AreneFinale::setEquipes(Equipe* equipeA, Equipe* equipeB)
{
    int x = -1;
    int y = -1;
    char idA = 'a';
    char idB = 'A';
    for (int xb = 0; xb < NOMBRE_XBOT; xb++)
    {
        setCoordonneesAleatoire(x, y);
        combattants[EQUIPE_A][xb] = new Combattant(&(equipeA->getXBot(xb)), x, y, (char)(idA + xb));
        setCoordonneesAleatoire(x, y);
        combattants[EQUIPE_B][xb] = new Combattant(&(equipeB->getXBot(xb)), x, y, (char)(idB + xb));
    }
}

void AreneFinale::setCoordonneesAleatoire(int& x, int& y)
{
    do
    {
        x = hasard.recupererValeurAleatoire(0, TAILLE - 1);
        y = hasard.recupererValeurAleatoire(0, TAILLE - 1);
    } while (!verifierDisponibiliteCoordonnees(x, y));
}

bool AreneFinale::verifierDisponibiliteCoordonnees(int x, int y) const
{
    for (int e = 0; e < 2; e++)
        for (int xb = 0; xb < NOMBRE_XBOT; xb++)
            if (combattants[e][xb] != nullptr)
                if (combattants[e][xb]->x == x && combattants[e][xb]->x == y)
                    return false;
    return true;
}

void AreneFinale::afficherCombattants() const
{
    cout << "Les combattants" << endl;
    for (int e = 0; e < 2; e++)
        for (int xb = 0; xb < NOMBRE_XBOT; xb++)
            cout << ">> " << *combattants[e][xb] << endl;
}

void AreneFinale::debuterCombat()
{
    // Tant qu'au moins un XBOT est fonctionnel dans chaque équipe
    int tour = 0;
    cout << "----- DEBUT -----" << endl;
    afficherCombattants();
    while (minimumFonctionnel(combattants[EQUIPE_A]) && minimumFonctionnel(combattants[EQUIPE_B]))
    {
        cout << "TOUR #" << tour++ << endl;
        cout << *this << endl;
        cout << "----- EQUIPE A -----" << endl;
        tourCombat(combattants[EQUIPE_A], combattants[EQUIPE_B]);
        cout << *this << endl;
        cout << "----- EQUIPE B -----" << endl;
        tourCombat(combattants[EQUIPE_B], combattants[EQUIPE_A]);
    }
    cout << "----- FIN -----" << endl;
    cout << *this << endl;
}

void AreneFinale::tourCombat(Combattant** attaquants, Combattant** defenseurs)
{
    for (int x = 0; x < NOMBRE_XBOT; x++)
    {
        if (attaquants[x]->xbot->estFonctionnel())
        {
            Combattant* ami = attaquants[getVivant(attaquants, x)];
            Combattant* ennemi = defenseurs[getVivant(defenseurs, -1)];
            cout << "Attaquant    : " << *attaquants[x] << endl;
            cout << " > Ami       : " << *ami << endl;
            cout << " > Ennemi    : " << *ennemi << endl;

            attaquants[x]->xbot->bouger(ami->x, ami->y, attaquants[x]->x, attaquants[x]->y, ennemi->x, ennemi->y);
            ennemi->xbot->defendre(attaquants[x]->xbot->attaquer(attaquants[x]->x, attaquants[x]->y, ennemi->x, ennemi->y));
        }
    }
}

int AreneFinale::getVivant(Combattant** equipe, int moi) const
{
    for (int x = 0; x < NOMBRE_XBOT; x++)
        if (x != moi && equipe[x]->xbot->estFonctionnel())
            return x;
    return 0;       // pour éviter que ça plante, on choisi un XBOT non fonctionnel
}

ostream& operator<<(ostream& os, const AreneFinale& arene)
{
    char grille[AreneFinale::TAILLE][AreneFinale::TAILLE];
    for (int x = 0; x < AreneFinale::TAILLE; x++)
        for (int y = 0; y < AreneFinale::TAILLE; y++)
            grille[x][y] = ' ';

    for (int xb = 0; xb < AreneFinale::NOMBRE_XBOT; xb++)
    {
        if (arene.combattants[AreneFinale::EQUIPE_A][xb]->xbot->estFonctionnel())
            grille[arene.combattants[AreneFinale::EQUIPE_A][xb]->x][arene.combattants[AreneFinale::EQUIPE_A][xb]->y] = arene.combattants[AreneFinale::EQUIPE_A][xb]->id;
        else
            grille[arene.combattants[AreneFinale::EQUIPE_A][xb]->x][arene.combattants[AreneFinale::EQUIPE_A][xb]->y] = 'X';

        if (arene.combattants[AreneFinale::EQUIPE_B][xb]->xbot->estFonctionnel())
            grille[arene.combattants[AreneFinale::EQUIPE_B][xb]->x][arene.combattants[AreneFinale::EQUIPE_B][xb]->y] = arene.combattants[AreneFinale::EQUIPE_B][xb]->id;
        else
            grille[arene.combattants[AreneFinale::EQUIPE_B][xb]->x][arene.combattants[AreneFinale::EQUIPE_B][xb]->y] = 'X';
    }

    for (int x = 0; x < AreneFinale::TAILLE; x++)
    {
        os << "  ";
        for (int y = 0; y < AreneFinale::TAILLE; y++)
            os << grille[x][y] << "-";
        os << endl;
    }
    return os;
}