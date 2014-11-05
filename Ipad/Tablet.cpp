#include "Tablet.h"

using namespace std;

Tablet::software=true;

friend ostream& operator<<(ostream &output , Tablet &tablet)// função friend e sobrecarga do operador <<
{
	output ="\nnivelBateria: "<< tablet.nivelBateria 
	<<"\nMemoria interna: "<<tablet.memoriaInterna
	<<"\ncoordenadadas da tela: X= "<<tablet.coordenadax<<" Y= "<<tablet.coordenaday
	<<"\nconecção com a internet "<<(tablet.conexaoComInternet == true):<<"sim"<<:"não" //verificar
	<<"\ntamanho da tela: "<<tablet.tamanhoDaTela;
	return output;
}

Tablet::Tablet operator=(Tablet &t)
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
	return *this;
}

Tablet::Tablet(float memoriaInterna,bool conexaoComInternet,int coordenadax,int coordenaday,int TamanhoDaTela)
: Device::Device()
{
	SetConexaoComInternet(conexaoComInternet);
	SetMemoriaInterna(memoriaInterna);
	setTamanhoDaTela(TamanhoDaTela);
	setTela(this->getTamanhoDaTela());// valor recebido apos validação dos dados
}

Tablet::~Tablet()
{
	delete Tela;
	delete contatos;
}

Tablet::Tablet(Tablet &copia)
: Device::Device(copia)
{
	this->Tela=copia.Tela;
	this->coordenadax=copia.coordenadax;
	this->coordenaday=copia.coordenaday;
	this->memoriaInterna=copia.memoriaInterna;
	this->conexaoComInternet=copia.conexaoComInternet;
	this->contatos=copia.contatos;
	this->tamanhoDaTela=copia.tamanhoDaTela;
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


void Tablet::setTamanhoDaTela(const int TamanhoDaTela)
{
	if (tamanhoDaTela < 5)
		this->TamanhoDaTela;
	else
		this->TamanhoDaTela=tamanhoDaTela;
}

void setTela(const int tamanho)
{
	*this->Tela = new vector<*bool>[tamanho];
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
	cout<<"foto gravada com sucesso!!"<<endl;
}

void Tablet::verContatos() const
{
	for (vector<Agenda>::itarator it=this->contatos.begin();it!= this->contatos.end();it++)
		cout<<"\nnome: "<<it->nome <<"numero: "<<it->numero<<endl;S
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

void Tablet::menu(Tablet *tablet)
{
	int esc;
	
	do{
		cout<<"##### Menu #####\n1 - tirar foto\n2 - ver contatos\n3 - posiccionar na tela\n4 - add comtato \noutro - para sair";
		cin>>esc;
		switch(esc)
		{
			case 1:
				tablet->tirarFoto();
			break;
			case 2:
				tablet->verContatos();
			break;
			case 3:
				tablet->posicionarNaTela();
			break;
			case 4:
				tablet->addContato();;
			break;
		}
	}while(esc >= 1 && esc <= 5);
		
}

