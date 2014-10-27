#include <ostream>
#include <vector>
#include <string>
#include "Usuario.h"

using namespace std;

int main(int argc, char **argv)
{
	//variaveis para uso:
	int idade;
	string nome,modelo,senha,fabricante;
	int dia,mes,ano,nivelBateria,coordenadax,coordenaday,TamanhoDaTela;
	float memoriaInterna,resolucaoCamera;
	bool conexaoComInternet;
	
	
	//fim
	Usuario usuario;
	

		switch(escolha1)//usuario
		{
			case 1://adicionar
				cout<<"digite seu nome";
				cin>>nome;
				cout<<"digite suua idade";
				cin>>idade;
				Usuario::usuario(nome,idade);
				cout<<usuario;
				break;
			case 2://add Ipad
				cout<<"digite o dia de fabricação";
				cin>>dia;
				cout<<"digite o mes de fabricação";
				cin>>mes;
				cout<<"digite o ano de fabricação";
				cin>>ano;
				cout<<"digite o nivel da bateria";
				cin>>nivelBateria;
				cout<<"digite o tamanho da memoria interna";
				cin>>memoriaInterna;
				cout<<"digite a resoluçao da camera";
				cin>>resolucaoCamera;
				cout<<"esta conectado com a internet[1=sim/0=não]";
				cin>>conexaoComInternet;
				cout<<"digite a coordenada do toque X";
				cin>>coordenadax;
				cout<<"digite a coordenada do toque X";
				cin>>coordenaday;
				cout<<"digite o tamanho da tela";
				cin>>TamanhoDaTela;
				cout<<"digite o modelo";
				cin>>modelo;
				cout<<"digite a senha";
				cin>>senha;
				cout<<"digite o nome da fabrica";
				cin>>fabricante;
				
				Tablet *ipad=new Ipad(dia,mes,ano,nivelBateria,memoriaInterna,resolucaoCamera,conexaoComInternet,coordenadax,coordenaday,TamanhoDaTela,modelo,senha,fabricante);
				usuario.addIpad(*ipad);
				delete ipad;
				
					break;
				case 3://moostrar
					usuario->mostrarIpads();				
					break;
				case 4:
					cout<<"digite o numero do ipad";
					cin>>escolha;
					usuario.usarTablet();
					break;
			}

	
 
	
	printf("hello world\n");
	system("pause");
	return 0;
}
