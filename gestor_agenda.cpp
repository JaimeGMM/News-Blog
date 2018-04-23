#include "gestor_agenda.h"

Gestor_agenda::Gestor_agenda()
{
}



void Gestor_agenda:: Volcar_de_fichero_a_lista_datos ()
{
	Datos_per DP;
	fecha fe;
	int d,m,a;
	cadena c1,c2,c3,c4,c5,c6,c7;
	ifstream f;	
	LD.Crear 		(  );
	f.open("datos_per.txt");
	if(f)
	{
		while (!f.eof())
		{
			f.getline(c1,25,'#');
			if (f) {
			f.getline(c2,25,'#');
			if (f) {
			f.getline(c3,25,'#');
			if (f) {
			f.getline(c4,25,'#');
			if (f) {
			f.getline(c5,15,'#');
			if (f) {
			f.getline(c6,15,'#');
			if (f) {
			f.getline(c7,15,'\n');
			if (f) {
			d=atoi(c4);
			m=atoi(c5);
			a=atoi(c6);
			fe.asignar_fecha(d,m,a);
			DP.Poner_nombre (c1);
			DP.Poner_Ap1    (c2);
			DP.Poner_Ap2    (c3);
			DP.Poner_fecha  (fe);
			DP.Poner_num_tel(c7);
			LD.Insertar     (DP);
// 			LD.Avanza       (  );
			}}}}}}}
		}
	
	f.close();
	}
	else
	{
		cout<<"ERROR: imposible abrir archivo"<<endl;
	}
}



void Gestor_agenda:: Volcar_de_fichero_a_lista_meses ()
{
	datos_meses DM;
	ifstream f;
	cadena c1,c2,c3;
	f.open("meses.txt");
	if(f)
	{
		while(!f.eof())
		{
			f.getline(c1,25,'#');
			f.getline(c2,25,'#');
			f.getline(c3,25,'\n');
			DM.poner_num_mes (c1);
			DM.poner_mes_espaniol(c2);
			DM.poner_mes_ingles (c3);
			LM.Crear ();
			LM.Inicio();
			LM.Insertar (DM);
			LM.Avanza	();
		}	
	
	f.close();
	}
	else
	{
		cout<<"ERROR: Imposible abrir archivo"<<endl;
	}
}




void Gestor_agenda:: Volcar_de_lista_datos_a_fichero ()
{
	int d,m,a;
	cadena c1,c2,c3,c4,completa;
	fecha fe;
	Datos_per DP; 
	ofstream OF;
	OF.open("datos_per.txt");
	if(OF)
	{
		while(!LD.Fin())
		{
			LD.Inicio();
			LD.Consultar (DP);
			DP.Obtener_nombre  (c1);
			DP.Obtener_Ap1	   (c2);
			DP.Obtener_Ap2     (c3);
			DP.Obtener_Fecha   (fe);
			DP.Obtener_num_tel (c4);
			d=fe.obtener_dia   (  );
			m=fe.obtener_mes   (  );
			a=fe.obtener_anio  (  );
			DP.Concatenar_dat_per(c1,c2,c3,d,m,a,c4,completa);
			OF<<completa;
		}
	OF.close();
	
	}
	else
	{
		cout<<"ERROR:Imposible abrir archivo"<<endl;
	}
}




void Gestor_agenda:: Volcar_de_lista_meses_a_fichero ()
{
	cadena c1,c2,c3,completa;
	datos_meses DM;
	ofstream OF;
	OF.open("meses.txt");
	if(OF)
	{
		while(!LM.Fin())
		{
			LM.Inicio();
			LM.Consultar (DM);
			DM.Obtener_num_mes(c1);
			DM.Obtener_mes_espaniol(c2);
			DM.Obtener_mes_ingles(c3);
			OF<<c1;
			OF<<'#';
			OF<<c2;
			OF<<'#';
			OF<<c3;
		}
	OF.close();
	}
	else
	{
		cout<<"ERROR: Imposible abrir archivo"<<endl;
	}
}



	
void Gestor_agenda::Insertar_en_Orden_datos_m(datos_meses M)
{
	int x,y;
	cadena c1,c2;
	bool enc=false;
	datos_meses dm;
	LM.Inicio();
	while(!LM.Fin() && !enc)
		{
			M.Obtener_num_mes(c1);
			x=atoi(c1);
			LM.Consultar(dm);
			dm.Obtener_num_mes(c2);
			y=atoi(c2);
			if(x > y)
				{
					LM.Insertar(M);
					enc=true;
				}
			else
				{
					LM.Avanza();
				}
		}
}


;
void Gestor_agenda:: Pedir_contacto	 (Datos_per Da)
{
	Da.Pedir_nombre		();
	Da.Pedir_apellido1  ();
	Da.Pedir_apellido2  ();
	Da.Pedir_fecha		();
	Da.Pedir_num_tel 	();
}


void Gestor_agenda:: Insertar_final_listaD(Datos_per Da)
{
	LD.Inicio();
	while(!LD.Fin())
	{	
		LD.Avanza();
	} 
	LD.Insertar(Da);
}



void Gestor_agenda:: Borrar_de_lista_datos   (cadena telef)
{
	if(!LD.Vacia())
	{
		LD.Inicio();
		bool enc=false;
		Datos_per Da;
		cadena c1,c2;
		while(!LD.Fin() && !enc)
		{
			LD.Consultar 	   (Da);
			Da.Obtener_num_tel (c1);
			if(strcmp(c1,telef)==0)
			{
				LD.Borrar ();
				enc=true;
			}
			else
			{
				LD.Avanza ();
			}
		}
	}
	else
	{
		cout<<"ERROR: Imposible borar contacto; la lista esta vacia"<<endl;
	}

}



void Gestor_agenda:: listado_personas_cumpleanios 		(cadena mes)
{
	if(!LD.Vacia())
	{
		cout<<""<<endl;
		cout<<"Personas que cumplen los años en el mes de: "<<mes<<endl;
		int d,m,cont=0;
		Datos_per Da;
		fecha fe;
		cadena c1,c2,c3,c4,c5,c6,cM;
		LD.Inicio();
		cout<<"==============================="<<endl;
		while(!LD.Fin())
		{
			LD.Consultar (Da);
			Da.Obtener_Fecha(fe);
			m=fe.obtener_mes();
			Mostrar_mes (m,cM);
			if(strcmp(cM,mes)==0)		
			{
				cont++;
				Da.Obtener_nombre(c2);
				Da.Obtener_Ap1   (c3);
				Da.Obtener_Ap2	 (c4);
				d=fe.obtener_dia (  );
				sprintf(c5,"%d",d);
				Da.Obtener_num_tel(c6);
				cout<<""<<endl;
				cout<<"  "<<c2<<"  "<<c3<<"  "<<c4<<"      dia: "<<c5<<"        tlf: "<<c6<<endl; 
				LD.Avanza();
			}
			else
			{
				LD.Avanza();
			}
		}
		if(cont==0)
		{
			cout<<""<<endl;
			cout<<"No existe ninguna persona que cumpla años en el mes de "<<mes<<endl;
			cout<<""<<endl;
		}	
		cout<<"======================================="<<endl;
		cout<<""<<endl;
	}
	else
	{
		cout<<"ERROR: Imposible mostrar,la lista de contactos esta vacia"<<endl;
	}

}

void Gestor_agenda::Obtener_edad(fecha fe,int &ed)
{
	int d,m,a;
	d=fe.obtener_dia();
	m=fe.obtener_mes();
	a=fe.obtener_anio();
	
	/*Ahora vendria la funcion q con dia mes y anio y fecha actual me calcula la edad*/
	/*y la edad queda guardada en el parametro ed*/
}




void Gestor_agenda:: Mostrar_mes (int mes,cadena &me)
{
  
	switch (mes)
	{
		case 1:strcpy(me,"Enero");
		break;
			
		case 2:strcpy(me,"Febrero");
		break;
			
		case 3:strcpy(me,"Marzo");
		break;
				  
		case 4:strcpy(me,"Abril");
		break;	  
		
		case 5:strcpy(me,"Mayo");
		break;
				  
		case 6:strcpy(me,"Junio");
		break;
				  
		case 7:strcpy(me,"Julio");
		break;
			
		case 8:strcpy(me,"Agosto");
		break;
				  
		case 9:strcpy(me,"Septiembre");
		break;
				  
		case 10:strcpy(me,"Octubre");
		break;
				   
		case 11:strcpy(me,"Noviembre");
		break;
				  
		case 12:strcpy(me,"Diciembre");
		break;
	}

}


void Gestor_agenda:: Mostrar_mes_ingles (int mes,cadena &me)
{
  
	switch (mes)
	{
		case 1:strcpy(me,"January");
		break;
			
		case 2:strcpy(me,"February");
		break;
			
		case 3:strcpy(me,"March");
		break;
				  
		case 4:strcpy(me,"April");
		break;	  
		
		case 5:strcpy(me,"May");
		break;
				  
		case 6:strcpy(me,"June");
		break;
				  
		case 7:strcpy(me,"July");
		break;
			
		case 8:strcpy(me,"August");
		break;
				  
		case 9:strcpy(me,"September");
		break;
				  
		case 10:strcpy(me,"October");
		break;
				   
		case 11:strcpy(me,"November");
		break;
				  
		case 12:strcpy(me,"December");
		break;
	}

}



void Gestor_agenda::Mostrar_contactos_en_espaniol		()
{
	if(!LD.Vacia())
	{
		cout<<"   Versión española   "<<endl;
		cadena c1,c2,c3,c4,c5,c6,cN;
		Datos_per Dp;
		fecha fe;
		int d,m,a;
		LD.Inicio();
		while(!LD.Fin())
		{
			LD.Consultar(Dp);
			Dp.Obtener_nombre (c1);
			Dp.Obtener_Ap1    (c2);
			Dp.Obtener_Ap2    (c3);
			Dp.Obtener_Fecha  (fe);
			d=fe.obtener_dia  (  );
			m=fe.obtener_mes  (  );
			a=fe.obtener_anio (  );
			Dp.Obtener_num_tel(c4);
			/*transforma el mes que es un entero en una cadena con el mes en nombre que es una cadena */
			Mostrar_mes (m,c5);
			/*Obtener_edad(cN);*/
			/*Falta funcion que me devuelve en forma de entero la edad del contacto,la q esta arriba*/
			cout<<"                                    "<<endl;
			cout<<"   Nombre:  "<<c1<<"  "<<c2<<"  "<<c3<<endl;
			cout<<"                                    "<<endl;
			cout<<"   Cumpleaños:  "<<d<<" de "<<c5<<endl;
			cout<<"                                    "<<endl;
			cout<<"   Edad:  "<<cN<<" años"<<endl;
			cout<<"                                     "<<endl;
			cout<<"   Telefono:  "<<c4<<endl;
			cout<<"====================================="<<endl;
			LD.Avanza();
		}
	}
	else
	{
		cout<<"ERROR:Imposble mostrar contactos en español,la lista esra vacia"<<endl;
	}




}




void Gestor_agenda::Mostrar_contactos_en_ingles	   ()
{
	if(!LD.Vacia())
	{
		cout<<"   Versión inglesa   "<<endl;
		cadena c1,c2,c3,c4,c5,c6,cN;
		Datos_per Da;
		fecha fe;
		int d,m,a;
		LD.Inicio();
		while(!LD.Fin())
		{
			LD.Consultar(Da);
			Da.Obtener_nombre (c1);
			Da.Obtener_Ap1    (c2);
			Da.Obtener_Ap2    (c3);
			Da.Obtener_Fecha  (fe);
			d=fe.obtener_dia  (  );
			m=fe.obtener_mes  (  );
			a=fe.obtener_anio (  );
			Da.Obtener_num_tel(c4);
			/*transforma el mes que es un entero en una cadena con el mes en nombre que es una cadena */
			Mostrar_mes_ingles (m,c5);
			/*Obtener_edad(fe,cN);*/
			/*Falta funcion que me devuelve en forma de entero la edad del contacto,la q esta arriba*/
			cout<<"                                  "<<endl;
			cout<<"   Name:  "<<c2<<"  "<<c3<<", "<<c1<<endl;
			cout<<"                                  "<<endl;
			cout<<"   Birthday:  "<<c5<<", "<<d<<endl;
			cout<<"                                  "<<endl;
			cout<<"   Age: "<<cN<<endl;
			cout<<"                                  "<<endl;
			cout<<"   Tlf:  "<<c4<<endl;
			cout<<"=================================="<<endl;
			LD.Avanza();
		}
	}
	else
	{
		cout<<"ERROR:Imposble mostrar contactos en español,la lista esra vacia"<<endl;
	}




}





Gestor_agenda::~Gestor_agenda()
{
}


