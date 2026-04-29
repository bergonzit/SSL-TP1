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
     while(cadena[i]!='\0'){
         longitud++;
         i++;
     }
     return longitud;
}
