#include "pch.h"
#include "FormularioPROFESORES.h"

FormularioPROFESORES:: profesor::profesor() {

	ci = "";
	nombre = "";
	apellido = "";
	edad = 0;
	direccion = "";
	sexo = "masculino";
	categoria = "contrato";
	fecha_ingreso = "08/03/2000";
	salario = 5000;
	

}

FormularioPROFESORES::profesor::profesor(String^ _ci, String^ _nombre, String^ _apellido, int _edad, String^ _sexo, String^ _categoria, float _salario, String^ _fecha_ingreso, String^ _direccion)
{
	ci = _ci;
	nombre = _nombre;
	apellido = _apellido;
	edad = _edad;
	sexo = _sexo;
	direccion=_direccion;
	categoria = _categoria;
	salario = _salario;
	fecha_ingreso = _fecha_ingreso;


}

FormularioPROFESORES::profesor::~profesor() {

}

