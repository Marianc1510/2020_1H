/*
 ============================================================================
 Name        : Clase_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio_ext.h>
#include <stdlib.h>
/*
 * PEDIR 5 NUMEROS Y MOSTRAR PROMEDIO
 */
int main(void) {
	/*int numero1;
	int numero2;
	int resultado;
	int respuestaScanf;

	printf("Ingrese Numero 1:");
	__fpurge(stdin);
	respuestaScanf = scanf("%d", &numero1);
	printf("\nRespuesta scanf es %d",respuestaScanf);
	while (respuestaScanf==0)
	{
		printf("\nNUmero 1 incorrecto, ingrese nuevamente:");
		__fpurge(stdin);
		respuestaScanf= scanf("%d",&numero1);
	}
	printf("\nIngrese Numero 2:");
	__fpurge(stdin);
	respuestaScanf = scanf("%d", &numero2);
	printf("\nRespuesta scanf es %d",respuestaScanf);
	while (respuestaScanf==0)
		{
			printf("\nNUmero 2 incorrecto, ingrese nuevamente:");
			__fpurge(stdin);
			respuestaScanf= scanf("%d",&numero2);
		}

	resultado = numero1 + numero2;
	printf("\nEl resultado es %d", resultado);
*/
	int i;
	int numero;
	int acumulado=0;
	float promedio;
	int respuestaScan;

	for(i=0; i<5; i++){
		printf("Ingrese un numero:");
		respuestaScan = scanf("%d", &numero);
		while(respuestaScan==0){
			printf("Error, ingrese nuevamente:");
			__fpurge(stdin);
			respuestaScan =scanf("%d", &numero);
		}
		acumulado += numero;
	}
	promedio= (float)acumulado / i; //casteo la variable
	printf("\nEl promedio es: %2.f", promedio);

	return EXIT_SUCCESS;
}
