//Implementaciones 
#include "String.h"
#include <stdio.h>
#include <stdlib.h>


int IsEmpty(const char*cadena){
    if(cadena[0]=='\0'){
        return 1;
    }else{
        return 0;
    }
    
}

int GetLength(const char*cadena){
    int i=0;
    int longitud=0;  //cuenta sin '\0'

      while(cadena[i]!='\0'){  // en parte III no se puede usar while 
         longitud++;
         i++;
     }
     return longitud;
}

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

bool contains(const char* cadena, char caracter){
    int length = GetLength(cadena);
    
    for(int i=0; i < length; i++){
        if(cadena[i] == caracter) return true;
    }

    return false;
}

void Concatenate(char *cadena1, char *cadena2, char *concatenacion){

    //Mientras no sea el final de la cadena 1, va a poner todos sus chars en concatenacion
    for(int i = 0; cadena1[i] != '\0'; (i++, concatenacion++)) {
        *concatenacion = cadena1[i];
    }

    //Hace lo mismo con la cadena 2
    for(int j = 0; cadena2[j] != '\0'; (j++, concatenacion++)) {
        *concatenacion = cadena2[j];
    }

    //Agrega el \0 al final de la cadena concatenada
    *concatenacion = '\0';

}

int potencia(int base, int exp) {
    // Caso base: cualquier número elevado a 0 es 1
    if (exp == 0) {
        return 1;
    }
    // Caso recursivo
    else {
        return base * potencia(base, exp - 1);
    }
}

int toInteger (const char* cadena){
    int signo=1;
    int valor=0;
    int i=0;
    int length = GetLength(cadena);
    while (i<length){
        if (cadena[i]=="-")
        {
            signo=-1;
            i++;
        }
        if (cadena[i]>="0" && cadena[i]<="9")
        {
            valor=valor*10 + cadena[i]-"0";
            i++;
        }
    }
    return signo*valor;
}