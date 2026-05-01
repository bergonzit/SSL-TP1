//Declaracion de funciones (solo guards y prototipos)
#ifndef STRING_H    
#define STRING_H
#include<stdbool.h>
// los strings pueden ser char* o char[]
/**
 * Verifica si una cadena está vacía
 * Precondición: string != NULL
 * Postcondición: retorna 1 si la cadena es "", 0 en caso contrario
 */
int IsEmpty(const char * );  // 0 False 1 True  o la hacemos tipo bool y usamos <stdbool.h>
/**
 * Obtiene la longitud de una cadena
 * Precondición: string != NULL
 * Postcondición: retorna la cantidad de caracteres (sin contar '\0')
 */
int GetLength(const char*);
   /**
 * Compara dos cadenas
 * Precondición: string1 != NULL && string2 != NULL
 * Postcondición: retorna true si tienen el mismo contenido, false si difieren
 */
bool AreEqual(const char*cadena1, char*cadena2);

/** 
 Verifica si una cadena de caracteres contiene un caracter particular
 Precondición: cadena != NULL
 PostCondición: devuelve true si encuentra coincidencia, sino retorna false
*/
bool contains(const char* cadena, char caracter);

/**
 * Concatena dos cadenas
 * Precondición: cadena1 y cadena2 sean cadenas validas que terminen con '\0' && concatenacion tiene espacio suficiente
 * Postcondición: concatenacion contiene la concatenación de cadena1 y cadena2, terminada con '\0'
 */
void Concatenate(char *cadena1, char *cadena2, char *concatenacion);

#endif 
