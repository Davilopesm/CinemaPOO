#ifndef SALA_H
#define SALA_H
#include<iostream>

class Sala
{
protected:
	int capacidade_sala, id_sala, tipo_sala;
public:
	Sala();
	void setSala(int i);
	void getSala();
	void removerSala();
};

#endif
