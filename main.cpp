#include "Cliente.cpp"
#include <iostream>
using namespace std;
main(){
	string nit, nombres, apellidos, direccion;
	int telefono;
	cout<<"ingrese Nit: ";
	cin>>nit;
	cout<<"ingrese nombres: ";
	cin>>nombres;
	cout<<"ingrese apellidos: ";
	cin>>apellidos;
	cout<<"ingrese direccion: ";
	cin>>direccion;
	cout<<"ingrese telefono: ";
	cin>>telefono;
	// instanciar un objeto y cambiar nit unicamente
	Cliente obj = Cliente(nombres, apellidos, direccion, telefono, nit);
	obj.mostrar();
	cout<<"ingrese nit"<<endl;
	cin>>nit;
	obj.mostrar();
	
	/*
	Cliente obj = Cliente();
	obj.setnit(nit);
	obj.setnombres(nombres);
	obj.setapellidos(apellidos);
	obj.setdireccion(direccion);
	obj.settelefono(telefono);
	
	cout<<"Este es el nit: "<<obj.getnit()<<endl;
	cout<<"nombres: "<<obj.getnombres()<<endl;
	cout<<"apellidos: "<<obj.getapellidos()<<endl;
	cout<<"direccion: "<<obj.getdireccion()<<endl;
	cout<<"telefono: "<<obj.gettelefono()<<endl;
	//obj.mostrar();
	*/
}
