#include "String.h"
#include <assert.h>

int main(void){
    assert(IsEmpty("")==1);
    assert(IsEmpty("hola")==0);
    assert(GetLength("palabra")==7);
    assert(AreEqual("hola","hola"));
    return 0;
}