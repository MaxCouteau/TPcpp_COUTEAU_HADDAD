#ifndef VOYANTS_H
#define VOYANTS_H

#include <iostream>
#include <unistd.h>

#include "donnees_borne.h"
#include "memoire_borne.h"

class voyants
{
	entrees *io;
	int shmid;

	public:
	voyants();
	void set_charge(led Couleur_charge);
	void set_dispo(led Couleur_dispo);
	void blink_charge();
	void blink_defaut();
	int dispo();
};

#endif
