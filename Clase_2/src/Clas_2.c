/*
 ============================================================================
 Name        : Clas_2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*Solicitar al usuario que ingrese una serie de números
 * la cual finaliza al introducir el 999
 * (el 999 no debe ser tenido en cuenta para dicho cálculo).
 * Una vez finalizado el ingreso de números el programa deberá mostrar el promedio
 * de dichos números por pantalla.
 */
#include <stdio_ext.h>
#include <stdlib.h>

int main(void)
{
	int acumulador=0;
	int numero;
	int contador=0;
	float promedio;

	while(1)//se pone la condicion verdadera true=1 y la condicion de salida tiene que estar dentro del mismo
		    //para que termine el bucle.
	{
		printf("\nIngrese un numero: ");
		scanf("%d",&numero);
		if(numero!=999)
		{
			acumulador = acumulador + numero;
			contador++;
		}
			else
			{

				break;// bucle de salida, se termina de interar.
			}
	}
	promedio=(float)acumulador/contador;
	printf("\nEl promedio es %.2f",promedio);

	return EXIT_SUCCESS;
}
