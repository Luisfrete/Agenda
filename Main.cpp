#include <iostream>
#include <string>
#include "Agenda.h"
#include "Agenda.cpp"
#include "Pessoa.cpp"
using namespace std;

int main() {
    Agenda agenda;
    
    string nome, email, sexo, dataNascimento, telefone;
    
    char operacao;
       
    cout<<"Bem vindo a sua agenda." << endl;
    cout<<"Escolha a opção que deseja: " << endl;
    cout<<"1 - Listar contatos" << endl;
    cout<<"2 - Editar contatos" << endl;
    cout<<"3 - Excluir contatos" << endl;
    cout<<"4 - Adicionar contatos" << endl; 

    cin >> operacao;

    switch (operacao) {
        case '1':
            agenda.sort_contatos();
            agenda.print();
            break;
        case '2':
            cout << "Digite o nome do contato que voce quer detalhar." << endl;
            cin >> contatos;
            agenda.detail(contatos);
            break;
        case '3':
            cout << "Digite as informacoes na seguinte ordem: nome, email, telefone, data de nascimento." << endl;
            cin >> nome >> email >> telefone >> dataNascimento;
            agenda.contatos.push_back(Pessoa(nome, email, telefone, dataNascimento));
            break;
        case '4':
            cout << "Digite o nome do contato que voce quer remover." << endl;
            cin >> contatos;
            agenda.remove(contatos);
            break;
        case '5':
            agenda.save();
            cout << "Mudancas salvas" << endl;
            break;
        default:
            break;
    }

    return 0;
    
}