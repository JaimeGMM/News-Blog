/**
@file fecha.h
@brief Declaración de la clase Fecha
@author Profesores de LPI
@date 11 Feb. 2008
@par La clase Fecha almacena y gestiona fechas
@par Utilización: 
  Debe crearse un objeto de la clase fecha. Se puede crear con una fecha inicial correcta, y despues se puede
modificar invocando los metodos de la clase, así como consultar los valores que forman la fecha (día, mes y año).
*/

#ifndef FECHA_H
#define FECHA_H
using namespace std;
#include <iostream>

/**
 * Clase FECHA. Sus atributos son:
 *    - dia
 *    - mes
 *    - año
 */
class fecha
{
	int dia;
	int mes;
	int anio;
	// métodos privados de la clase
    
	/** 
    @brief Devuelve el número de días que tiene un mes, considerando los años bisiestos
    @param m: Número de mes
    @param a: Número de año
    @return Días que tiene un mes 
    @pre 
    @post 
    @par O(1)
    */
	int dias_por_mes (int m, int a);
   
	
	/** 
    @brief Calcula si un año es bisiesto. 
    @param a: Número de año
    @retval TRUE: Si el año es bisiesto
    @retval FALSE: Si el año no es bisiesto
    @pre 
    @post 
    @par O(1)
    @par Un año es bisiesto si es divisible por 4, excepto los principios de siglo(aquellos divisibles por 100)
    que para ser bisiestos tambien deben ser divisibles por 400
    */	
    bool bisiesto (int a);
    
	
	/** 
    @brief Comprueba si una fecha es correcta
    @param d: Día
    @param m: Mes
    @param a: Año
    @return La fecha esta puesta correctamente
    @retval TRUE: Si la fecha esta puesta correctamente
    @retval FALSE: Si la fecha no esta puesta correctamente
    @pre 
    @post 
    @par O(1)
    @par La fecha esta puesta correctamente si el mes esta comprendido entre 0 y 12,y el dia este entre lo valores validos
    ya se 31 para algunos casos,30 para otros y 28 o 29 para febrero en funcion de si el año es bisiesto o no
    */
	bool fecha_correcta(int d, int m, int a);

public:
	 /** 
    @brief Constructor por defecto.
    @param
    @return  
    @pre 
    @post Fecha sin valor inicial
    @par O(1)
    */
   fecha();
    
   
   /** 
    @brief Constructor parametrizado.
    @param d: día
    @param m: mes
    @return  
    @pre Los parámetros día y mes deben ser correctos
    @post Objeto fecha creado e inicializado con día y mes, y año por defecto
    @par O(1)
    */
	fecha (int d,int m);
    
	
	/** 
    @brief Constructor parametrizado.
    @param d: Día
    @param m: Mes
    @param a: Año
    @return  
    @pre Los parámetros día, mes y año deben ser correctos
    @post Objeto fecha creado e inicializado con día, mes y año por defecto
    @par O(1)
    */    
	fecha(int d,int m,int a);
    
	
	/** 
    @brief Constructor de copia
    @param f: Objeto fecha a copiar
    @return  
    @pre El objeto parámetro debe estar creado
    @post Objeto fecha creado e inicializado  con la copia del parámetro
    @par O(1)
    */ 
	fecha (const fecha&F);
    
	
	/** 
    @brief Duplica un objeto fecha
    @param 
    @return Objeto de la clase fecha, duplicado del parámetro 
    @pre El objeto por parámetro debe ser válido
    @post 
    @par O(1)
     */
	void Clonar (const fecha&F);
	
	
	/** 
    @brief Aumenta la fecha actual en 1 día
    @param 
    @return Nuevo valor de fecha 
    @pre No se permite el cambio de mes
    @post Objeto fecha actualizado con el nuevo valor de fecha
    @par O(1)
    */
	void incrementar_fecha();
 
    /** 
    @brief Decrementa la fecha actual en 1 día
    @param 
    @return Nuevo valor de fecha 
    @pre No se permite el cambio de mes
    @post Objeto fecha actualizado con el nuevo valor de fecha
    @par O(1)
    */
	void decrementar_fecha();
    
	
	/** 
    @brief Asigna un nuevo valor de fecha al objeto
    @param d: Día
    @param m: Mes
    @param a: Año
    @return Nuevo valor de fecha 
    @pre Los valores de fecha deben ser correctos
    @post Objeto fecha actualizado con el nuevo valor de fecha
    @par O(1)
    */    
	void asignar_fecha(int d, int m,int a);
    
	
	/** 
    @brief Devuelve el valor de día de una fecha
    @param 
    @return Valor del día de una fecha 
    @pre 
    @post 
    @par O(1)
    */
	int obtener_dia() const;

    /** 
    @brief Devuelve el valor de mes de una fecha
    @param 
    @return Valor del mes de una fecha 
    @pre 
    @post 
    @par O(1)
    */	
    int obtener_mes() const;	
    
	
	/** 
    @brief Devuelve el valor de año de una fecha
    @param 
    @return Valor del año de una fecha 
    @pre 
    @post 
    @par O(1)
    */
	int obtener_anio() const;
	
	
	/**
	@brief Muestra la fecha actual
	@param
	@return
	@pre
	@post
	@par O(1)	
	*/
	void Mostrar_Fecha() const;
};
#endif
