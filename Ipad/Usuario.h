#ifndef USUARIO_H
#define USUARIO_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Ipad.h"

class Usuario
{
private:
	String nome;

	Ipad *ipad;


public:
	Usuario(String nome, Ipad ipad);

	void setIpad();

	void setNome();

	String getNome() const;

	void usarIpad();
	
	static void menuUsuario(Usuario &);

};
#endif
