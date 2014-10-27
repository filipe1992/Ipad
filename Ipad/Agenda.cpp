#include "Agenda.h"

Agenda::quantidade=0;

ostream &operator<<(ostream &output, const Agenda &agenda)// sobrecarga de operadorusando friend 
{
	output = <<"\nNome: "<<agenda.nome<<"\nNumero: "<<agenda.numero<<"\nDiscagem rapida:"<<agenda.discagemRapida;
	return output;
}

Agenda::Agenda(string nome=" ",string numero=" ")
{
	this->SetNome(nome);
	this->SetNumero(numero);
	this->discagemRapida = ++this->quantidade;
}
Agenda::Agenda(Agenda &copia)
{
	this->discagemRapida=copia->discagemRapida;
	this->nome=copia->nome;
	this->numero=copia->numero;
}

Agenda::Agenda(string &nome=" ")
{
	std::cout<<" digite o numero "std::endl;
	std::cin>>numero;
	Agenda::SetNumero(numero);
}

Agenda::~Agenda();

void SetNome(const string& nome) 
{
	this->nome = nome;
}

void SetNumero(const string &numero) 
{
	if (numero.size() > 8 && numero.size() < 14) //numeros entre 82572530 e + 55 091 "9"82572530 (sem mais e espaços) 
		this->numero = numero;
	else 
		this->numero("00000000");
}

const string& GetNome() const 
{
	return nome;
}
const string& GetNumero() const 
{
	return numero;
}

//funçoes ulteis;
Agenda operator+(Agenda &direita)//sobrecarga da soma;
{
	string name,number;
	
	name = nome + direita->nome;
	number = numero + direita.numero;
	
	return Agenda(name,number);
}

