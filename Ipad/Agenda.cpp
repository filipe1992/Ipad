#include "Agenda.h"

Agenda::quantidade=0;
Agenda::prefixopara=91;

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
	string *numero = new string;
	std::cout<<" digite o numero "std::endl;
	std::cin>>*numero;
	Agenda::SetNumero(numero);
	discagemRapida = ++quantidade;
	delete numero;
}

Agenda::~Agenda()
{
	
}

void Agenda::SetNome(const string& nome) 
{
	this->nome = nome;
}

void Agenda::SetNumero(const string &numero) 
{
	if (numero.size() > 8 && numero.size() < 14) //numeros entre 0000000 e + 55 091 "9"0000000 (sem mais e espaços) 
		this->numero = numero;
	else 
		this->numero("00000000");
}

const string& Agenda::GetNome() const 
{
	return nome;
}
const string& Agenda::GetNumero() const 
{
	return numero;
}

//funçoes ulteis;
Agenda operator=(Agenda &copia)//sobrecarga da soma;
{	
	this->nome = copia.nome;
	this->numero = copia.numero;
	
	return *this;
}


