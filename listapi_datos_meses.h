#ifndef LISTAPI_DATOS_MESES_H
#define LISTAPI_DATOS_MESES_H
#include"datos_meses.h"
/**
	@author Jaime Gamero Maya <jaime@localhost.localdomain>
*/

typedef struct nodoM
{
	datos_meses info;
	nodoM *suce;

};

typedef nodoM * listaM;


class listapi_datos_meses{

	listaM api;
	listaM L;
	
	public:
    
		
		/**
		@brief Crea la lista dinamica que contendá en cada nodo la clase datos_meses
		@param
		@return
		@pre
		@post crea una lista vacia
		@par O(1)
		*/
		void Crear     ();	
		
		
		
		
		
		/**
		@brief Indica si la lista esta llena o vacia.
		@param
		@retval TRUE: devulve este valor si la lista esta  vacia
		@retval FALSE: devuelve este valor si la lista esta llena
		@pre La lista debe estar creada
		@post Devuelve TRUE o FALSE dependiendo de si la lista esta vacia o llena respectivamente
		@par O (1)
		 */
		bool Vacia	   ();
		
		
		
		/**
		@brief Pone el punto de interes apuntando al principio de la lista 
		@param
		@return
		@pre La lista debe estar creada
		@post El punto de interes queda apuntando al principio de la lista
		@par O(1)
		 */
		void Inicio    ();
		
		
		
		/**
		@brief Avanza el pi en una posición
		@param
		@return
		@pre La lista debe estar creada
		@post
		@par El pi queda apuntando al nodo siguiente
		 */
		void Avanza    ();
		
		
		
		
		/**
		@brief Nos dice si estamos al final de la lista.Esta al final,si api apunta a NULL o si api no tiene nodo sucesor
		@param
		@retval TRUE: si estamos al final de la lista
		@retval FALSE: si no estamos al final de la lista
		@pre La lista debe estar creada
		@post Nos devuelve true o false dependiendo de si ha llegado al final de la lista o no 
		@par O (1)
		 */
		bool Fin	   ();
		
		
		
		/**
		@brief Inserta el nuevo elemento detras del api.Si api es nulo se inserta al principio
		@param DM: parámetro del tipo datos_meses
		@return La lista con un nodo mas (el insertado)
		@pre La lista debe estar creada
		@post La lista queda con un nodo mas
		@par O (1)
		 */
		void Insertar   (datos_meses DM);	
		
		
		
		/**
		@brief se borra el elemento siguiente al api. Si api es NULL se borra el primero
		@param
		@return
		@pre La lista debe estar creada
		@post El nodo siguiente al api queda borrado
		@par O (1)
		 */
		void Borrar	   ();	
		
		
		
		/**
		@brief devuelve el tipo dato donde apunta el pi
		@param DM: parámetro del tipo datos_meses
		@return el parametro DM
		@pre La lista debe estar creada
		@post devuelve la variable DM
		@par O(1)
		 */
		void Consultar (datos_meses &DM);
		
		
		/**
		@brief Elimina la lista,la borra,la destruye
		@param
		@return
		@pre La lista debe contener al menos un nodo
		@post La lista queda eliminada
		@par O(n)
		*/
		void Eliminar();
		
		listapi_datos_meses();

    ~listapi_datos_meses();

};

#endif
