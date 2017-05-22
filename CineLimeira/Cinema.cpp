#include<iostream>
#include<string>
#include "Cinema.hpp"

using namespace std;

Cinema::Cinema(){
    int capacidade_sala = ID_sala = tipo_sala =  horario_filme = duracao_filme = sala_filme = tipo_ingresso = faixa_etaria = 0;
    string nome_filme = "";
    string genero_filme = "";
}

void Cinema::setSala(int capacidade_sala, int ID_sala, int tipo_sala){
    this->capacidade_sala = capacidade_sala;
    this->ID_sala = ID_sala;
    this->tipo_sala = tipo_sala;
}

void Cinema::setSessao(string nome_filme, int sala_filme, int duracao_filme){
    this->
}

void Cinema::setFilme(string nome_filme, string genero_filme, int faixa_etaria, int duracao_filme, int tipo_sala){

}

void Cinema::setIngresso(int tipo_ingresso){

}

void Cinema::getSala(){
    cout << this->capacidade_sala << endl;
    cout << this->ID_sala<< endl;
    cout << this->tipo_sala<< endl;
}

void Cinema::getFilme(){
    cout << this->nome_filme<< endl;
    cout << this->genero_filme<< endl;
    cout << this->horario_filme<< endl;
    cout << this->duracao_filme<< endl;
    cout << this->sala_filme<< endl;
    cout << this->faixa_etaria<< endl;
}

void Cinema::getSessao(){
    cout << this->nome_filme<< endl;
    cout << this->sala_filme<< endl;
    cout << this->horario_filme<< endl;
    cout << this->tipo_sala << endl;
}

void Cinema::getInfoSessoes(){

}

void Cinema::remover_sala(){
    this->capacidade_sala = 0;
    this->ID_sala = 0;
    this->tipo_sala = 0;
}

void Cinema::remover_filme(){
    this->nome_filme = "";
    this->genero_filme = "";
    this->faixa_etaria= 0;
    this->duracao_filme = 0;
    this->tipo_sala = 0;
}

void Cinema::remover_sessao(){
    this->nome_filme = "";
    this->sala_filme = 0;
    this->horario_filme = 0;
    this->tipo_sala = 0;
}

void Cinema:imprimir_ingresso(){
    cout << nome_filme << endl;
    cout << sala_filme << endl;
    cout << tipo_sala << endl;
    cout << tipo_ingresso << endl;
    cout << faixa_etaria << endl;
    cout << genero_filme << endl;
}
