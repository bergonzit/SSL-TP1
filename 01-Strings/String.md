Especificación de funciones:

IsEmpty: Σ* → Boolean / IsEmpty(s) = { true    si s = ε
                                      { false   si s ≠ ε
GetLength: Σ* → ℕ / GetLength(s) = { |s|  si s ≠ ε   //cardinalidad del string 
                                    { 0    si s = ε
AreEqual Σ* x Σ* → Boolean / AreEqual(s1,s2) = { true si s1=s2 
                                           { false si s1≠s2

contains: Σ* x Σ -> boolean
contains(s, c) = true <=> ∃ i (0<= i < |s| ∧ s[i] = c)

Concatenate : Σ* × Σ* → Σ* / Concatenate(cadena1, cadena2) = { cadena2 si cadena1 = ε
                                                             { c1 · Concatenate(s1, cadena2) si cadena1 = c1 · s1

Power : pow: R x N -> R 
        pow(a, n) = { 1, si n = 0
                    { a * pow(a, n-1), si n > 0

toInteger : Σ* -> Z / toInteger(s)={ 0 si s = ε
                                   { signo* Σ(suma i=0 hasta k) s[i]*(10^i) // donde s=s[k],s[k-1] ... s[1],s[0]