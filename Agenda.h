#pragma once
#ifndef AGENDA_H_
#define AGENDA_H_

#include <iostream> // serve para executar operções de leitura e gravação em arquivos
#include <vector> // serve como conteiner para armazenar os dados como um array
#include "Agenda.cpp"
#include "Pessoa.h" //serve para chamar a classe Pessoa
using namespace std;

class Agenda{

    public:
        vector<Pessoa> contatos;
        vector<int> getContatos();
        void load(string filenome);
        
};

#endif