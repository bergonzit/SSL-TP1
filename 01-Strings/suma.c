#include "String.h"
#include <stdio.h>


int transformarNumero(const char *cadena) {
    int signo = 1;
    if (*cadena == '+') { signo =  1; cadena++; }
    else if (*cadena == '-') { signo = -1; cadena++; }
    return signo * ToInteger(cadena);
}

int EnterosConSignos(const char *cadena) {
    if (*cadena == '+' || *cadena == '-') { cadena++; }
    if (*cadena == '\0') { return 0; }
    return AreDecimalDigits(cadena);
}

int main(int argc, char *argv[]) {

    int resultado = 0;
   
    //No se pueden usar variables indices para recorrer argv, por lo que se usa un puntero a cadenas
  //Uso puntero a las cadenas de argv (empieza en 1 porque el 0 es el nombre del programa)
   for(char **arg = argv + 1; *arg != 0 ; arg++) {
     //Verifica que cada argumento es un entero válido
      if(EnterosConSignos(*arg)){

    //Si es un entero válido, lo convierte a entero y lo suma al resultado
            resultado += transformarNumero(*arg);
      }
   }
   printf("%d\n", resultado);
   return 0;

}