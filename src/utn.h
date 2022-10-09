
/*
 * UTN.H
 *
 *  Created on: 16 abr. 2022
 *      Author: claudia
 */

#ifndef UTN_H_
#define UTN_H_

int UTN_getInt(int * pNumero, char * mensaje, char * mensajeError, int maximo, int minimo, int reintentos);
/**
 * @brief La funci�n valida que el espacio de memoria del n�mero flotante, del mensaje de error y del mensaje (punteros) est�n vac�os para que no devuelva basura.
 * Tambi�n valida que el n�mero m�ximo sea mayor o igual que el m�nimo.
 *
 * @param pNumero
 * @param mensaje
 * @param mensajeError
 * @param maximo
 * @param minimo
 * @return
 */
float UTN_getFloat(float * pNumero, char * mensaje, char * mensajeError, int maximo, int minimo, int reintentos);
/**
 * @brief La funci�n valida que el espacio de memoria del n�mero entero, del mensaje de error y del mensaje (punteros) est�n vac�os para que no devuelva basura.
 * Tambi�n valida que el n�mero m�ximo sea mayor o igual que el m�nimo.
 *
 * @param pNumero
 * @param mensaje
 * @param mensajeError
 * @param maximo
 * @param minimo
 * @return
 */

#endif /* UTN_H_ */

char utn_getChar(char * pResultado, char * mensaje, char * mensajeError, char maximo, char minimo, int reintentos);


/**
 *
 */
void imprimirArrayInt(int listaDeNumeros[], int tamanioArray);

/**
 * @brief imprime el listado de numeros de un array en el orden que se ingresan
 *
 * @param tamanioArray poner el tama�o del Array, generalmente es un define
 *
 * @return solamente el mensaje impreso
 */


