#include "Tablet.h"

using namespace std;// verificar slide

//Tablet::Tela new vector<int>[10][20];//usando aloccação dnamica>> não mais estatico ;


friend ostream& operator<<(ostream &output , Tablet &tablet)// função friend e sobrecarga do operador <<
{
	output = "\nNome: "<< tablet.nomeDoDevice 
	<<"\nData de fabricação: "<< tablet.dataDeFabricacao 
	<<"\nnivelBateria: "<< tablet.nivelBateria 
	<<"\nMemoria interna: "<<tablet.memoriaInterna
	<<"\ncoordenadadas da tela: X= "<<tablet.coordenadax<<" Y= "<<tablet.coordenaday
	<<"\nResolução da camera: "<<tablet.resolucaoCamera
	<<"\nconecção com a internet "<<(tablet.conexaoComInternet == true):<<"sim"<<:"não" //verificar
	<<"\ntamanho da tela: "<<tablet.tamanhoDaTela;
	return output;
}

Tablet::Tablet operator=(Tablet &t)
{
	this->dataDeFabricacao=t.dataDeFabricacao;
	this->Tela=t.Tela;
	this->coordenadax=t.coordenadax;
	this->coordenaday=t.coordenaday;
	this->nivelBateria=t.nivelBateria;
	this->memoriaInterna=t.memoriaInterna;
	this->resolucaoCamera=t.resolucaoCamera;
	this->nomeDoDevice=t.nomeDoDevice;
	this->conexaoComInternet=t.conexaoComInternet;
	this->contatos=t.contatos;
	this->tamanhoDaTela=t.tamanhoDaTela;
	return *this;
}

Tablet::Tablet(const int dia,const int mes, const int ano,int nivelBateria,float memoriaInterna,const float resolucaoCamera,string& nomeDoDevice,bool conexaoComInternet,int coordenadax,int coordenaday,int TamanhoDaTela)
{
	SetConexaoComInternet(conexaoComInternet);
	SetMemoriaInterna(memoriaInterna);
	SetNivelBateria(nivelBateria);
	SetNomeDoDevice(nomeDoDevice);
	setTamanhoDaTela(TamanhoDaTela);
	SetDataDeFabricacao(dia,mes,ano);
	setTela(this->getTamanhoDaTela());// valor recebido apos validação dos dados
}

Tablet::~Tablet()
{
	delete Tela;
	delete contatos;
 // vcerificar se esta correto 
}

void SetDataDeFabricacao(const int dia, const int mes, const int ano) 
{
	if (ano > 2000 )//validação da data para uma data que não seja antes da existencia dos tablets 
		this->dataDeFabricacao(dia,mes,ano);//aqui
	else
		this->dataDeFabricacao(dia,mes,2000);
}

void Tablet::SetConexaoComInternet(bool conexaoComInternet) 
{
	this->conexaoComInternet = conexaoComInternet;
}
void Tablet::SetMemoriaInterna(float memoriaInterna) 
{
	if (memoriaInterna > 0)//validador de dados
		this->memoriaInterna = memoriaInterna;
	else
		this->memoriaInterna = 1;
}
void Tablet::SetNivelBateria(int nivelBateria) 
{
	if ((nivelBateria <= 100)&&(nivelBateria > 0))//validar dados
		this->nivelBateria = nivelBateria;
	else
		this->nivelBateira=100;
}

void Tablet::SetNomeDoDevice(const string& nomeDoDevice) 
{
	this->nomeDoDevice = nomeDoDevice;
}

void Tablet::SetCoordenadax(int coordenadax) {
	if (coordenadax < this->tamanhoDaTela && coordenadax >=0 )
		this->coordenadax = coordenadax;
	else
		this->coordenadax=0;
}

void Tablet::SetCoordenaday(int coordenaday) 
{
	if (coordenaday < this->tamanhoDaTela && coordenaday >=0 )
		this->coordenaday = coordenaday;
	else
		this->coordenaday=0;
}

bool Tablet::IsConexaoComInternet() const 
{
	return conexaoComInternet;
}

float Tablet::GetMemoriaInterna() const 
{
	return memoriaInterna;
}

int Tablet::GetNivelBateria() const 
{
	return nivelBateria;
}

const string& Tablet::GetNomeDoDevice() const 
{
	return nomeDoDevice;
}

void Tablet::setTamanhoDaTela(const int TamanhoDaTela)
{
	if (tamanhoDaTela < 5)
		this->TamanhoDaTela;
	else
		this->TamanhoDaTela=tamanhoDaTela;
}

void setTela(const int tamanho)
{
	*this->Tela = new vector<bool>[tamanho];
	for(int i ;i<tamanho;i++)
		this->Tela[i] = new vector<bool>[tamanho];
}



//GETs
int getTamanhoDaTela() const
{
		return this->TamanhoDaTela;
}

void Tablet::SetContatos(const Agenda &contato) 
{
	
	vector<Agenda>::this->contatos.push.back(contato);//coloca no fim
}

const vector<Agenda>& Tablet::GetContatos() const 
{
	return contatos;
}

int Tablet::GetCoordenadax() const 
{
	return coordenadax;
}

int Tablet::GetCoordenaday() const 
{
	return coordenaday;
}	

//ferramentas

void Tablet::tirarFoto()
{
	cout<<"foto tirada com sucesso!!"<<endl;
	Tablet::descarregarBateria();
}

void Tablet::verContatos() const
{
	for (vector<Agenda>::itarator it=this->contatos.begin();it!= this->contatos.end();it++)
		cout<<"\nnome: "<<it->nome <<"numero: "<<it->numero;
}

void Tablet::posicionarNaTela()
{
	int x,y;
	cout<<"digite a posição X: ";
	cin>>x;
	cout<<"digite a posição Y: ";
	cin>>y;
	if ((x!=this->GetCoordenadax() || Y!=this->GetCoordenaday()) && (x < this->tamanhoDaTela || Y< this->tamanhoDaTela))
		this->Tela[getCoordenadax()][getCoordenaday()]= false;
		this->SetCoordenadax(x);
		this->SetCoordenaday(y);
		this->Tela[getCoordenadax()][getCoordenaday()]= true;
	else
		cout<<"posição invalida!!!!"
		
}
void Tablet::addContato()
{
	string nome,numero;
	cout<<"digite o nome do contato";
	cin>>nome;
	cout<<"digite o nome do contato";
	cin>>numero;
	Agenda *ptr = new Agenda(nome,numero);
	this->contatos.push_back(*ptr);
	delete ptr;
}

void Tablet::menu()//coisa a serem feitas
{
	int esc;
	
	do{
		cout<<"##### Menu #####\n1 - tirar foto\n2 - recarregar\n3 - ver contatos\n4 - posiccionar na tela\n5 - add comtato \noutro - para sair";
		cin>>esc;
		switch(esc)
		{
			case 1:
				this->tirarFoto();
			break;
			case 2:
				this->recarregarBateria();
			break;
			case 3:
				this->verContatos();
			break;
			case 4:
				this->posicionarNaTela();
			break;
			case 5:
				this->addContato();;
			break;
		}
	}while(esc >= 1 && esc <= 5);
		
}
