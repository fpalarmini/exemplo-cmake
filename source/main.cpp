#include <iostream>

#include "classSample.h"

int main()
{
    std::cout << "teste com cmake" << std::endl;

    ClassSample *classSample = new ClassSample();

    classSample->mostrarNomeObjeto();

    delete classSample;
    
    return 0;
}