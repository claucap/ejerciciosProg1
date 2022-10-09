
#include "utn.h"
#include <stdio.h>
#include <stdlib.h>

int UTN_getInt(int * pNumero, char * mensaje, char * mensajeError, int maximo, int minimo, int reintentos){

	int auxiliarNumero;
	int retorno;

	retorno = -1;

	if(pNumero != NULL && mensajeError != NULL && maximo >= minimo){
			do{
				printf("%s", mensaje);
				scanf("%d", &auxiliarNumero);

				if(auxiliarNumero >= minimo && auxiliarNumero <= maximo){
					*pNumero = auxiliarNumero;
					retorno = 0;
					break;
				}else{
					printf("%s", mensajeError);
					reintentos --;
				}
			}while(reintentos >= 0);
	}
	return retorno;
}

float UTN_getFloat(float * pNumero, char * mensaje, char * mensajeError, int maximo, int minimo, int reintentos){

	float auxiliarNumero;
	int retorno;

	retorno = -1;

	if(pNumero != NULL && mensajeError != NULL && maximo >= minimo){
		do{
			printf("%s", mensaje);
			scanf("%f", &auxiliarNumero);

			if(auxiliarNumero >= minimo && auxiliarNumero <= maximo){
				*pNumero = auxiliarNumero;
				retorno = 0;
				break;
			}else{
				printf("%s", mensajeError);
				reintentos --;
			}
		}while(reintentos >= 0);

	}
	return retorno;
}

char utn_getChar(char * pResultado, char * mensaje, char * mensajeError, char maximo, char minimo, int reintentos){

	char bufferChar;
	int retorno;

	retorno = -1;

	if(pResultado != NULL && mensajeError != NULL && maximo >= minimo && reintentos >= 0){
		do{
			printf("%s", mensaje);
			fflush(stdin);
			scanf("%c", &bufferChar);

			if(bufferChar >= minimo && bufferChar <= maximo){
				*pResultado = bufferChar;
				retorno = 0;
				break;
			}else{
				printf("%s", mensajeError);
				reintentos --;
			}

		}while(reintentos >= 0);

	}
	return retorno;
}

void imprimirArrayInt(int listaDeNumeros[], int tamanioArray)
{
	int i;
	if(listaDeNumeros != NULL && tamanioArray > 0){
		for(i=0; i<tamanioArray; i++)
			{
				printf("%d ",listaDeNumeros[i]);
			}
	}
	return ;
}
