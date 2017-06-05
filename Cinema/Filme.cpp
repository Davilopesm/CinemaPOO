#include "Filme.h"
#include<iostream>

using namespace std;

Filme::Filme(){
    string nome_filme ="", genero_filme="";
    float duracao_filme=0;
    int faixa_etaria=0, ID_filme=0;

}

void Filme::setFilme(int Fi){
    cout << "Digite os dados do filme: " << endl;
    cout << "Nome: ";
    cin >> nome_filme;
    cout << endl << "Genero: ";
    cin >> genero_filme;
    cout << endl << "Faixa Etaria: ";
    cin >> faixa_etaria;
    cout << endl << "Duracao: ";
    cin >> duracao_filme;
    cout << endl << "Filme Cadastrado!" << endl;
    ID_filme = Fi;
    cout << "ID: " << ID_filme << endl;
    system("pause");
	system("cls");

}

void Filme::getFilme(){
    cout << "Nome: " << nome_filme << endl;
    cout << "Genero: " << genero_filme << endl;
    cout << "Faixa Etaria: " << faixa_etaria << endl;
    cout << "Duracao: " << duracao_filme << endl;
    cout << "ID: " << ID_filme << endl;
    system("pause");
	system("cls");

}

void Filme::removerFilme(){
    nome_filme ="";
    genero_filme="";
    duracao_filme=0;
    faixa_etaria=0;
    ID_filme=0;
    cout << "Filme Removido" << endl;
    system("pause");
	system("cls");

}
