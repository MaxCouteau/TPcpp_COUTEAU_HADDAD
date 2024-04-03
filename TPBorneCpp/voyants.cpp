#include <iostream>
#include "voyants.h"


voyants::voyants() {
io=acces_memoire(&shmid);
}


void voyants::set_charge(led Couleur_charge)
{
io->led_charge=Couleur_charge;
}

void voyants::set_dispo(led Couleur_dispo)
{
io->led_dispo=Couleur_dispo;
}


void voyants::blink_charge()
{

int i;
	for(i=0;i<8;i++){

		io->led_charge=VERT;
		usleep(500000);
		io->led_charge=OFF;
		usleep(500000);
		}
}


void voyants::blink_defaut()
{

int i;
	for(i=0;i<8;i++){

		io->led_charge=ROUGE;
		usleep(500000);
		io->led_charge=OFF;
		usleep(500000);
		}
}

int voyants::dispo(){
if(io->led_dispo==VERT){
return 1;}
else{
return 0;}
}























