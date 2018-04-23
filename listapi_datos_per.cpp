#include "listapi_datos_per.h"

ListaPi_datos_per::ListaPi_datos_per()
{
}




void ListaPi_datos_per::Crear    ()
{
	api=NULL;
	L=NULL;
}


bool ListaPi_datos_per:: Vacia	   ()
{
	return(L==NULL);
}



void ListaPi_datos_per::Inicio ()
{
	api=NULL;
}




void ListaPi_datos_per:: Avanza ()
{
	if(api==NULL)
	{
		api=L;
	}
	else
	{
		api=api->suce;
	
	}
}


bool ListaPi_datos_per:: Fin ()
{
	if(L==NULL)
	{
		return(true);
	}
	else
	{
		if(api==NULL)	
		{
			return(false);	
		}
		else
		{
			return(api->suce==NULL);
		}
	}
}


void ListaPi_datos_per::Insertar (Datos_per DP)
{
	lista T;
	T=new (nodo);
	T->info.Clonar_Datos_per(DP);
	if(api==NULL)
	{
		T->suce=L;
		L=T;
	}
	else
	{
		T->suce=api->suce;
		api->suce=T;
	}
	api=T;
}



void ListaPi_datos_per::Borrar  ()
{
	lista Q;
	if(!Vacia())
	{
		if(api==NULL)
		{
			Q=L;
			L=L->suce;
			delete (Q);
		}
		else
		{
			Q=api->suce;
			api->suce=Q->suce;
			delete (Q);
		}	
	}
}


void ListaPi_datos_per::Consultar (Datos_per &DP)
{
	if(!Vacia())
	{
		if(api==NULL)
		{
			DP.Clonar_Datos_per(L->info);
		}
		else
		{
		DP.Clonar_Datos_per(api->suce->info);
		}	
	}
}


void ListaPi_datos_per:: Eliminar ()
{
	lista AUX;
	while(L!=NULL)
	{
		AUX=L;
		L=L->suce;
		delete (AUX);
	}
	api=NULL;
}


ListaPi_datos_per::~ListaPi_datos_per()
{


}


