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
    
    return 0;
}