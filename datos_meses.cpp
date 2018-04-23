#include "datos_meses.h"

datos_meses::datos_meses()
{
	strcpy(num_mes,"");
	strcpy(mes_espaniol,"");
	strcpy(mes_ingles,"");
}



datos_meses::datos_meses (cadena nm,cadena mes_sp,cadena mes_in)
{
	strcpy(num_mes,nm);
	strcpy(mes_espaniol,mes_sp);
	strcpy(mes_ingles,mes_in);
}


datos_meses::datos_meses (const datos_meses &Dm)
{
	cadena c1,c2,c3;
	fecha fec;
	
	Dm.Obtener_num_mes(c1);
	strcpy(num_mes,c1);

	Dm.Obtener_mes_espaniol (c2);
	strcpy(mes_espaniol,c2);
	
	Dm.Obtener_mes_ingles (c3);
	strcpy (mes_ingles,c3);


}



void datos_meses::Clonar_datos_meses (const datos_meses &Dm)
{
	cadena c1,c2,c3;
	fecha fec;
	
	Dm.Obtener_num_mes(c1);
	strcpy(num_mes,c1);

	Dm.Obtener_mes_espaniol (c2);
	strcpy(mes_espaniol,c2);
	
	Dm.Obtener_mes_ingles (c3);
	strcpy (mes_ingles,c3);



}





void datos_meses::Mostrar_num_mes (  )
{
	cout<<"Numero de mes: "<<num_mes<<endl;
}
		
void datos_meses::Mostrar_mes_espaniol ()
{
	cout<<"Mes version español: "<<mes_espaniol<<endl;
}


void datos_meses::Mostrar_mes_ingles ()
{
	cout<<"Mes version ingles: "<<mes_ingles<<endl;
}



void datos_meses:: pedir_num_mes ()
{
	cout<<"Introduce numero de mes (2 cifras)"<<endl;
	cin>>num_mes;
}



void datos_meses:: pedir_mes_espaniol ()
{
	cout<<"Introduce mes en español: "<<endl;
	cin>>mes_espaniol;
}


void datos_meses::pedir_mes_ingles ()
{
	cout<<"Introduce mes en ingles: "<<endl;
	cin>>mes_ingles;
}



void datos_meses:: poner_num_mes (cadena nm)
{
	strcpy(num_mes,nm);
}


void datos_meses::poner_mes_espaniol(cadena mes_esp)
{
	strcpy(mes_espaniol,mes_esp);
}


void datos_meses::poner_mes_ingles (cadena mes_ing)
{
	strcpy(mes_ingles,mes_ing);
}


void datos_meses::Obtener_num_mes(cadena &c1)const
{
	strcpy(c1,num_mes);
}



void datos_meses::Obtener_mes_espaniol(cadena &c1)const
{
	strcpy(c1,mes_espaniol);
}


void datos_meses::Obtener_mes_ingles (cadena &c1)const
{
	strcpy(c1,mes_ingles);
}
		
		
		
datos_meses::~datos_meses()
{
	
}


