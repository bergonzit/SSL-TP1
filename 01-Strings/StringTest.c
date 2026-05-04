#include "String.h"
#include <assert.h>

int main(void){
    char buffer[100];

    assert(IsEmpty("")==1);
    assert(IsEmpty("hola")==0);
    assert(GetLength("palabra")==7);
    assert(AreEqual("hola","hola"));
    assert(AreEqual("",""));
    assert(contains("Paralelo", 'e'));
    assert(!contains("Paralelo", 's'));

    Concatenate("ab", "cd", buffer);
    assert(AreEqual(buffer, "abcd"));
    assert(potencia(5, 0) == 1);
    assert(potencia(2, 3) == 8);
    assert(potencia(-2, 2) == 4);
    assert(toInteger("123")==123);
    assert(toInteger("-456")==-456);
    return 0;
}