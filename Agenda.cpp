#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
#include <vector>
#include "Agenda.h"

using namespace std;

void load(string filenome)
{
    ifstream input(filenome);
    string linha;
    string contatos;
    
    
    while (!getline(input, linha)){
        vector<string> palavras;
        palavras.clear();
        string tmp = "";
        for(int i = 0; i < linha.size(); i++){
            if (linha[i] == ','){
                palavras.push_back(tmp);
                tmp = "";

            }else{
                tmp += linha[i];
            }

            if (tmp.size() > 0)
            {
                palavras.push_back(tmp);
            }

            contatos.push_back(Pessoa(palavras[0], palavras[1], palavras[2], palavras[3]));

        input.close();
        }
    }
}

void save(){

    ofstream file("contatos.csv");

    for (int i = 0; i < contatos.size(); i++){
        file << contatos[i].nome << "," << contatos[i].email << "," << contatos[i].telefone << "," << contatos[i].dataNascimento;

        if (i < contatos.size() - 1){
            file << endl;
        }
    }

    file.close();
}

void sort_contatos(){
    sort(contatos.begin(), contatos.end());
}

void print(){

    cout << "----------------------------------" << endl;
    cout << "Nome"
            << "\t\t"
            << "Email"
            << "\t\t\t"
            << "Telefone"
            << "\t\t\t"
            << "Data de nascimento" 
            << "\t\t\t"
            << "Sexo" << endl;
    for (int i = 0; i < contatos.size(); i++){
        
        cout << contatos[i].nome << "\t" << contatos[i].email << "\t" << contatos[i].telefone << "\t\t" << contatos[i].dataNascimento << "\t\t" << contatos[i].sexo << endl;
    }
    cout << "----------------------------------" << endl;
}

void detail(string nome){
    for (int i = 0; i < contatos.size(); i++){

        if (contatos[i].nome == nome){
            cout << "----------------------------------" << endl;
            cout << "Nome: " << contatos[i].nome << endl;
            cout << "Email: " << contatos[i].email << endl;
            cout << "Telefone: " << contatos[i].telefone << endl;
            cout << "Data de nascimento: " << contatos[i].dataNascimento << endl;
            cout << "Sexo: " << contatos[i].sexo << endl;
            cout << "----------------------------------" << endl;
            return;
        }
    }

    cout << "Essa pessoa nao existe." << endl;
}

void remove(string nome){

    int posicao = -1;

    for (int i = 0; i < contatos.size(); i++){

        if (contatos[i].nome == nome){
            contatos.erase(contatos.begin() + i);

            return;
        }
    }

    cout << "Essa pessoa nao existe." << endl;
}



        
    
    
