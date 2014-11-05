#include "Device.h"



Device::Device(string nomedofabricante,string tipo,string nome,int dia,int mes,int ano)
{
	SetDatadefabricacao(dia,mes,ano);
	SetNome(nome);
	SetNomedofabricante(nomedofabricante);
	SetTipo(tipo);
}

Device::Device()// verificar posteriormente;
{
}

Device::~Device()
{
}

Device::void SetDatadefabricacao(const int dia,const int mes,const int ano ) {
	
	this->datadefabricacao(dia,mes,ano);
}

Device::void SetNome(const string& nome) {
	this->nome = nome;
}

Device::void SetNomedofabricante(const string& nomedofabricante) {
	this->nomedofabricante = nomedofabricante;
}

Device::void SetTipo(const string& tipo) {
	this->tipo = tipo;
}

Device::const Data& GetDatadefabricacao() const {
	return datadefabricacao;
}

Device::const string& GetNome() const {
	return nome;
}

Device::const string& GetNomedofabricante() const {
	return nomedofabricante;
}

Device::const string& GetTipo() const {
	return tipo;
}

Device::void mostrar()
{
}

Device::void mudarinformacoes(){
	string nome,nomedofabricante,tipo;
	int dia,mes,ano,escolha;
	
	cout<<"deseja mudar o nome [1=sim/outro=não]"<<endl;
	cin>>escolha;
	if (escolha==1){
		cout<<"digite o novo nome"<<endl;
		cin>>nome;
		this->SetNome(nome);
	}
	cout<<"deseja mudar o nome do fabricante [1=sim/outro=não]"<<endl;
	cin>>escolha;
	if (escolha==1){
		cout<<"digite o novo nome do fabricante"<<endl;
		cin>>nomedofabricante;
		this->SetNomedofabricante(nomedofabricante);
	}
	cout<<"deseja mudar o tipo [1=sim/outro=não]"<<endl;
	cin>>escolha;
	if (escolha==1){
		cout<<"digite o novo tipo"<<endl;
		cin>>tipo;
		this->SetTipo(tipo);
	}
	cout<<"deseja mudar a data de fabricação [1=sim/outro=não]"<<endl;
	cin>>escolha;
	if (escolha==1){
		cout<<"digite o novo dia"<<endl;
		cin>>dia;
		cout<<"digite o novo mes"<<endl;
		cin>>mes;
		cout<<"digite o novo ano"<<endl;
		cin>>ano;
		this->SetDatadefabricacao(dia,mes,ano);
	}
		
}




