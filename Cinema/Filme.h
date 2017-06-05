#ifndef FILME_H
#define FILME_H
#include <iostream>
#include<windows.h>

using namespace std;

class Filme{
protected:
    string nome_filme, genero_filme;
    float duracao_filme;
    int faixa_etaria, ID_filme;
public:
    Filme();
    void setFilme(int Si);
    void getFilme();
    void removerFilme();

};






#endif
