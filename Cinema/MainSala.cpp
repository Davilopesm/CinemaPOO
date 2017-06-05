#include "Sala.h"
#include "Sala.cpp"
#include "Filme.h"
#include "Filme.cpp"
#include<iostream>

using namespace std;

int main() {
	int opc=0, opc_sala=0, Si=1, id; // SALA
	int opc_filme, k, Fi=1, ID_filme;//FILME
	string nome_filme;//FILME
	Sala S[16];
	Filme F[40];
    do{
        cout << "---------CINE LIMEIRA-------" << endl;
        cout << "1 Sala" << endl;
        cout << "2 Filme" << endl;
        cout << "3 Sessao" << endl;
        cout << "4 Ingresso" << endl;
        cout << "5 Fechar Programa" << endl;
        cin >> opc;
        switch (opc) {
        case 1:
            cout << "1 Adicionar Sala" << endl;
            cout << "2 Visualizar Sala" << endl;
            cout << "3 Remover Sala" << endl;
            cin >> opc_sala;
            cout << endl;
            switch (opc_sala) {
            case 1:
                S[Si].setSala(Si);
                Si++;
                break;
            case 2:
                cout << "Digite o ID da sala: ";
                cin >> id;
                S[id].getSala();
                break;
            case 3:
                cout << "Digite o ID da sala para remover: ";
                cin >> id;
                S[id].removerSala();
                break;
            }
            break;
        case 2:
            cout << "1 Cadastrar" << endl;
            cout << "2 Visualizar" << endl;
            cout << "3 Remover" << endl;
            cout << "4 Voltar" << endl;
            cin >> opc_filme;
            switch(opc_filme){
            case 1:
                F[Fi].setFilme(Fi);
                Fi++;
                break;
            case 2:
                cout << "Digite o ID do filme: ";
                cin >> ID_filme;
                F[ID_filme].getFilme();
                break;
            case 3:
                cout << "Digite o ID do filme: ";
                cin >> ID_filme;
                F[ID_filme].removerFilme();
                break;
            }
            break;
        }
    }while(opc != 5);

}
