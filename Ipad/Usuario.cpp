#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Usuario.h"


Usuario::Usuario(String nome=" ", Ipad ipad())
{
	this->nome=nome;
	this->ipad=&ipad;
}

void Usuario::setIpad()
{
	Ipad::Ipad ipad();
	
	this->ipad=&ipad 
}

void Usuario::setNome()
{
	std::cout<<"digite seu nome: "std::endl;
	std::cin>>this->nome;
}

String Usuario::getNome() const
{
	return this->nome;
}

void Usuario::usarIpad()
{
	this->ipad->menu();
}

void menuUsuario(Usuario &usuario)
{
	string nome;
	Ipad ipad;
	std::cout<<"digite seu nome";
	std::cin>> nome;
	
	usuario->nome=nome;
	usuario->ipad();
	
	usuario->usarIpad()
	
}