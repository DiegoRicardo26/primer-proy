//persona = nombres, apellidos, direccion, telefono, fecha de nacimiento, nit, dpi, etc...
//cliente = nit, etc...
#include <iostream>
using namespace std;
//nombre de la clase
class Persona{
	//atributos
	//metodos de acceso: Protegido, privado, publico
	protected : string nombres, apellidos, direccion;
				int telefono;
	//metodo constructor
	protected :	
		Persona(){
			
		}
		Persona(string nom, string ape, string dir, int tel){
			nombres=nom; apellidos=ape; 	direccion=dir; 	telefono=tel;	
		}
	//metodos 
	void mostrar();
};
