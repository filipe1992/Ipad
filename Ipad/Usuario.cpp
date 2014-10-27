#include "Usuario.h"

osteram& operator<<(ostream &output,Usuario &usuario)//friend sobrecrga de operador <<
{
		output=<<"\nNome: "<< usuario.nome <<"\nIdade: "<<usuario.idade;
		return output;
}

Usuario::Usuario(string &nome,int idade)
{
	Tablet *ptr
	SetIdade(idade)
	SetNome(nome);
	ptr = new Ipad;// alocação dinamica
	SetIpad(*ptr);
	delete ptr;
}

Usuario::Usuario(const int idade)
{
	Tablet *ptr
	std::cout<<"digite seu nome"std::endl;
	std::cin>>nome;
	this->SetNome(nome);
	ptr = new Ipad;// alocação dinamica   ok
	this->SetIpad(*ptr);
	delete ptr;
}

Usuario::~Usuario()
{
	delete ipad;
}

Usuario operator=(usuario &u)
{
	this->nome=u.nome;
	this->idade= u.idade;
	this->ipad=u.ipad;//operador sobrecarregado na classe vector
}

void SetIdade(int idade) 
{
	if (idade < 0 )
		this->idade = 0;
	else
		this->idade = idade;
}

void SetIpad(const Tablet &ipad) 
{
	this->ipad.push_back (ipad);// usar o push back ok
}

void SetNome(const string &nome)
{
	this->nome = nome;
}

int GetIdade() const 
{
	return idade;
}

const Tablet& GetIpad() const 
{
	return ipad;
}

const string& GetNome() const 
{
	return nome;
}

void addIpad()
{
	Tablet *ipad = new Ipad; // alocação dinamica de memoria 
	Usuario::SetIpad(*ipad);
	delete ipad;
}

void Usuario::mostrarIpads()
{
	for (vector<Tablet>::itarator it=this->ipad.begin();it!= this->ipad.end();it++)
		cout<<*it<<"\n";//operador sobrecarregado
}

void Usuario::usarTablet(const int i)
{
	Ipad::this->ipad[i].menu;
}
//void deletarIpad();    adotar uma abordagem simples primeiramente 
