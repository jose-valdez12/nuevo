// integrantes : cristian aldana : 0909-21-697, jose octavio valdez : 0909-21-8874


#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std; // creamos bloque para iniciar 


int main (){
	

	int c,ca,h; // definimos las variables que se utilizaran 
	cout<<"acontinuacion uste ingresara el cateto correspondiente , no ingresar numeros negativos=\n";// nos pide ingresar un numero de un ateto 
	
	cout<<"cateto opuesto =";
	cin>>c;// nos lee el numero del cateto 
	
	cout<<"cateto adyacente =";
	cin>>ca;
	
	h=sqrt(pow(ca,2)+pow(c,2));// se registra la operacion con la cual se obtendar el valor de la hipotenusa 
	
	cout<<"hipotenusa = "<<h<<endl;// nos mestra lo que seria el valor de la hipotenusa 
	
	return 0 ;
}