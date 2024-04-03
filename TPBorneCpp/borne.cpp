#include <iostream>
#include "memoire_borne.h"
#include "donnees_borne.h"

#include "lecteurcarte.h"
#include "voyants.h"
#include "boutons.h"
#include "timer.h"

using namespace std; 

int main()
{

	voyants voy;
	boutons bout;
	timer time;
	LecteurCarte lecteurcarte;

	lecteurcarte.initialiser();
	bout.boutons_initialiser();

        lecteurcarte.lire_carte();
	std::cout<<"Bienvenue"<<std::endl;
   
while(timer_valeur()<=60)
{
	if(bout.charge())
	{
	bouton_non_appuie=0;
	bouton_appuie=1;
	}
}
if(bouton_appuie)
	{
	voy.set_dispo(OFF);
	cout<<"Veuillez retirer votre carte";
	
}
