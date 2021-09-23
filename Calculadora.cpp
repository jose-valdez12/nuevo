#include "iostream"  // Biblioteca estandar que permite entradas y salidas 
#include "string"	// * TEXTO */
//jose octavio 0909-21-8874 y christian aldana 0909-21-697

using namespace std;

int main()

{
	
	float Dig1, Dig2;
	int opc;


cout << "Por favor ingrese el primer valor: " << "\n"; //   ->  \n = salto de linea  
cout << "Bienvenido a la calculadora" << "\n";  
cout << "A continuacion se le pedira que escoga una funcion para poder ejecutar el programa" << "\n"; //   ->  \n = salto de linea 


	printf ("*******************************\n");
	printf ("         Calculadora		  	\n");
	printf ("        1)- Suma. 		  		\n");
	printf ("        2)- Resta.		  		\n");
	printf ("        3)- Multiplicacion.	\n");
	printf ("        4)- Division.			\n");
	printf ("        5)- Salir              \n");
	printf ("*******************************\n");
	
	printf ( "Porfavor eliga una operacion de la calculadora \n");
	cin >> ( opc); //Leer variable
	
	switch (opc) //Switch (seleccionar operacion de la calculadora)
	{

	case 1: 
	
		printf ("Ingrese el primer digito:");
		cin >> (Dig1);
		printf("Ingrese el segundo digito: ");
		cin >> (Dig2);
	
 cout << Dig1 << " + " << Dig2 << " = " << Dig1 + Dig2;    // se muestran los valores y se realiza la operación muestrando en pantalla
	break;

		case 2:
		
		printf ("Ingrese el primer digito:");
		cin >> (Dig2);
		printf("Ingrese el segundo digito: ");
		cin >> (Dig2);

 cout << Dig1 << " - " << Dig2 << " = " << Dig1 - Dig2;    // se muestran los valores y se realiza la operación muestrando en pantalla
break;

		case 3:
		
	
		printf ("Ingrese el primer digito:");
		cin >> (Dig1);
		printf("Ingrese el segundo digito: ");
		cin >> (Dig2);

 cout << Dig1 << " * " << Dig2 << " = " << Dig1 * Dig2;    // se muestran los valores y se realiza la operación muestrando en pantalla
break;
	
		case 4:
		
			
		printf ("Ingrese el primer digito:");
		cin >> (Dig1);
		printf("Ingrese el segundo digito: ");
		cin >> (Dig2);
		

 cout << Dig1 << " / " << Dig2 << " = " << Dig1 / Dig2;    // se muestran los valores y se realiza la operación muestrando en pantalla
break;



		case 5:
		printf ("Usted salio de la calculadora!");

		break;
		


	default:
		
		printf ("No ha seleccionado una opcion correcta");
		break;

	}
	printf ("\n\n"); //Saltos de linea.
	

}




