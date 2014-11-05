#include "Galaxy.h"

Galaxy::android= true;

Galaxy::Galaxy(Galaxy &copia): Tablet::Tablet(copia)
{
	this->vercao=copia.vercao;
	this->vercaocoreana=copia.vercaocoreana;
}

friend ostream& operator<<(ostream &output, Galaxy &g)
{
	output = "\nNome: "<< g.nomeDoDevice 
		<<"\nData de fabrica��o: "<< g.dataDeFabricacao
		<<"\nMemoria interna: "<<g.memoriaInterna
		<<"\ncoordenadadas da tela: X= "<<g.coordenadax<<" Y= "<<i.coordenaday
		<<"\nResolu��o da camera: "<<g.resolucaoCamera
		<<"\nconec��o com a internet "<<(g.conexaoComInternet == true):<<"sim"<<:"n�o" //verificar
		<<"\ntamanho da tela: "<<g.tamanhoDaTela
		<<"\npossui android"(g.android==true):<<"sim":<<"nao"
		<<"\nver��o: "g.vercao
		<<"\ncoreano: "(g.vercaocoreana==true):<<"sim":<<"n�o";
	return output;
}

Galaxy::Galaxy operator=(Galaxy &g)
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
	this->vercao=g.vercao;
	this->vercaocoreana=g.vercaocoreana;
	return *this;
}

Galaxy::Galaxy(string vercao,bool vercaocoreana)
{
	Galaxy::SetVercao(vercao);
	Galaxy::SetVercaocoreana(vercaocoreana);
}

Galaxy::~galaxy()
{
}


Galaxy::SetVercao(){
	this->vercao = vercao;
}

void Galaxy::SetVercaocoreana(bool vercaocoreana) {
	this->vercaocoreana = vercaocoreana;
}

const Galaxy::string& GetVercao() const {
	return vercao;
}

bool Galaxy::IsVercaocoreana() const {
	return vercaocoreana;
}
