/*
 ============================================================================
 Name        : utnGetIntConArray.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn_calculos.h"
#include "utn.h"

#define EDADESSIZE 5 //nunca poner una variable.

int main(void) {
	setbuf(stdout, NULL);


	int edad;
		int edades[EDADESSIZE];//nunca poner una variable.
		int i;
		int validacionRetorno;

		// recorro para cargar en forma secuencial
		for(i=0; i<EDADESSIZE; i++){
			validacionRetorno = UTN_getInt(&edad, "Ingrese una edad ", "El numero no corresponde a una edad ",101,1,2);
			if(validacionRetorno == 0){
				edades[i] = edad;
			}
			else{
			printf("error");
			}
			}

	imprimirArrayInt(edades,EDADESSIZE);
	//for(i = 0; i<EDADESSIZE; i++){
		//printf("%d ",edades[i]);
	//}

	return EXIT_SUCCESS;
}

