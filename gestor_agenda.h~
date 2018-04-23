#ifndef GESTOR_AGENDA_H
#define GESTOR_AGENDA_H
#include "listapi_datos_meses.h"
#include "listapi_datos_per.h"
#include <fstream>
/**
	@author Jaime Gamero Maya <jaime@localhost.localdomain>
*/
class Gestor_agenda{

	listapi_datos_meses LM;
	ListaPi_datos_per	LD;
	
	
	public:
    
		void 	Volcar_de_fichero_a_lista_datos 	();
		void 	Volcar_de_fichero_a_lista_meses 	();
		void	Volcar_de_lista_datos_a_fichero 	();
		void 	Volcar_de_lista_meses_a_fichero 	();
		void   	Insertar_en_Orden_datos_m			(datos_meses M);
		void    Pedir_contacto						(Datos_per Da);
		void    Insertar_final_listaD               (Datos_per Da);
		void 	Borrar_de_lista_datos				(cadena telef);
		void 	listado_personas_cumpleanios 		(cadena mes);
		void 	Obtener_edad						(fecha fe,int &ed);
		void    Mostrar_mes                         (int mes,cadena &me);
		void    Mostrar_mes_ingles                  (int mes,cadena &me);
		void 	Mostrar_contactos_en_espaniol		();
		void 	Mostrar_contactos_en_ingles			();	
			
		Gestor_agenda();

       ~Gestor_agenda();

};

#endif
