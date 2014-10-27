#include "Ipad.h"

Ipad::quantidade=0;
Ipad::Device=true;

friend ostream& operator<<(ostream &output, Ipad &i)
{
	output = "\nNome: "<< i.nomeDoDevice 
		<<"\nData de fabricação: "<< i.dataDeFabricacao 
		<<"\nnivelBateria: "<< i.nivelBateria 
		<<"\nMemoria interna: "<<i.memoriaInterna
		<<"\ncoordenadadas da tela: X= "<<i.coordenadax<<" Y= "<<i.coordenaday
		<<"\nResolução da camera: "<<i.resolucaoCamera
		<<"\nconecção com a internet "<<(i.conexaoComInternet == true):<<"sim"<<:"não" //verificar
		<<"\ntamanho da tela: "<<i.tamanhoDaTela
		<<"\nfabrica Apple: "<<i.fabricaApple
		<<"\nmodelo: "<<i.modelo
		<<"\nquantidade: "<<i.quantidade;
	return output;
}

Ipad::Ipad(const int dia,const int mes, const int ano,int nivelBateria,float memoriaInterna,const float resolucaoCamera,bool conexaoComInternet,int coordenadax,int coordenaday,int TamanhoDaTela,const string &modelo,const string &senha,string &fabricante)
:Tablet(dia,mes,ano,nivelBateria,memoriaInterna,resolucaoCamera,"Ipad",conexaoComInternet,icoordenadax,coordenaday,TamanhoDaTela)
{
	SetFabricaApple(fabricaApple);
	SetModelo(modelo);
	SetSenha(senha);
	this->Device = true;
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

Ipad(Tablet &ipad):Tablet(ipad)//fazer no tablet
{
	Ipad::quantidade++;
	this->fabricaApple=ipad.fabricaApple;  
	this->modelo=ipad.modelo;
	this->senha=ipad.senha;
}

Ipad::~Ipad()
{
	delete;//a agenda é deletada na classe Tablet
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

void SetFabricaApple(const string &FabricaApple)
{
	this->FabricaApple=FabricaApple;
}

void SetModelo(const string& modelo) 
{
	this->modelo = modelo;
}
void SetSenha(const string& senha) 
{
	this->senha = senha;
}

// GETs
const string& GetFabricaApple() const
{
	return this->FabricaApple;
}
const string& GetModelo() const 
{
	return modelo;
}
const string& GetSenha() const 
{
	return senha;
}

//funções
void abrirLoja()
{
	cout<<"###### APP STORE ONDE TUDO È PAGO ######\n\n Bem vindo !!!!!"endln;  //verificar sintaxe
		
}

void mudarSenha()
{
	string entrada;
	do{
		cout<<"para mudar a senha digite a senha anterior: ";
		cin>>entrada;
		if (entrada != this->senha)
			cout<<"senha incorreta ";
	}while (entrada != this->senha);
	this->senha=entrada;
}

void VerDevice()
{
	if (this->Device==true)
		cout<<"este devicce é um Ipad";
	else
		cout<<"este device não é um ipad";
}

void Ipad::menu()
{
		int esc;
		do{
			cout<<"funções de tablet[1=sim] ou Ipad[outro]";
			cin>> esc;
			if (esc==1)
				Tablet::menu(); //chamada de função base na sub-classe.
			else if (esc == 2)
			{
				cout<<"1 - abrir loja\n2 - abrir agenda\n3 - mudar senha\n4 - verificar device ";
				cin>>esc;
				switch(esc)
				{
					case 1:
						this->abrirLoja();
					break;
					case 2:
						this->abrirAgenda();
					break;
					case 3:
						this->mudarSenha();
					break;
					case 4:
						this->VerDevice();
					break;
				}
			}
		}while(esc <= 4 && esc > 0);
}