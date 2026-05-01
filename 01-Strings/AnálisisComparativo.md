
IsEmpty: Σ* → Boolean / IsEmpty(s) = { true    si s = ε
                                      { false   si s ≠ ε
GetLength: Σ* → ℕ / GetLength(s) = { |s|  si s ≠ ε   //cardinalidad del string 
                                    { 0    si s = ε
AreEqual Σ* x Σ* → Boolean / AreEqual(s1,s2) = { true si s1=s2 
                                           { false si s1≠s2