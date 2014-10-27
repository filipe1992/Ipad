#ifndef AGENDA_H
#define AGENDA_H
//#include "Tablet.h" //-- na verdade é o contrario
#include <iostream>
#include <vector>
#include <string>

class Agenda
{

	friend ostream &operator<<(ostream &output, const Agenda &agenda);// sobrecarga de operador usando friend
	
private:
	string nome;
	string numero;
	int discagemRapida;
	static int quantidade;
public:
	Agenda(string nome=" ",string numero=" ");
	~Agenda();
	Agenda(Agenda &copia);
	Agenda::Agenda(string &nome=" ");
	
	
	void SetNome(const string& nome);
	void SetNumero(const string& numero);
	
	//funções gets
	const string& GetNome() const;
	const string& GetNumero() const;
	
	//funções ulteis
	Agenda operator+(Agenda &direita);//sobrecarga do operaddor de soma;
	
	//void ordenarPorNome();// possivel implementação 
	
};

#endif // AGENDA_H
