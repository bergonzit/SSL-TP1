# Analisis Comparativo C y Phyton


# Alocación de memoria
La Alocación de memoria es el proceso en el cual se reserva espacio de memoria para almacenar datos, su gestion varia dependiendo del lenguaje.

## C:
- La responsabilidad es del programador.
- Se guarda en memoria: 
  - Stack
  - Heap.
- La liberación de memoria Heap se hace manualmente con el metodo free(ptr).
- Los Riesgos de no realizar la liberación:
  - Pueden ser fugas de memoria.
  - Punteros "colgando".	

## Python: 
- La responsabilidad es del intérprete de Python.
- Se guarda en memoria Heap.
- La liberación de la memoria se hace Automática mediante:
 - Un conteo de referencia.
 - El Garbage Collector.
- Tiene riesgo un mayor consumo de recursos produciendo overhead.

## Memoria Stack 

Es una región de memoria que utiliza el principio LIFO(Last in, First out), en la misma se reserva un Frame (espacio en esta pila de tamaño variable), que mientras se use este Frame permanece ocupado y cuando se librere este frame se elimina dejando el espacio libre, se genera de forma automatica en tiempo de ejecución (runtime)

- En C Este espacio se aloca automaticamente para:
  - Llamadas a funciones 
  - Parámetros 
  - Variables locales.

- En Python Este espacio se usa internamente y de forma menos visible para alocar: 
  - Llamadas a funciones
  - Referencias a parámetros
  - Variables que se encuentran en la memoria Heap. 

## Memoria Heap

Es una región de memoria utilizando un algoritmo de gestión de memoria que hace que sea mas dinamico que la stack, pero siendo mas lento, el manejo se puede hacer en cualquier momento. 

- En C este espacio se aloca utilizando el metodo llamado:
```
malloc(size_t tamaño);
``` 
se encarga de almacenar el espacio a momento de runtime, recibiendo el tamaño que se quiere guardar devolviendo un puntero a ese espacio de memoria y para liberar ese espacio se utiliza el metodo:
```
free(ptr);
```
- En Python este espacio se utiliza en casi todo momento de forma automatica, todo objeto vive en la heap y las variables son referencias a esos objetos.

# Soporte ASCII, Unicode, UTF-8

## C:
C brinda naturalmente y de forma predeterminada soporte para ASCII,
 debido a que un char es un byte (8 bits) con el que se puede representar 
 el número que le corresponde a cada letra en ASCII. 
 En cambio, para Unicode habría que utilizar bibliotecas externas, 
 ya que no hay forma de representar caracteres especiales con un byte 
 (debido a la cantidad limitada de números que se pueden representar con 8 bits).
Para UTF-8, si bien se puede almacenar en un char[], 
C lo trata como una secuencia de bytes crudos 
sin entender que algunos caracteres ocupan más de uno

## Python:
En cuanto a Python, los Strings en este lenguaje
utilizan directamente los Code Points de Unicode, por lo que tambien brindan soporta
para ASCII (siendo este un subconjunto de Unicode)
En cuanto a UTF-8, Python brinda soporte nativamente, ya que se usa
str(Unicode) para manejar texto dentro del programa, pero 
permite convertir cualquier string a UTF-8 y viceversa de forma simple 
con .encode('utf-8') y .decode('utf-8'), sin necesidad de bibliotecas externas.

# Representación interna en C
- Estructura básica  
Un string en C es un arreglo contiguo de bytes (char[]) o un puntero a char que contiene caracteres y termina con un carácter nulo '\0' que marca el final.

- Metadatos y longitud  
No existen metadatos asociados al bloque: la longitud no se almacena explícitamente. Para obtenerla se recorre la memoria hasta encontrar '\0' (por ejemplo, strlen).

char saludo[] = {'H','o','l','a','\0'}; // arreglo con terminador nulo


# Representación interna en Python
- Estructura básica  
Un string en Python es un objeto de la clase str. Internamente es una estructura que contiene al menos un puntero al buffer de caracteres y la longitud del string.

- Metadatos y longitud  
La longitud se almacena explícitamente en el objeto; len(s) es O(1). No hace falta recorrer el contenido para conocer su tamaño.

saludo = "Hola"
- Internamente: objeto str con campos: longitud = 4, buffer = ['H','o','l','a']
