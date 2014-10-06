#ifndef IPAD_H
#define IPAD_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>
#include "Data.h"


class Ipad
{
private:
	int const verDevice;

	int coordenadaX;

	int coordenadaY;
	
	static const tamanhoTela;

	static int tela[][];

	static String senha;

	Data dataAtual;


public:
	Ipad(int coordenadaX=0, int coordenadaY=0, String senha=" ", int dia=1, int mes=1,int ano=2014, int verDevice=1, int tamanhoTela=20);//verDevice=1 1 diz que é Ipad e 0 diz que não é.

	Ipad(Ipad &copia);

	void setData();

	void setCoordenadas();

	Data getData() const;

	void menu();

	void mostrarDetalhes() const;
	
	void mostrarTela() const;
	
	void static mudarSenha();

	inline void verDevice() const {(Ipad::verDevice()==1)?:std::cout<<"é um Ipad":std::cout<<"não é um Ipad";}; //pesquisar ternario

};
#endif
