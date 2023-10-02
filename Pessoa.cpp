#include <iostream>
#include <string>
#include "Pessoa.h"

using namespace std;

class Pessoa(string _email, string  _nome, string _sexo, string _telefone, string _dataNascimento){
    this->nome = _nome;
    this->email = _email;
    this->telefone = _telefone;
    this->sexo = _sexo;
    this->datanascimento = _dataNascimento;

    bool operator<(Pessoa B){
        return (this->nome < B.nome);
    }

    //gets e sets
    void setNome(string n){ 
        nome = n;
    }
    void getNome(){
        return nome;
    }
        void setEmail(string e){
        email = e;
    }
    void getEmail(){
        return email;
    }
        void setSexo(string s){
        sexo = s;
    }
    void getSexo(){
        return sexo;
    }
        void setDataNascimento(string dt){
        dataNascimento = dt;
    }
    void getDataNascimento(){
        return dataNascimento;
    }
    
    void setTelefone(string tl){
        telefone = tl;
    }

    void getTelefone(){
        return telefone;
    }

}