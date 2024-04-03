#ifndef BOUTONS_H
#define BOUTONS_H

#include "donnees_borne.h"
#include "memoire_borne.h"

class boutons
{
	public:
	
	entrees *io;
	int shmid;
	
	boutons();
	void boutons_initialiser();
	int charge();
	int stop();

};
#endif
