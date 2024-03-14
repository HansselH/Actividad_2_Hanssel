#include<iostream>

using namespace std;

class Persona{
	
	//atributos de persona = nombres, apellidos, direccion, telefono, fecha_nacimiento
	protected : string nombres, apellidos, direccion, fecha_nacimiento;
				int telefono;
				
	

//Metodos

Persona(){
	}
	Persona(string nom, string ap, string dir, int tel, string fn){
		
		nombres = nom;
		apellidos = ap;
		direccion = dir;
		telefono = tel;
		fecha_nacimiento = fn;
	}
	
	void crear();
	void leer();
	void actualizar();
	void borrar();
	

};

