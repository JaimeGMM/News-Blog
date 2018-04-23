#include "datos_per.h"

Datos_per::Datos_per()
{
	strcpy (nombre  ,"");
	strcpy (Ap1     ,"");
	strcpy (Ap2     ,"");
	strcpy (num_tel ,"");
}

Datos_per::Datos_per (const Datos_per &Da)
{
	cadena c1,c2,c3,c4;
	fecha Fe;
	
	Da.Obtener_nombre(c1);
	strcpy(nombre,c1);
	
	Da.Obtener_Ap1(c2);
	strcpy(Ap1,c2);
	
	Da.Obtener_Ap2(c3);
	strcpy(Ap2,c3);
	
	Da.Obtener_num_tel(c4);
	strcpy(num_tel,c4);

	Da.Obtener_Fecha(Fe);	
	f.Clonar(Fe);
	
}

Datos_per::Datos_per (cadena nomb,cadena Ape1,cadena Ape2,cadena numero)
{
	strcpy (nombre,nomb);
	strcpy (Ap1,Ape1);
	strcpy (Ap2,Ape2);
	strcpy (num_tel,numero);	

}


void Datos_per::Clonar_Datos_per(const Datos_per &Da)
{
	cadena c1,c2,c3,c4;
	fecha Fe;
	
	Da.Obtener_nombre(c1);
	strcpy(nombre,c1);
	
	Da.Obtener_Ap1(c2);
	strcpy(Ap1,c2);
	
	Da.Obtener_Ap2(c3);
	strcpy(Ap2,c3);
	
	Da.Obtener_num_tel(c4);
	strcpy(num_tel,c4);

	Da.Obtener_Fecha(Fe);	
	f.Clonar(Fe);

}

void Datos_per:: Mostrar_nombre()
{
	cout<<"nombre del contacto:"<<nombre<<endl;
}



void Datos_per::Mostrar_Ap1 ()
{
	cout<<"Primer apellido del contacto: "<<Ap1<<endl;
}



void Datos_per:: Mostrar_Ap2 ()
{
	cout<<"Segundo apellido del contacto: "<<Ap2<<endl;
}

//se pude usar de esta manera el atributo f??
void Datos_per::Mostrar_fech ()
{
	f.Mostrar_Fecha();
}




void Datos_per::Mostrar_num_tel ()
{
	cout<<"Numero de telefono del contacto"<<num_tel<<endl;
}



void Datos_per::Pedir_nombre()
{
	cout<<"Introduce nombre"<<endl;
	cin>>nombre;
}
		

void Datos_per::Pedir_apellido1 ()
{
	cout<<"Introduce primer apellido"<<endl;
	cin>>Ap1;
}		

void Datos_per::Pedir_apellido2 ()
{
	cout<<"Introduce segundo apellido"<<endl;
	cin>>Ap2;
}		


void Datos_per::Pedir_num_tel ()
{
	cout<<"Introduce el numero de teléfono"<<endl;
	cin>>num_tel;
}



void Datos_per:: Pedir_fecha ()
{
	int d,m,a;
	cout<<"Introduce dia"<<endl;
	cin>>d;
	cout<<"Introduce mes"<<endl;
	cin>>m;
	cout<<"Introduce año"<<endl;
	cin>>a;
	f.asignar_fecha(d,m,a);
}



void Datos_per:: Poner_nombre(cadena nom)
{
	strcpy(nombre,nom);
}



void Datos_per::Poner_Ap1 (cadena Ape1)
{
	strcpy(Ap1,Ape1);
}



void Datos_per:: Poner_Ap2 (cadena Ape2)
{
	strcpy(Ap2,Ape2);
}



void Datos_per:: Poner_fecha (fecha fech)
{
	f.Clonar(fech);
}



void Datos_per:: Poner_num_tel (cadena num)
{
	strcpy(num_tel,num);
}



void Datos_per:: Obtener_nombre (cadena &c2) const 
{
	strcpy(c2,nombre);
}



void  Datos_per::Obtener_Ap1 (cadena &c2) const
{
	strcpy(c2,Ap1);
}




void Datos_per::Obtener_Ap2 (cadena &c2) const
{
	strcpy(c2,Ap2);
}



void Datos_per::Obtener_Fecha(fecha &F)const 
{
	F.Clonar(f);
}


void Datos_per::Obtener_num_tel (cadena &c2) const
{
	strcpy(c2,num_tel);
}



void Datos_per:: Concatenar_dat_per(cadena nombre,cadena Ape1,cadena Ape2,int dia,int mes,int anio,cadena num_telf,cadena complet)
{
	cadena c1,c2,c3;
	strcpy(complet,"");
	strcat(complet,nombre);
	strcat(complet,"#");
	strcat(complet,Ape1);
	strcat(complet,"#");
	strcat(complet,Ape2);
	strcat(complet,"#");
	sprintf(c1,"%d",dia);
	sprintf(c2,"%d",mes);
	sprintf(c3,"%d",anio);
	strcat(complet,c1);
	strcat(complet,"#");
	strcat(complet,c2);
	strcat(complet,"#");
	strcat(complet,c3);
	strcat(complet,"#");
	strcat(complet,num_telf);
}

Datos_per::~Datos_per()
{
}


