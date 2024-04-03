#ifndef TIMER_H
#define TIMER_H

#include "donnees_borne.h"
#include "memoire_borne.h"

class timer
{
	entrees *io;
	int shmid;	
	int depart_timer;
	public:
	timer();
	void raz();
	int valeur();

};
#endif
