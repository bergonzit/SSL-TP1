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