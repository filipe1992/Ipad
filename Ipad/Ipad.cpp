#include "Ipad.h"

Ipad::quantidade=0;
Ipad::device = true;

friend ostream& operator<<(ostream &output, Ipad &i)
{
	output = "\nNome: "<< i.nome
		<<"\nData de fabricação: "<< i.dataDeFabricacao
		<<"\nMemoria interna: "<<i.memoriaInterna
		<<"\ncoordenadadas da tela: X= "<<i.coordenadax<<" Y= "<<i.coordenaday
		<<"\nconecção com a internet "<<(i.conexaoComInternet == true):<<"sim"<<:"não" //verificar
		<<"\ntamanho da tela: "<<i.tamanhoDaTela
		<<"\nfabrica Apple: "<<i.fabricaApple
		<<"\nmodelo: "<<i.modelo
		<<"\nquantidade: "<<i.quantidade
		<<"É um Ipad: "(i.device==true):<<"sim":<<"não"endl;
	return output;
}

Ipad::Ipad(,float memoriaInterna,bool conexaoComInternet,int coordenadax,int coordenaday,int TamanhoDaTela,const string &modelo,const string &senha,string &fabricante)
:Tablet(memoriaInterna,conexaoComInternet,icoordenadax,coordenaday,TamanhoDaTela)
{
	SetFabricaApple(fabricaApple);
	SetModelo(modelo);
	SetSenha(senha);

	++quantidade;
}


Ipad::Ipad(const string &modelo,const string &senha,string &fabricaApple) :Tablet();
{
	SetFabricaApple(fabricaApple);
	SetModelo(modelo);
	SetSenha(senha);
	this->Device = true;
	++quantidade;
	
}

Ipad:: Ipad(Tablet &ipad):Tablet(ipad)//fazer no tablet
{
	Ipad::quantidade++;
	this->fabricaApple=ipad.fabricaApple;  
	this->modelo=ipad.modelo;
	this->senha=ipad.senha;
}

Ipad::~Ipad()
{
}

Ipad::Ipad operator=(Ipad &i)
{
	this->dataDeFabricacao=i.dataDeFabricacao;
	this->Tela=i.Tela;
	this->coordenadax=i.coordenadax;
	this->coordenaday=i.coordenaday;
	this->nivelBateria=i.nivelBateria;
	this->memoriaInterna=i.memoriaInterna;
	this->resolucaoCamera=i.resolucaoCamera;
	this->nomeDoDevice=i.nomeDoDevice;
	this->conexaoComInternet=i.conexaoComInternet;
	this->contatos=i.contatos;
	this->tamanhoDaTela=i.tamanhoDaTela;
	this->fabricaApple;
	this->modelo;
	this->senha;
	return *this;
}

void Ipad::SetFabricaApple(const string &FabricaApple)
{
	this->FabricaApple=FabricaApple;
}

void Ipad::SetModelo(const string& modelo) 
{
	this->modelo = modelo;
}
void Ipad::SetSenha(const string& senha) 
{
	this->senha = senha;
}

// GETs
const Ipad::string& GetFabricaApple() const
{
	return this->FabricaApple;
}
const Ipad::string& GetModelo() const 
{
	return modelo;
}
const Ipad::string& GetSenha() const 
{
	return senha;
}

//funções
void Ipad::abrirLoja()
{
	cout<<"###### APP STORE ONDE TUDO È PAGO ######\n\n Bem vindo !!!!!"endln;  //verificar sintaxe
		
}

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

void Ipad::VerDevice()
{
	if (this->Device==true)
		cout<<"este devicce é um Ipad";
	else
		cout<<"este device não é um ipad";
}

void Ipad::menu(Ipad *ipad)
{
		int esc;
		do{
			cout<<"funções de tablet[1=sim] ou Ipad[outro]";
			cin>> esc;
			if (esc==1)
				Tablet::menu(ipad); //chamada de função base na sub-classe.
			else if (esc == 2)
			{
				cout<<"1 - abrir loja\n2 - abrir agenda\n3 - mudar senha\n4 - verificar device ";
				cin>>esc;
				switch(esc)
				{
					case 1:
						ipad->abrirAgenda();
					break;
					case 2:
						ipad->abrirAgenda();
					break;
					case 3:
						ipad->mudarSenha();
					break;
					case 4:
						ipad->VerDevice();
					break;
				}
			}
		}while(esc <= 4 && esc > 0);
		
}

void Ipad::mostrar(){
		cout<<"\nNome: "<< this->nome
		<<"\nData de fabricação: "<< this->dataDeFabricacao
		<<"\nMemoria interna: "<<this->memoriaInterna
		<<"\ncoordenadadas da tela: X= "<<this->coordenadax<<" Y= "<<i.coordenaday
		<<"\nconecção com a internet "<<(this->conexaoComInternet == true):<<"sim"<<:"não" //verificar
		<<"\ntamanho da tela: "<<this->tamanhoDaTela
		<<"\nfabrica Apple: "<<this->fabricaApple
		<<"\nmodelo: "<<this->modelo
		<<"\nquantidade: "<<this->quantidade
		<<"É um Ipad: "(i.device==true):<<"sim":<<"não"endl;
}

