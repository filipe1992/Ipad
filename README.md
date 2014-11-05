Polimorfismo

1.	Duas classes abstratas, sendo que uma classe abstrata herda da outra classe abstrata na hierarquia de classes;
Existem duas classes abstratas : class Device e class Tablet.
A classe Tablet herda Device 
2.	Cada classe abstrata deve ter pelo menos um parâmetro, o construtor vazio e o construtor default. Deve ter também um método não virtual, que não pode ser set ou get;
	
class Device
{
protected:
		string nomedofabricante;
		string nome;
		Data datadefabricacao;
public:
		Device();
		Device(string nomedofabricante=" ",string nome=" ",int dia=1,int mes=1,int ano=2000);
		void mudarinpormacoes();

3.	Pelo menos três classes concretas na hierarquia de classes;
As classes concretas estarão abaixo da classe Tablet e  são Ipad,Galax,Pirata. 
4.	Usar coerção de tipo C++ e não C, ou seja usar o static_cast para fazer o máximo de reutilização de código. ??? (não sei onde usar).

5.	Usar um vector de classes concretas, o dynamic_cast e o typeid como indicado aqui: https://basecamp.com/2595605/projects/7018448/messages/33080741
for (i=0;i<3;i++){
ptr = dynamic_cast<Pirata*>(Device[i]]);
	if (ptr!=0){
	cout<<"não uze coisas piratas\n compre um original"<<enfl;
cout<<"seu tablet Pirata sera destruido"<<tipeid(*device[i])).nome()<<endl;
	delete device[j];
}
}
6.	Criar uma função no arquivo do main, que aceita um ponteiro da classe genérica e mostrar o seu uso para as classes concretas;
main.cpp
void usar(Device *der)
{
	cout<<"esta classe é: "<<typeid(*der).nome();
	der->mostrar();
}

Requisitos para as classes adicionais (pelo menos duas)

	Operator =
o	Usuario.h
o		Usuario operator=(usuario &);
o	Agenda.h
o		Agenda operator=(Agenda &copia);
o	OK
	 Alocação dinâmica - se houver vazamento de memória a classe toda é desconsiderada
o	Usuario
	void Usuario::addIpad()
	{
		Tablet *ipad = new Ipad;
		Usuario::SetIpad(*ipad);
		delete ipad;
	}
o	Agenda
	Agenda::Agenda(string &nome=" ")
	{
		string *numero = new string;
		std::cout<<" digite o numero "std::endl;
		std::cin>>*numero;
		Agenda::SetNumero(numero);
		discagemRapida = ++quantidade;
		delete numero;
	}
o	Ok 
	Usar o destrutor
o	Ok
	Construtor de cópia
o	
o	Agenda::Agenda(Agenda &copia)
o	{
o		this->discagemRapida=copia->discagemRapida;
o		this->nome=copia->nome;
o		this->numero=copia->numero;
o	}
o	
o	Usuario::Usuario(Usuario &usuario)
o	{
o		this->nome=usuario.nome;
o		this->idade=usuario.idade;
o		this->ipad=usuario.ipad;
o	}
o	Ok para todos
	Operator << friend
o	Agenda.cpp
o	ostream &operator<<(ostream &output, const Agenda &agenda)
o	{
o		output = <<"\nNome: "<<agenda.nome<<"\nNumero: "<<agenda.numero<<"\nDiscagem rapida:"<<agenda.discagemRapida;
o		return output;
o	}
o	Usuario.cpp
o	osteram& operator<<(ostream &output,Usuario &usuário
o	{
o			output=<<"\nNome: "<< usuario.nome <<"\nIdade: "<<usuario.idade;
o			return output;
o	}
o	Ok em todas
	Um const static 
o	Agenda.h
	static const prefixopara;
o	Usuario.h
	const static bool contadeemail;
/=============================================================\
Requisitos herança
•	Diagrama de classes (obrigatório salvar também o png do diagrama no gitHub) 
OK
o	Herança pública
	class Tablet : public Device
	class Galaxy : public Tablet
	class Ipad : public Tablet
	class Pirata : public Tablet
	OK 
o	Construtor de cópia, e sobrecargas dos operadores de atribuição (=) e << (cout << base) para a classe base e derivada
o	Tablet
	Tablet::Tablet(Tablet &copia)
	: Device::Device(copia)
	{
		this->Tela=copia.Tela;
		this->coordenadax=copia.coordenadax;
		this->coordenaday=copia.coordenaday;
		this->memoriaInterna=copia.memoriaInterna;
		this->conexaoComInternet=copia.conexaoComInternet;
		this->contatos=copia.contatos;
		this->tamanhoDaTela=copia.tamanhoDaTela;
	}
	
	Tablet::Tablet operator=(Tablet &t)
	{
		this->nomedofabricante=t.nomedofabricante;
		this->nome=t.nome;
		this->datadefabricacao=t.datadefabricacao;
		this->Tela=t.Tela;
		this->coordenadax=t.coordenadax;
		this->coordenaday=t.coordenaday;
		this->memoriaInterna=t.memoriaInterna;
		this->conexaoComInternet=t.conexaoComInternet;
		this->contatos=t.contatos;
		this->tamanhoDaTela=t.tamanhoDaTela;
		return *this;
	}
o	Ipad
	Ipad(Tablet &ipad):Tablet(ipad)
	{
		Ipad::quantidade++;
		this->fabricaApple=ipad.fabricaApple;  
		this->modelo=ipad.modelo;
		this->senha=ipad.senha;
	}
	
	Ipad::Ipad operator=(Ipad &i)
	{
		this->dataDeFabricacao=i.dataDeFabricacao;
		this->Tela=i.Tela;
		this->coordenadax=i.coordenadax;
		this->coordenaday=i.coordenaday;
		this->nivelBateria=i.nivelBateria;
		this->memoriaInterna=i.memoriaInterna;
		this->resolucaoCamera=i.resolucaoCamera;
		this->nomeDoDevice=i.nomeDoDevice;
		this->conexaoComInternet=i.conexaoComInternet;
		this->contatos=i.contatos;
		this->tamanhoDaTela=i.tamanhoDaTela;
		this->fabricaApple;
		this->modelo;
		this->senha;
		return *this;
	}
o	Galaxy
	Galaxy::Galaxy(Galaxy &copia): Tablet::Tablet(copia)
	{
		this->vercao=copia.vercao;
		this->vercaocoreana=copia.vercaocoreana;
	}
	
	Galaxy::Galaxy operator=(Galaxy &g)
	{
		this->nomedofabricante=t.nomedofabricante;
		this->nome=t.nome;
		this->datadefabricacao=t.datadefabricacao;
		this->Tela=t.Tela;
		this->coordenadax=t.coordenadax;
		this->coordenaday=t.coordenaday;
		this->memoriaInterna=t.memoriaInterna;
		this->conexaoComInternet=t.conexaoComInternet;
		this->contatos=t.contatos;
		this->tamanhoDaTela=t.tamanhoDaTela;
		this->vercao=g.vercao;
		this->vercaocoreana=g.vercaocoreana;
		return *this;
	}
o	Pirata 
	Pirata::Pirata(Pirata &copia)
	: Tablet(copia)
	{
		this->boaqualidade=copia.boaqualidade;
		this->defeito=copia.defeito;;
		this->funciona=copia.funciona;
		this->local=copia.local;
	}
	
	Pirata::Pirata operator=(Pirata &p)
	{
		this->nomedofabricante=t.nomedofabricante;
		this->nome=t.nome;
		this->datadefabricacao=t.datadefabricacao;
		this->Tela=t.Tela;
		this->coordenadax=t.coordenadax;
		this->coordenaday=t.coordenaday;
		this->memoriaInterna=t.memoriaInterna;
		this->conexaoComInternet=t.conexaoComInternet;
		this->contatos=t.contatos;
		this->tamanhoDaTela=t.tamanhoDaTela;
		this->local=p.local; //enum fabricacao
		this->funciona=p.funciona;
		this->defeito=p.defeito;
		return *this;
	}
o	Usar Protected acessando diretamente os atributos na classe derivada
	Tablet.h
	class Tablet : public Device
	{	
	protected:
o	Alocação dinâmica de memória na classe base e derivada
	Tablet
	void setTela(const int tamanho)
	{
		*this->Tela = new vector<*bool>[tamanho];
		for(int i ;i<tamanho;i++)
			this->Tela[i] = new vector<bool>[tamanho];
	}
	Ipad
	void mudarSenha()
	{
		string *entrada = new string;// alocação
		do{
			cout<<"para mudar a senha digite a senha anterior: ";
			cin>>*entrada;
			if (entrada != this->senha)
				cout<<"senha incorreta ";
		}while (entrada != this->senha);
		delete entrada;//desaloca
		entrada = new string; // alocação
		cout<<"digite a nova senha"<<endl;
		cin>>*entrada;
		this->senha=*entrada;
		delete entrada; //desaloca
	}
o	Sobrescrita de método: chamar dentro do método da classe derivada o método correspondente da classe base usando ::
	OK 
	Ipad.cpp na função menu
		Tablet::menu(ipad);
o	No main: criar um ponteiro da classe base para alocar memória para a classe derivada e chamar os vários métodos implementados
/===========================================================================\

Todos os atributos e funções membros devem estar relacionados a classe
  
7.	Pelo menos 4 atributos
8.	Pelo menos 4 funções membros sem incluir get e set

Requisitos de implementação
3.	Todos os atributos devem ser inicializados. Fez validação de dados.
Validações feitas nos SETs
4.	Três construtores, incluindo um construtor de cópia e construtor com parâmetros defaults. Verifica alocação dentro do construtor de cópia.
Ipad.h
Construtor para a classe base 
Construtor default 
Construtor por copia

5.	Deve ter um atributo string
Ipad.h
Atributos fabriaapple, modelo, senha; 
6.	Um atributo static. Correta modelagem dos statics?
Ipad:
static int quantidade;
7.	Um atributo const static
Tablet:
const static bool device;
8.	Dois métodos constantes (não pode ser get)
Tablet:
		void tirarFoto() const;
		void posicionarNaTela() const;	
9.	Um array
Tablet
	const vector<**bool> Tela;
10.	Uma função inline (não pode ser get ou set)
	inline void conectar() {this->conexaoComInternet = true}
11.	Método com passagem por referência usando ponteiro
Tablet
virtual static void menu(Tablet &);
12.	Método static – deve ser chamado no main
static void menu(Tablet &);
13.	Composição com a classe Data. Fez uso do objeto criado?
Classe usada em Device 
	class Device :public Eletronico
{
protected:
		Data datadefabricacao;
14.	O que é const deve ser const.
Ok
15.	Alocação dinâmica de memória. A memória é desalocada?
Ok 
void Ipad::mudarSenha()
{
	string *entrada = new string;
	do{
		cout<<"para mudar a senha digite a senha anterior: ";
		cin>>*entrada;
		if (entrada != this->senha)
			cout<<"senha incorreta ";
	}while (entrada != this->senha);
	delete entrada;
	entrada = new string;
	cout<<"digite a nova senha"<<endl;
	cin>>*entrada;
	this->senha=*entrada;
	delete entrada;
}
16.	friend Operator<< 
ok
friend ostream& operator<<(ostream &output , Tablet &tablet)
{
	output ="\nnivelBateria: "<< tablet.nivelBateria 
	<<"\nMemoria interna: "<<tablet.memoriaInterna
	<<"\ncoordenadadas da tela: X= "<<tablet.coordenadax<<" Y= "<<tablet.coordenaday
	<<"\nconecção com a internet "<<(tablet.conexaoComInternet == true):<<"sim"<<:"não" //verificar
	<<"\ntamanho da tela: "<<tablet.tamanhoDaTela;
	return output;
}
Ipad
	friend ostream& operator<<(ostream &output, Ipad &i)
{
	output = "\nNome: "<< i.nomeDoDevice 
		<<"\nData de fabricação: "<< i.dataDeFabricacao 
		<<"\nnivelBateria: "<< i.nivelBateria 
		<<"\nMemoria interna: "<<i.memoriaInterna
		<<"\ncoordenadadas da tela: X= "<<i.coordenadax<<" Y= "<<i.coordenaday
		<<"\nResolução da camera: "<<i.resolucaoCamera
		<<"\nconecção com a internet "<<(i.conexaoComInternet == true):<<"sim"<<:"não"
		<<"\ntamanho da tela: "<<i.tamanhoDaTela
		<<"\nfabrica Apple: "<<i.fabricaApple
		<<"\nmodelo: "<<i.modelo
		<<"\nquantidade: "<<i.quantidade;
	return output;
}
Galaxy
friend ostream& operator<<(ostream &output, Galaxy &g)
{
	output = "\nNome: "<< g.nomeDoDevice 
		<<"\nData de fabricação: "<< g.dataDeFabricacao
		<<"\nMemoria interna: "<<g.memoriaInterna
		<<"\ncoordenadadas da tela: X= "<<g.coordenadax<<" Y= "<<i.coordenaday
		<<"\nResolução da camera: "<<g.resolucaoCamera
		<<"\nconecção com a internet "<<(g.conexaoComInternet == true):<<"sim"<<:"não"
		<<"\ntamanho da tela: "<<g.tamanhoDaTela
		<<"\npossui android"(g.android==true):<<"sim":<<"nao"
		<<"\nverção: "g.vercao
		<<"\ncoreano: "(g.vercaocoreana==true):<<"sim":<<"não";
	return output;
}

17.	Operator=
1.	Ipad
1.	Ipad::Ipad operator=(Ipad &i)
2.	{
3.		this->dataDeFabricacao=i.dataDeFabricacao;
4.		this->Tela=i.Tela;
5.		this->coordenadax=i.coordenadax;
6.		this->coordenaday=i.coordenaday;
7.		this->nivelBateria=i.nivelBateria;
8.		this->memoriaInterna=i.memoriaInterna;
9.		this->resolucaoCamera=i.resolucaoCamera;
10.		this->nomeDoDevice=i.nomeDoDevice;
11.		this->conexaoComInternet=i.conexaoComInternet;
12.		this->contatos=i.contatos;
13.		this->tamanhoDaTela=i.tamanhoDaTela;
14.		this->fabricaApple;
15.		this->modelo;
16.		this->senha;
17.		return *this;
18.	}

18.	vector push_back
Tablet.cpp na função addContato();
this->contatos.push_back(*ptr);




