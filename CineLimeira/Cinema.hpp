#ifndef CINEMA_H
#define CINEMA_H
#include<iostream>
#include<string>

class Cinema{
private:
    int capacidade_sala, ID_sala, tipo_sala; //tipo_sala == 3D ou 2D
    string nome_filme, genero_filme;
    int horario_filme, duracao_filme, sala_filme, tipo_ingresso, faixa_etaria;
public:
    Cinema();
   // Cinema(int capacidade_sala, int ID_sala, int tipo_sala, int horario_filme, int duracao_filme, int sala_filme, int tipo_ingresso, int faixa_etaria, string nome_filme, string genero_filme);
    void setSala(int capacidade_sala, int ID_sala, int tipo_sala);
    void setSessao(string nome_filme, int sala_filme, int duracao_filme); //incompleto
    void setFilme(string nome_filme, string genero_filme, int faixa_etaria, int duracao_filme, int tipo_sala); //incompleto
    void setIngresso(int tipo_ingresso); //incompleto
    int getSala();
    int getFilme();
    int getSessao();
    int getInfo_Sessoes();
    void remover_sala();
    void remover_filme();
    void remover_sessao();
    void imprimir_ingresso();
};
#endif
