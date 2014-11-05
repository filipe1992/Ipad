#ifndef USUARIO_H
#define USUARIO_H
#include <vector>
#include <string>
#include <iostream>

#include "Tablet.h"

/*neste .h devo cumprir os seguintes requisitos
 * 
 * 1 pelo menos 4 atributos --> ok em todos 
 * 2 pelo menos 4 funções menbros sem incluir get e set--ok todos
 * 
 * requisitos:
 * 
 * 1 todos os atributos devem ser inicializados --> ok for all
 * 2 tres construtores --> Ok e funcionar
 * 		construtor de copia ok em todos
 * 		construtos com parametros default --> OK em todos
 * 3 deve ter um atributo string --> ok em todos
 * 4 um atributo static --> ok em toos
 * 5 um atrubuto const static -- em tablet e por coidencia/
 * 6 dois metodos constantes (não pode ser get)
 * 7 um array -->ok
 * 8 uma função inline --> ok
 * 9 metodo com passagem por referencia --> ok
 * metodo static - deve ser chamado no main --> not
 * 
 * 
 * segunda parte:
 * 
 * 1 contruir duas funções friend com sobrecarga de operador ok
 * 2 usar alocação dinamica de memoria ok
 * 3 usar a biblioteca vector ok
 * 4 criar mais duas classes para relacionar ok
 * 
 * terceira parte:
 * 
 * 1 esta classe sera subclasse da classe tablet.ok 
 * 2 esta chamará o construtor da superclasse.ok
 *  
 */

using namespace std;

class Usuario
{
friend osteram& operator<<(ostream &output,Usuario &usuario);
private:
	string nome;
	int idade;
	vector<Ipad> ipad;
	const static bool contadeemail;
public:
	Usuario(Usuario &);
	Usuario(const string & nome=" ",const int idade=18);//foi definido idade como 18 para receber um adulto (lei brasileira)
	Usuario(const int idade=18);
	~Usuario();
	Usuario operator=(usuario &); 
	//metodos sets
	void SetIdade(int idade);
	void SetIpad(const Tablet& ipad); 
	void SetNome(const string& nome); 


	//metodos gets
	int GetIdade() const; 
	string& GetNome() const; 


	void addIpad(Tablet &ipad);
	void mostrarIpads() const;
	void usarTablet(const int);


};

#endif // USUARIO_H

