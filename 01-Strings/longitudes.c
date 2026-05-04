#include <stdio.h>
#include "String.h"

int main(int cant, char** array){
  for(char** p = array + 1; *p != NULL; p++){
    printf("%d\n", GetLength(*p));
  }

  return 0;
}