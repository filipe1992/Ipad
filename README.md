Ipad
====

Requisitos funcionais
Todos os atributos e funções membros devem estar relacionados a classe
  
1.	Pelo menos 4 atributos ok em todas as classes 
2.	Pelo menos 4 funções membros sem incluir get e set ok em todas as classes

Requisitos de implementação
3.	Todos os atributos devem ser inicializados. Fez validação de dados sim todos os dados validados nos SETs e chamados no construtor;
4.	Três construtores, incluindo um construtor de cópia e construtor com parâmetros defaults. Verifica alocação dentro do construtor de cópia.    Construtor com parâmetros default e construtor com parâmetros inicializáveis ok
verificar se o construtor de copias esta correto (construtor de copias não criado na classe Tablet).
5.	Deve ter um atributo string vários atributos string foram criados
6.	Um atributo static. Correta modelagem dos statics? Os atributos static pode ser encontrado nas classes Tablet (quantidade de tablets) na classe contatos ( quantidade de contatos ).
7.	Um atributo const static Atributo const static criado na classe Ipad(tipo de device)
8.	Dois métodos constantes (não pode ser get) na classe Ipad e na classe Tablet foram criados os métodos (menu() const) 
9.	Um array A tela do tablet é um array 
10.	Uma função inline (não pode ser get ou set) função recarregar e função descarregar na classe Tablet
11.	Método com passagem por referência usando ponteiro não criado (apenas nas strings)
12.	Método static – deve ser chamado no main deveria existir um método estático para printar na tela a classe Ipad (mas não existe)
13.	Composição com a classe Data. Fez uso do objeto criado? Sim, na classe Tablet (data de fabricação)
14.	O que é const deve ser const. Todas as funções que não alteram o valor da variável e parâmetros de entrada que não iram ser modificados recebem const 
15.	Alocação dinâmica de memória. A memória é desalocada? Sim, a cada vez que é alocado um valor logo após o seu uso chama-se a função delete e todas as classes que possuem ponteiros ou vetores possuem destrutores
16.	friend Operator<<  ok para todas as classes “até mesmo a classe data”
17.	Operator= ok para todas as classes 
18.	vector push_back é usado na classe Tablet para colocar um contato no vetor e na classe usuário para colocar um Ipad na lista (vetor ) de Ipads 

Requisitos para as classes adicionais (pelo menos duas) classe Agenda, Usuario, Ipad, Tablet.

	Operator = Ok
	 Alocação dinâmica - se houver vazamento de memória a classe toda é desconsiderada  Ok 
	Usar o destrutor Ok
	Construtor de cópia Ok
	Operator << friend Ok
	Um const static apenas na classe Ipad const static bool Device; (Ipad.h)







Requisitos herança
•	Diagrama de classes (obrigatório salvar também o png do diagrama no gitHub) Ok
o	Herança pública Ok
o	Construtor de cópia, e sobrecargas dos operadores de atribuição (=) e << (cout << base) para a classe base e derivada Ok
friend ostream& operator<<(ostream &output , Tablet &tablet); (Tablet.h)
friend ostream& operator<<(ostream &output, Ipad &i); (Ipad.h)
o	Usar Protected acessando diretamente os atributos na classe derivada atributos da classe base estão private e são usados através de GETs
o	Alocação dinâmica de memória na classe base e derivada Alocação dinâmica apenas na classe base (contatos)

	void setTela(const int tamanho){
		*this->Tela = new vector<bool>[tamanho];
		for(int i ;i<tamanho;i++)
			this->Tela[i] = new vector<bool>[tamanho];
	}
	 Tablet.cpp

o	Sobrescrita de método: chamar dentro do método da classe derivada o método correspondente da classe base usando :: Ok foi usado o método menu e dentro deste método na classe derivada é chamado o método da classe base 
void Tablet::menu() (tablet.h)	
Ipad:: menu() {

	                     cout<<"funções de tablet[1=sim] ou Ipad[outro]";	
	              cin>> esc;
				if (esc==1)
					Tablet::menu(); //chamada de função base na sub-classe.
				else if (esc == 2)           
} (Ipad.h)
o	No main: criar um ponteiro da classe base para alocar memória para a classe derivada e chamar os vários métodos implementados Ok Um ponteiro da classe Tablet foi criado no main e foi alocada memória para classe Ipad, vários métodos foram chamados Ok  
•	Erro adicional void mudarSenha() const; a função muda a senha mas é constante 









trabalho de programação II

* 1 pelo menos 4 atributos --> ok em todos 
 * 2 pelo menos 4 funÃ§Ãµes menbros sem incluir get e set-->ok todos
 * 
 * requisitos:
 * 
 * 1 todos os atributos devem ser inicializados -->ok todos
 * 2 tres construtores --> Ok e funcionar
 * 		construtor de copia ok em todos
 * 		construtos com parametros default --> OK em todos
 * 3 deve ter um atributo string --> ok em todos
 * 4 um atributo static --> ok em toos
 * 5 um atrubuto const static -->ok todos
 * 6 dois metodos constantes (nÃ£o pode ser get)--> OK em todos
 * 7 um array --> Ok
 * 8 uma funÃ§Ã£o inline --> ok
 * 9 metodo com passagem por referencia --> ok
 * metodo static - deve ser chamado no main --> OK
 * 
 * 
 * segunda parte:
 * 
 * 1 contruir duas funÃ§Ãµes friend com sobrecarga de operador ok
 * 2 usar alocaÃ§Ã£o dinamica de memoria ok
 * 3 usar a biblioteca vector ok
 * 4 criar mais duas classes para relacionar ok
 * 
 * terceira parte:
 * 
 * 1 esta classe sera subclasse da classe tablet.ok 
 * 2 esta chamarÃ¡ o construtor da superclasse.ok
