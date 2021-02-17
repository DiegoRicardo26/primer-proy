//main para la clase empleado
#include "Empleado.cpp"
#include <iostream>
using namespace std;
main()
{
	string nombres, apellidos, direccion, codigo_emp, puesto;
	int telefono, sueldo;
	
	cout<<"ingrese el nombre: ";
	cin>>nombres;
	cout<<"ingrese el apellido: ";
	cin>>apellidos;
	cout<<"ingrese la direccion: ";
	cin>>direccion;
	cout<<"ingrese el telefono: ";
	cin>>telefono;
	cout<<"ingrese el codigo del empleado: ";
	cin>>codigo_emp;
	cout<<"ingrese el puesto del empleado: ";
	cin>>puesto;
	cout<<"ingrese el sueldo del empleado: ";
	cin>>sueldo;
	Empleado emp = Empleado(nombres, apellidos, direccion, telefono, codigo_emp, puesto, sueldo);
	emp.mostrardatos();
	
}
