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



