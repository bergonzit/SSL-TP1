//Declaracion de funciones (solo guards y prototipos)
#ifndef STRING_H    
#define STRING_H
#include<stdbool.h>
// los strings pueden ser char* o char[]
int IsEmpty(const char * );  // 0 False 1 True  o la hacemos tipo bool y usamos <stdbool.h>
int GetLength(const char*);  
bool AreEqual(const char*cadena1, char*cadena2);
#endif 