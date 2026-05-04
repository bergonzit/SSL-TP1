# Analisis Comparativo C y Phyton

# Naturaleza del String 
La naturaleza del string es la de una secuencia de datos organizada bajo un sistema de codificación. Mientras que su propósito es representar lenguaje humano, su implementación técnica depende de cómo el lenguaje de programación gestione la memoria y la interpretación de los caracteres que la componen

## C: 
En C, el tipo string técnicamente no existe como un tipo de dato primitivo o básico dentro del lenguaje. Para C, una cadena de texto es simplemente un arreglo o una secuencia de caracteres (char) que termina con un carácter especial nulo (\0). En este nivel, el lenguaje trata al "string" como una gestión manual de memoria: el programador debe saber exactamente cuántos bytes ocupa cada letra y asegurarse de no pasarse del límite del arreglo. Aquí, el tipo es un nivel de construcción muy bajo donde el lenguaje solo entiende que hay una serie de bytes contiguos en la memoria RAM que representan símbolos.

## Python: 
en Python el string es un tipo de dato de alto nivel integrado profundamente en el núcleo del intérprete como un objeto inmutable. A diferencia de C, donde el programador debe controlar cada byte, el lenguaje Python asocia al tipo string una lógica de comportamiento completa. Esto significa que el tipo no solo define cómo se guarda el dato, sino que dota al objeto de capacidades nativas para transformarse, buscar contenido o dividirse sin intervención manual en la memoria. Mientras que en C el tipo es una máscara sobre el hardware limitada mayormente al alfabeto ASCII de un solo byte, en Python el tipo string es una entidad lógica universal basada en Unicode, lo que le permite procesar símbolos de cualquier idioma de forma nativa.

# ¿String pertenece a la biblioteca?
## C: 
En C, el string no es una biblioteca ni siquiera un tipo de dato formal "cerrado". Las bibliotecas como <string.h> solo contienen herramientas para manipular esa memoria (copiar, medir, comparar), pero la existencia del string como tal depende de cómo el lenguaje C entiende los punteros y los arreglos de caracteres. Si borras todas las bibliotecas de C, puedes seguir creando strings, porque el concepto de "arreglo de caracteres" está grabado en la estructura misma del lenguaje.

## Python: 
En Python, el string (str) es un tipo de dato primordial que está integrado en el corazón del intérprete. No es un módulo que tengas que importar, como sucede con las bibliotecas de matemáticas o de fechas. Python define el string como un objeto fundamental con reglas propias (como la inmutabilidad). Cuando escribes algo entre comillas, el lenguaje activa automáticamente su sistema de tipos interno para crear ese objeto. La biblioteca estándar de Python ofrece funciones extra, pero la definición de qué es un string y cómo se comporta ante un operador como el + (concatenación) es una regla básica de la gramática del lenguaje, no un accesorio de una biblioteca.

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

# String como argumento y retorno
Basándose en la representación interna y según el lenguaje

## En C:
Para pasar un "string" en C, se deben utilizar punteros a caracteres (con la dirección del primer caracter que queramos) o se puede escribir de igual forma como arreglos ya que se interpretará lo mismo. Si queremos que la función no altere la cadena que le pasemos, se lo debe pasar como argumento constante.
```
void funcion (const char *texto);
void funcion (char texto[]);
```
Si queremos que una función devuelva un "string", al igual que cuando se pasa como argumento, se debe indicar que la función devuelve un puntero a caracter que puede ser constante o no.
```
const char* devolvertexto(){
    return "ABC";}
```
## En Python
Para pasar un tipo de dato string, se puede definir con """...""", ""..." o '...', pasando de esta forma cadenas inmutables, por lo que la funcion que las utiliza necesariamente devolvera otra cadena modificada.
```
def saludo(nombre):                
    print("Hola, " + nombre)
saludo("Mundo") // -> Devolverá en consola "Hola Mundo".

def despedida(nombre):
    return "Adios, " + nombre //otra forma de devolver una cadena
```               
