#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Ipad.h"

int const Ipad::tamanhoMax=50;
int Ipad::tela[tamanhoTela][tamanhoTela]={0};
String Ipad::senha;

Ipad::Ipad(int coordenadaX=0, int coordenadaY=0, String senha" ", int dia=1, int mes=1, int ano=2014, int verDevice=1, int tamanhoTela=50)
{
	this->coordenadaX=coordenaX;
	this->coordenadaY=coordenaY;
	this->dataAtual(dia,mes,ano);
	this->senha=senha;
	this->verDevice=verdevice;
	
}

void static Ipad::mudarSenha()
{
	String senha;
	
	if (this->senha==" "){
		std::cout<<"digite a senha: "std::endl;
		std::cin>>this->senha;
	}else if (this->senha!=" "){
				do{
					std::cout<<"digite a senha anterior: "std::endl;
					std::cin>>senha;
					if (this->senha!=senha)
						std::cout<<"senha incorreta"std::endl;
				}while(this->senha!=senha);
				
				this->senha=senha;
				
				std::cout<<"senha modificada !!!!"std::endl;
	}
} 

Ipad::Ipad(Ipad &copia)
{
	this->coordenadaX=copia.coordenadaX;
	this->coordenadaY=copia.coordenadaY;
	this->dataAtual=copia.dataAtual;
	this->senha=copia.senha;//não é necessário
	this->tela=copia.tela;//nao é necessário
}

void Ipad::setData()
{
	std::cout<<"digite o dia :"
	std::cin>>dia;
	
	std::cout<<"digite o mes :"
	std::cin>>mes;
	
	std::cout<<"digite o ano :"
	std::cin>>ano;
	
	Ipad::dataAtual(dia,mes,ano);	
}

void Ipad::setCoordenadas()
{
	int x,y;
	do{
		std::cout<<"digite a X de na tela? :"stdendl;
		std::cin>>x;
	}while((x<0)||(x>this->tamanhoTela));
	
	do{
		std::cout<<"digite a Y de na tela? :"stdendl;
		std::cin>>y;
	}while((y<0)||(y>this->tamanhoTela));
	
	Ipad::tela[this->coordenadaX][this->coordenadaY]=0;
	
	Ipad::tela[x][y]=1;
	this->coordenadaX=x;
	this->coordenadaY=y;
}

Data Ipad::getData() const
{
	return this->dataAtual;
}

void Ipad::menu()
{
	int escolha;
	Ipad copia;
	
	do{
		std::cout<<"#############_MENU Ipad_#############\n"std::endl;
		std::cout<<"1 - inserir data :"std::endl;
		std::cout<<"2 - ver data :"std::endl;
		std::cout<<"3 - mudar posição da tela :"std::endl;
		std::cout<<"4 - mudar senha do(s) device(s)):"std::endl;
		std::cout<<"5 - mostrar detalhes :"std::endl;
		std::cout<<"6 - criar copia :"std::endl;
		std::cout<<"7 - ver posição na tela :"std::endl;
		std::cout<<"0 - para sair :"std::endl;
		std:::cin>> escolha;
		switch(escolha){
			case 1:
				Ipad::setData();
				break;
			case 2:
				std::cout<<"dia :"<<Ipad::getData()
				"std::endl; // melhorar
				Ipad::getData()
				break;
			case 3:
				Ipad::setCoordenadas();
				break;
			case 4:
				Ipad::mudarSenha();
				break;
			case 5:
				Ipad::mostrarDetalhes();
				break;
			case 6:
				Ipad::copia(this);
				do{
					std::cout<<"deseja usar a copia?:[1=s/0=n]\n"
					cin>>escolha ;
				}while((escolha!=1)||(escolha!=0));
				if (escolha)
					Ipad::copia->menu();
				break;
			case 7:
				Ipad::mostrarTela();
				break;
		}
		
		if ((escolha<0)||(escolha>7))
			std::cout<<"digite um valido"std::endl;
	}while(escolha!=0);
}

void Ipad::mostrarDetalhes() const
{
	std::cout<<"a posição do cursor é "<< this->coordenadaX<<"e"<<this->coordenadaY<<" ou na tela :"std::endl;
	Ipad::mostrarTela();
	std::cout<<"na data de "<<Data::this->dataAtual.print() std::endl; //mostrar data (estudar)
	
}

void Ipad::mostrartela() const
{
	for (i=0;i<tamanhoTela;i++){
		for (j=0;i<this->tamanhoTela;j++)
			cout<<this->tela[i][j]" "std::endl;
		std::cout<<"\n"std::endl;
	}
}
