#include "listapi_datos_meses.h"



void listapi_datos_meses::  Crear  ()
{
	api=NULL;
	L=NULL;
}	




bool listapi_datos_meses:: Vacia	()
{
	return(L==NULL);
}


void listapi_datos_meses:: Inicio    ()
{
	api=NULL;
}



void listapi_datos_meses::Avanza  ()
{
	if(api==NULL)
		
		api=L;
	else
				
		api=api->suce;		
}



bool listapi_datos_meses:: Fin	()
{
	if(L==NULL)
	{
		return(true);
	}
	else
	{
		if(api==NULL)
		{
			return (false);
		}	
		else
		{
			return(api->suce==NULL);
		}
	}
}



void listapi_datos_meses:: Insertar   (datos_meses DM)
{
	listaM J;
	J=new (nodoM);
	J->info.Clonar_datos_meses(DM);
	if(api==NULL)
	{
		J->suce=L;
		L=J;
	}
	else
	{
		J->suce=api->suce;
		api->suce=J;
	}
	api=J;
}



void listapi_datos_meses:: Borrar  ()
{
	listaM K;
	if(!Vacia())
	{
		if(api==NULL)
		{
			K=L;
			L=L->suce;
			delete (K);
		}
		else
		{
			K=api->suce;
			api->suce=K->suce;
			delete (K);
		}
	}
}	




void listapi_datos_meses:: Consultar (datos_meses &DM)
{
	if(!Vacia())
	{
		if(api==NULL)
		{
			DM.Clonar_datos_meses(L->info);
		}
		else
		{
			DM.Clonar_datos_meses(api->suce->info);
		}
	}
}



void listapi_datos_meses:: Eliminar()
{
	listaM AUX;
	while(L!=NULL)
	{
		AUX=L;
		L=L->suce;
		delete (AUX);
	}
	api=NULL;
}

listapi_datos_meses::listapi_datos_meses()
{
}


listapi_datos_meses::~listapi_datos_meses()
{
}


