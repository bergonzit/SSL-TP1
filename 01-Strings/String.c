//Implementaciones 
#include "String.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * Verifica si una cadena está vacía
 * Precondición: string != NULL
 * Postcondición: retorna 1 si la cadena es "", 0 en caso contrario
 */
int IsEmpty(const char*cadena){
    if(cadena[0]=='\0'){
        return 1;
    }else{
        return 0;
    }
    
}
/**
 * Obtiene la longitud de una cadena
 * Precondición: string != NULL
 * Postcondición: retorna la cantidad de caracteres (sin contar '\0')
 */
int GetLength(const char*cadena){
    int i=0;
    int longitud=0;  //cuenta sin '\0'

      while(cadena[i]!='\0'){  // en parte III no se puede usar while 
         longitud++;
         i++;
     }
     return longitud;
}
/**
 * Compara dos cadenas
 * Precondición: string1 != NULL && string2 != NULL
 * Postcondición: retorna true si tienen el mismo contenido, false si difieren
 */
bool AreEqual(const char*cadena1, char*cadena2){
    int i=0;
    //caso base
    if(cadena1[i]=='\0' && cadena2[i]=='\0'){  //son iguales si estan vacias?
        return true;
   }
    while( cadena1[i]!='\0' && cadena2[i]!='\0' ){
        if(cadena1[i]==cadena2[i]){
           i++;
        }else{
            return false;
        }
        
     }
    if(cadena1[i]=='\0' && cadena2[i]=='\0'){
        return true;
      }
    else {
        return false;
      }
    }



