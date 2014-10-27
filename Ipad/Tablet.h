#ifndef TABLET_H
#define TABLET_H
#include <vector>
#include <iostream>
#include <assert.h>
#include <stdlib.h>
#include "Data.h"
#include "Agenda.h"

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

class Tablet
{
	
friend ostream& operator<<(ostream &output , Tablet &tablet);
	
private:
	const Data dataDeFabricacao;
	const vector<bool> **Tela;//todo tablet possui tela
	int coordenadax , coordenaday;
	int nivelBateria;//todo tablet possui bateria
	float memoriaInterna;//todo tablet possui memoria interna
	const float resolucaoCamera;//para sabera a resolução da camera
	String nomeDoDevice;// para saber o nome Ipad,Galaxy tab...
	bool conexaoComInternet;//ver se esta conectado com a internet
	vector<Agenda> contatos;
	const int tamanhoDaTela;

public:

	Tablet(const int dia,const int mes, const int ano,int nivelBateria,float memoriaInterna,const float resolucaoCamera,string& nomeDoDevice,bool conexaoComInternet,int coordenadax,int coordenaday,int TamanhoDaTela);
	~Tablet();
	
	Tablet operator=(Tablet &tablet);
	
	//funções sets
	void SetDataDeFabricacao(const int dia,const int mes, const int ano);
	void SetCoordenadax(int coordenadax);
	void SetCoordenaday(int coordenaday);
	void SetConexaoComInternet(bool );
	void SetMemoriaInterna(float );
	void SetNivelBateria(int );
	void SetNomeDoDevice(const String& );
	void SetContatos(const vector<Agenda>& );
	void SetTela(const int );
	void setTamanhoDaTela(const int );

	//funções gets
	int GetCoordenadax() const;
	int GetCoordenaday() const;
	bool IsConexaoComInternet() const;
	float GetMemoriaInterna() const;
	int GetNivelBateria() const;
	const vector<Agenda>& GetContatos() const;
	const String& GetNomeDoDevice() const;


	//funções de uso
	void tirarFoto();
	inline void descarregarBateria() {this->SetNivelBateria(--this->GetNivelBateria())}//função inline
	inline void recarregarBateria() {this->SetNivelBateria(++this->GetNivelBateria())}//função inline
	void verContatos();
	void posicionarNaTela();
	void addContato();
	virtual void menu();


};

#endif // TABLET_H
