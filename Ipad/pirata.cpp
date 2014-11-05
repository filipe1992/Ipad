#include "Pirata.h"

Pirata::boaqualidade=false;

Pirata::Pirata(fabricacao &local,string &defeito)
{
	this->SetFabicacao(local);
	this->defeito = new [5] vector<string>;
	this->addDefeito(defeito)
	
}

Pirata::Pirata(Pirata &copia)
: Tablet(copia)
{
	this->boaqualidade=copia.boaqualidade;
	this->defeito=copia.defeito;;
	this->funciona=copia.funciona;
	this->local=copia.local;
}

Pirata::Pirata operator=(Pirata &p)
{
	this->nomedofabricante=t.nomedofabricante;
	this->nome=t.nome;
	this->datadefabricacao=t.datadefabricacao;
	this->Tela=t.Tela;
	this->coordenadax=t.coordenadax;
	this->coordenaday=t.coordenaday;
	this->memoriaInterna=t.memoriaInterna;
	this->conexaoComInternet=t.conexaoComInternet;
	this->contatos=t.contatos;
	this->tamanhoDaTela=t.tamanhoDaTela;
	this->local=p.local; //enum fabricacao
	this->funciona=p.funciona;
	this->defeito=p.defeito;
	return *this;
}


Pirata::~Pirata()
{
	delete defeito;
}
	
void Pirata::SetFabicacao(Fabricacao& local)
{
	this->fabicacaolocal = fabicacaolocal;
}
void Pirata::SetFunciona(bool funciona) 
{
	this->funciona = funciona;
}
int pirata::GetFabicacaolocal() const 
{
	return fabicacaolocal;
}
bool Pirata::IsFunciona() const 
{
	return funciona;
}

void Pirata::addDefeito(const string &defeito) {
		this->defeito.push_back(defeito);
}

void Pirata::mostrar()
{
	cout<<"nome do fabricante:"this->nomedofabricante<<
	"nome: "this->nome<<endl;
	this->datadefabricacao.print();
	cout<<"coosdenadas X : "this->coordenadax<<"Y : "<<this->coordenaday<<
	"memoria interna: "<<this->memoriaInterna<<
	"tamanho da tela"<<this->tamanhoDaTela<<
	"local de ffabricação"<<this->local<<
	"funcionada"<<this->funciona<<endl;
}

