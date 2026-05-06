#include "String.h"
#include <stdio.h>

int main(int argc, const char* argv[]){

    if(argc<2) //si no hay dos o más argumentos que comparar, "todos son iguales".
    {
        printf("1\n");
        return 1;
    }

  for(**arg= argv+1; *arg!=NULL ; arg++ )
  {
    if (AreEqual(argv[1],argv[*arg]))
    {}
    else
    {
        printf("0\n");
        return 0;
    }
  }
  printf("1\n");
  return 1;
}