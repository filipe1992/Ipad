#ifndef TABLET_H
#define TABLET_H
#include <vector>
#include <iostream>
#include <assert.h>
#include <stdlib.h>

#include "Agenda.h"
#include "Device.h"


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

class Tablet : public Device
{
	
friend ostream& operator<<(ostream &output , Tablet &tablet);
	
protected:
	static bool software;
	const vector<**bool> Tela;
	int coordenadax , coordenaday;
	float memoriaInterna;//todo tablet possui memoria interna
	bool conexaoComInternet;//ver se esta conectado com a internet
	vector<Agenda> contatos;
	const int tamanhoDaTela;

public:
	
	Tablet(float memoriaInterna=1,bool conexaoComInternet=true,int coordenadax=1,int coordenaday=1,int TamanhoDaTela=5) ;
	~Tablet();
	
	Tablet operator=(Tablet &tablet);
	Tablet(Tablet &);
	
	//funções sets
	void SetCoordenadax(int coordenadax);
	void SetCoordenaday(int coordenaday);
	void SetConexaoComInternet(bool );
	void SetMemoriaInterna(float );
	void SetContatos(const Agenda );
	void SetTela(const int );
	void setTamanhoDaTela(const int );

	//funções gets
	int GetCoordenadax() const;
	int GetCoordenaday() const;
	bool IsConexaoComInternet() const;
	float GetMemoriaInterna() const;
	


	//funções de uso
	void tirarFoto() const;
	inline void conectar() {this->conexaoComInternet = true}//função inline
	inline void desconectar() {this->conexaoComInternet = false}//função inline
	void verContatos() const;
	void posicionarNaTela() const;
	void addContato();
	virtual static void menu(Tablet *);


};

#endif // TABLET_H

