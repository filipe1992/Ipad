#ifndef GALAXY_H
#define GALAXY_H
#include <ostream>
#include <string>
#include <Tablet.h>

class Galaxy : public Tablet
{ 
protected://private:
	static bool android;
	string vercao;
	bool vercaocoreana;
public:
	Galaxy(Galaxy &);
	Galaxy(string vercao,bool vercaocoreana);
	Galaxy();
	~Galaxy();
	Galaxy operator=(Galaxy &g)
	
void SetVercao(const string& vercao);
void SetVercaocoreana(bool vercaocoreana);
const string& GetVercao() const;
bool IsVercaocoreana() const;
void mostrar();

};

#endif // GALAXY_H

