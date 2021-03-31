#include "classSample.h"
#include <iostream>

enum class TesteEnumClangFormat : uint8_t
{
    VAR1                 = 0,
    VAR2                 = 1,
    VVVVVVVVAAAAARRRRRR3 = 2,
    VVVAAARRR            = 3

};

int main()
{
    std::cout << "teste com cmake" << std::endl;

    ClassSample *classSample = new ClassSample();

    classSample->mostrarNomeObjeto();

    delete classSample;

    return 0;
}
