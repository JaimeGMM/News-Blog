#ifndef DATOS_PER_H
#define DATOS_PER_H
#include "fecha.h"

typedef char cadena [60];

/**
	@author Jaime Gamero Maya <jaime@localhost.localdomain>
*/


/**
 * Clase Datos_per; Sus atributos son:
 *    - nombre
 *    - Ap1
 *    - Ap2
 *    - f
 *    - num_tel
 */


class Datos_per{

	cadena nombre;
	cadena Ap1;
	cadena Ap2;
	fecha f;
	cadena num_tel;	
	
	
	public:
    
		/**
		@brief Construcutor por defecto
		@param
		@return
		@pre
		@post Devuelve Datos_per con todos los campos vacios
		@par O (1)
		*/
		Datos_per();
        
		/**
		@brief Constructor por copia 
		@param D: Objeto Datos_per a copiar
		@return
		@pre El objeto parametro debe estar creado
		@post Objeto Datos_per creado e inicializado con la copia del parametro
		@par O(1)
		*/
    	Datos_per (const Datos_per &Da);
		
		
		/**
		@brief Constructor Parametrizado
		@param nomb: nombre.Variable del tipo cadena
		@param Ape1: Apellido 1.variable del tipo cadena
		@param Ape2: Apellido 2.variable del tipo cadena
		@param numero: número de teléfono.variable del tipo cadena
		@return
		@pre los parámetros nomb,Ape1,Ape2,num_tel deben ser correctos y del tipo cadena
		@post Objeto Datos_per creado e inicializado con nombre,Apellido 1,Apellido 2 por defecto
		@par O(1)
		*/
		Datos_per(cadena nomb,cadena Ape1,cadena Ape2,cadena num_tel);
		
		
		
		
		/**
		@brief Duplica un objeto Datos_per
		@param Da: Parametro del tipo Datos_per
		@return Objeto de la clase Datos_per, duplicado del parámetro 
		@pre El objeto por parámetro debe ser válido
		@post 
		@par O(1)
		*/
		void Clonar_Datos_per(const Datos_per &Da);
		
		
		/**
		@brief Muestra el  atributo nombre del objeto Datos_per
		@param
		@return
		@pre
		@post Muestra por pantalla el atributo nombre
		@par O (1)
		*/
		void Mostrar_nombre();
		
		
		
		
		/**
		@brief Muestra el atributo Ap1 del objeto Datos_per
		@param
		@return
		@pre
		@post Muestra por pantalla el atributo Ap1
		@par O (1)
		*/
		void  Mostrar_Ap1 ();
		
		
		/**
		@brief Muestra el atributo Ap2 del objeto Datos_per
		@param
		@return
		@pre
		@post Muestra por pantalla el atributo Ap2
		@par O(1)
		*/
		void Mostrar_Ap2 ();
		
		
		
		/**
		@brief Muestra el atributo f (fecha) del obeto Datos_per
		@param
		@return
		@pre
		@post Muestra por pantalla el atributo f (fecha)
		@par O(1)
		*/
		void Mostrar_fech ();
		
		/**
		@brief Muestra el atributo num_tel del objeto Datos_per
		@param
		@return
		@pre
		@post Muestra por pantalla el atributo num_tel
		@par O(1)
		*/
		void Mostrar_num_tel ();
		
		
		
		/**
		@brief El usuario introduce los datos referido a nombre
		@param 
		@return
		@pre 
		@post el atributo nombre queda modificado con la informacion introducida por el usuario
		@par O (1)
		*/
		void Pedir_nombre( );
		
		
		/**
		@brief El usuario introduce El primer apellido (Ap1)
		@param 
		@return
		@pre
		@post el atributo Ap1 queda modificado con la informacion introducida por el usuario
		@par O(1)
		*/
		void Pedir_apellido1 ( );
		
		
		
		/**
		@brief El usuario introduce El segundo Apellido (Ap2)
		@param 
		@return
		@pre
		@post El atributo Ap2 queda modificado con la información introducida por el usuario
		@par O(1)
		*/
		void Pedir_apellido2 ( );
		
		
		/**
		*/
		void Pedir_fecha ( );
		
		/**
		@brief El usuario introduce el número de telefono 
		@param 
		@return
		@pre
		@post El atributo num_tel queda modificado con la información introducida por el usuario
		@par O(1)
		*/
		void Pedir_num_tel ( );

		
		/**
		@brief Modifica el atributo nombre del objeto Datos_per
		@param nom: nombre del contacto.Variable del tipo cadena
		@return
		@pre La variable  nom (nombre) debe ser del tipo cadena
		@post Objeto Datos_per actualizado con nuevo nombre del contacto
		@par O(1)
		*/
		void Poner_nombre(cadena nom);
		
		
		
		/**
		@brief Modifica el atributo Ap1 del objeto Datos_per
		@param Ape1: Apellido primero del contacto.Variable del tipo cadena
		@return
		@pre La variable Ap1 (Apellido 1)debe ser del tipo cadena 
		@post Objeto Datos_per actualizado con nuevo primer Apellido del contacto
		@par O(1)
		*/
		void Poner_Ap1 (cadena Ape1);
		
		
		
		/**
		@brief Modifica el atributo Ap2 del objeto Datos_per
		@param Ape2: Apellido segundo del contacto.Variable del tipo cadena
		@pre La variable Ap2 (Apellido 2)debe ser del tipo cadena
		@post Objeto Datos_per actualizado con nuevo primer Apellido del contacto
		@par O(1)
		*/
		void Poner_Ap2 (cadena Ape2);
		
		
		
		/**
		@brief Modifica el atributo f (fecha) del objeto Datos_per
		@param fech: fecha de nacimiento del contacto.Variable del tipo fecha
		@pre La variable fech debe ser del tipo fecha
		@post Objeto Datos_per actualizado con nueva fecha
		@par O(1)
		*/
		void Poner_fecha (fecha fech);
		
		
		
		/**
		@brief Modifica el atributo num_tel del objeto Datos_per
		@param num: numero del contacto.Variable del tipo cadena
		@pre La variable num debe ser del tipo cadena
		@post Objeto Datos_per actualizado con nuevo numero
		@par O(1)
		*/
		void Poner_num_tel (cadena num);
		
		
		
		/**
		@brief Obtiene el nombre del contacto
		@param c2: variable del tipo cadena
		@return el nombre del contaco
		@pre c2 debe ser del tipo cadena
		@post atributo nombre copiado a la variable c2
		@par O(1)
		*/
		void Obtener_nombre (cadena &c1) const;
		
		
		
		/**
		@brief Obtiene el primer Apellido del contacto
		@param c2: variable del tipo cadena
		@return El primer apellido del contacto
		@pre	c2 debe ser del tipo cadena	
		@post atributo Ap1 copiado a la variable c2;
		@par O (1)
		*/
		void Obtener_Ap1 (cadena &c2) const;
		
		
		
		/**
		@brief Obtiene el segundo apellido del contacto
		@param c2: variable del tipo cadena
		@return El segundo apellido del contacto
		@pre c1 debe ser del tipo cadena
		@post atributo Ap2 copiado a la variable c2
		@par O(1)
		*/
		void Obtener_Ap2 (cadena &c2) const;
		
		
		
		
		/**
		@brief Devuelve la fecha de nacimiento de la persona
		@param F: Fecha.Variable del tipo Fecha
		@return fecha de nacimiento de la persona
		@pre F debe ser del tipo fecha
		@post Fecha de nacimiento copiada a la variable  F del tipo fecha
		@par O (1)
		 */
		void Obtener_Fecha(fecha &F)const; 
		
		
		/**
		@brief Devuelve el numero de telefono de la persona
		@param c2: variable del tipo fecha
		@return numero de telefono del contacto
		@pre c2 debe ser del tipo cadena
		@post atributo num_tel copiado a la variable c2
		@par O(1)
		*/
		void Obtener_num_tel (cadena &c2) const;
		
		/**
		@brief Concatena todos los atributos de la clase datos_per
		@param nombre: nombre del contacto,variable de tipo cadena
		@param Ape1: Primer apellido del contacto,variable de tipo cadena
		@param Ape2: Segundo apellido del contacto,variable de tipo cadena
		@param dia: dia de nacimiento del contacto,variable de tipo entero
		@param mes:mes de nacimiento del contacto,variable de tipo entero
		@param anio: año de nacimiento del contacto,variable de tipo entero
		@param num_telf: numero de telefono del contacto,variable de tipo cadena
		@param complet: cadena concatenada,variable del tipo cadena
		@return
		@pre todas las variables,excepto dia,mes y anio que seran de tipo entero,seran del tipo cadena
		@post Todas las variables quedan concatenadas en un unico atributo
		@par O(1)
		*/
		void Concatenar_dat_per(cadena nombre,cadena Ape1,cadena Ape2,int dia,int mes,int anio,cadena num_telf,cadena complet);
		
		
		
		~Datos_per();

};

#endif
