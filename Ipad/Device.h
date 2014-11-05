#ifndef DEVICE_H
#define DEVICE_H
#include <iostream>
#include <string>
#include <vector>
#include "Data.h"
//#include

using namespace std;

/**
* 1.	Duas classes abstratas, sendo que uma classe abstrata herda da outra classe abstrata na hierarquia de classes;
* 		
* 			a classe Device possue os atributos:
* 			nome do fabricante
* 			tipo
* 			nome
* 			data de fabricação
* 			
* 			com os metodos
* 			gets e sets
* 			função virtual: mostrar na linha 52 do Device.h
* 			metodo não virtual: mudarinformacoes na linha 53 do Device.h
* 			
* 			
* 
* 2.	Cada classe abstrata deve ter pelo menos um parâmetro: OK 
* 		o construtor vazio e o construtor default.construtor vazio ???
* 		
*		Deve ter também um método não virtual, que não pode ser set ou get OK
* 
* 3.	Pelo menos três classes concretas na hierarquia de classes: eletronico,device,tablet,ipad
* 
* 4.	Usar coerção de tipo C++ e não C, ou seja usar o static_cast para fazer o máximo de reutilização de código.
 
* 5.	Usar um vector de classes concretas, o dynamic_cast e o typeid como indicado aqui: https://basecamp.com/2595605/projects/7018448/messages/33080741
* 
* 6.	Criar uma função no arquivo do main, que aceita um ponteiro da classe genérica e mostrar o seu uso para as classes concretas;
**/

class Device
{
protected:
	string nomedofabricante;
	string nome;
	Data datadefabricacao;
public: 

	Device();
	Device(string nomedofabricante=" ",string nome=" ",int dia=1,int mes=1,int ano=2000);
	virtual~Device();
	
	void SetDatadefabricacao(const int dia,const int mes,const int ano );
	void SetNome(const string& nome);
	void SetNomedofabricante(const string& nomedofabricante);
	
	const Data& GetDatadefabricacao() const;
	const string& GetNome() const;
	const string& GetNomedofabricante() const;
	
	virtual void mostrar()=0;
	void mudarinformacoes();

};

#endif // DEVICE_H

