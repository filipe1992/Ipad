#include <ostream>
#include <vector>
#include <string>
#include "Usuario.h"

using namespace std;


void usar(Device *);

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
	//Eletronico *ipad = new Ipad; 
	

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
				cout<<"digite o tamanho da memoria interna";
				cin>>memoriaInterna;
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
				
				Device *ipad=new Ipad(dia,mes,ano,true,conexaoComInternet,coordenadax,coordenaday,TamanhoDaTela,modelo,senha,fabricante);
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
		cout<<"deseja usar a função static_cast para um vetor da classe base[1=SIM/0=NAO]"<<endl;
		cin>>esc;
		if(esc)
		{
			Pirata pirata();
			Ipad ipad();
			Galaxy galaxy();
			
			vector<Device> device;
			device.push_back(&galaxy);
			device.push_back(&ipad);
			device.push_back(&pirata);
			
			Pirata *ptr; 
					
			for (i=0;i<3;i++){
			
				ptr = dynamic_cast<Pirata*>(Device[i]]);
				if (ptr!=0){
					cout<<"não uze coisas piratas\n compre um original"<<enfl;
					cout<<"seu tablet Pirata sera destruido"<<tipeid(*device[i])).nome()<<endl;
					delete device[j];
		
				}
				
			}
		}
		
		cout<<"seu tablet Pirata sera destruido"endl;
		if (tipeid(*device[i])).nome()==
		
		
		
	system("pause");
	return 0;
}

void usar(Device *der)
{
	cout<<"esta classe é: "<<typeid(*der).nome();
	der->mostrar();
}
