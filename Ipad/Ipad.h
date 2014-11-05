#ifndef IPAD_H
#define IPAD_H
#include "Tablet.h"
#include <string>
#include <iostream>
using namespace std;


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
 
 
class Ipad : public Tablet//perguntar sobre a sobrecarga ou pesquisar;
{
	friend ostream& operator<<(ostream &output, Ipad &i);
private:
	static int quantidade;
	const string fabricaApple;  
	const string modelo;
	string senha;
	const static bool device;

public:
	//costrutor para a classe base;
	Ipad(const int dia,const int mes, const int ano,int nivelBateria,float memoriaInterna,const float resolucaoCamera,string& nomeDoDevice,bool conexaoComInternet,int coordenadax,int coordenaday,int TamanhoDaTela,const string &modelo,const string &senha,string &fabricaApple)
	Ipad(const string &modelo=" ",const string &senha=" ");
	Ipad(Tablet &ipad); 
	~Ipad();
	
	Ipad operator=(Ipad &i);
	
	//funções sets 	
	void SetFabricaApple(const string &FabricaApple);
	void SetModelo(const string& modelo);
	void SetSenha(const string& senha);

	//funções gets
	const string& GetFabricaApple() const;
	const string& GetModelo() const;
	const string& GetSenha() const;
	
	//metodos funcionais
	void abrirLoja();
	void abrirAgenda();
	void mudarSenha();
	void VerDevice();
	static void menu(Ipad& );
	void mostrar();
};

#endif // IPAD_H
