#include "Persona.cpp"
#include <iostream>
using namespace std;
class Empleado : Persona {
	private: string codigo_emp, puesto;
			int sueldo;
	public: 
	Empleado()
	{
	}
	Empleado(string nom, string ape, string dir, int tel, string cod_emp, string pue, int sue) : Persona(nom, ape, dir, tel) {
		codigo_emp=cod_emp; 	puesto=pue; 	sueldo=sue;
	}
	void setnombre (string nom) {nombres = nom;}
	void setapellido (string ape) {apellidos = ape;}
	void setdireccion (string dir) {direccion = dir;}
	void settelefono (int tel) {telefono = tel;}
	void setcodigo_empleado (string cod_emp) {codigo_emp = cod_emp;}
	void setpuesto (string pue) {puesto = pue;}
	void setsueldo (int sue) {sueldo = sue;}
	
	string getnombre () {return nombres;}
	string getapellido () {return apellidos;}
	string getdireccion () {return direccion;}
	int gettelefono () {return telefono;}
	string getcodigo_emp () {return codigo_emp;}
	string getpuesto () {return puesto;}
	int getsueldo () {return sueldo;}
	
	void mostrardatos(){
		cout<<endl<<endl<<"---------------------------------------------------------------"<<endl;
		cout<<"El empleado es: "<<nombres<<" "<<apellidos<<endl;
		cout<<"Su direccion es: "<<direccion<<" y su telefono es: "<<telefono<<endl;
		cout<<"Su codigo de empleado es el: "<<codigo_emp<<" y su puesto es: "<<puesto<<endl;
		cout<<"Tiene un salario de: Q"<<sueldo;
	}
	
};

