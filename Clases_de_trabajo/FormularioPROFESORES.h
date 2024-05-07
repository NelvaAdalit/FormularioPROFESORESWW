#pragma once

using namespace System;

namespace FormularioPROFESORES {
	
	public ref class profesor
	{
		
		private:
			property String^ ci;
			property String^ nombre;
			property String^ apellido;
			property int edad;
			property String^ sexo;
			property float salario;
			property String^ categoria;
			property String^ fecha_ingreso;
			property String^ direccion;
			
		public:
			
			profesor();
			profesor(String ^ _ci, String ^ _nombre, String ^ _apellido, int _edad, String ^ _sexo, String ^ _categoria, float _salario, String ^ _fecha_ingreso, String^ _direccion);

			~profesor();

			String^ getci() { return ci; }
			String^ getnombre() { return nombre; }
			String^ getapellido() { return apellido; }
			int getedad() { return edad; }
			String^ getsexo() { return sexo; }
			float getsalario() { return salario; }
			String^ getcategoria() { return categoria; }
			String^ getfechaingreso() { return fecha_ingreso; }
			String^ getdireccion() { return direccion; }

			void setci(String ^ _ci) { ci = _ci; }
			void setnombre(String ^ _nombre) { nombre = _nombre; }
			void setapellido(String ^ _apellido) { apellido = _apellido; }
			void setedad(int _edad) { edad = _edad; }
			void setsexo(String ^ _sexo) { sexo = _sexo; }
			void setsalario(float _salario) { salario = _salario; }
			void setcategoria(String ^ _categoria) { categoria = _categoria; }
			void setfechaingreso(String ^ _fecha_ingreso) { fecha_ingreso = _fecha_ingreso; }
			void setdireccion(String^ _direccion) { direccion = _direccion; }

	};

		


	

}
