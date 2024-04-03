
#include "lecteurcarte.h"
#include <iostream>

using namespace std;

int num_carte;

void LecteurCarte::initialiser()
{
	initialisations_ports();
}

void LecteurCarte::lire_carte()
{
	cout<<"Inserez votre carte"<<endl;
	attente_insertion_carte();
	while(carte_inseree())
	{
		num_carte=lecture_numero_carte();
		cout<<"Numéro de carte = "<< num_carte <<endl;
	}
}

