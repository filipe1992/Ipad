#ifndef PIRATA_H
#define PIRATA_H
#include <string>
#include <vector>
#include <iostream>
#include "Tablet.h"


enum fabricacao{"China","Paraguai"};

class Pirata : public Tablet
{
private:
	fabricacao local; //enum fabricacao
	bool funciona;
	static bool boaqualidade;
	vector<string> defeito;
public:
	Pirata(fabricacao &local,string &defeito);
	Pirata(Pirata &)
	~Pirata();
	
Pirata::Pirata operator=(Pirata &p);

void SetFabicacaolocal(int fabicacaolocal);
void SetFunciona(bool funciona);
int GetFabicacaolocal() const; 
bool IsFunciona() const;
void addDefeito(const string &defeito); 
void motrar();

};

#endif // PIRATA_H

