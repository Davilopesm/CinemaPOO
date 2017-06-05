#include <iostream>
#include "Sala.h"
#include<windows.h>

using namespace std;



Sala::Sala()
{
	int capacidade_sala = 0;
	int id_sala = 0;
	int tipo_sala = 0;
}

void Sala::setSala(int Si)
{
	cout << "Digite as caracteristicas da sala: " << endl;
	/*cout << "ID: ";
	cin >> id_sala;*/
	cout << endl << "Capacidade: ";
	cin >> capacidade_sala;
	cout << endl << "Tipo: 1-2D; 2-3D: ";
	cin >> tipo_sala;
	id_sala = Si;
	cout << "ID da sala: " << id_sala << endl;
	system("pause");
	system("cls");
}

void Sala::getSala() {
	cout << "ID: " << id_sala << endl;
	cout << "Capacidade " << capacidade_sala << endl;
	cout << "Tipo da Sala: " << tipo_sala << endl;
	system("pause");
	system("cls");

}

void Sala::removerSala() {
	id_sala = capacidade_sala = tipo_sala = 0;
    cout << "Sala Removida" << endl;
    system("pause");
	system("cls");
}
