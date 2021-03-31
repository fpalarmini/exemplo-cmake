#include "classSample.h"

ClassSample::ClassSample()
{
    std::cout << "inicializando obj" << std::endl;
    m_objectName = "classSample";
}

ClassSample::~ClassSample()
{
    std::cout << "destruindo obj" << std::endl;
}

void ClassSample::mostrarNomeObjeto()
{
    std::cout << m_objectName << std::endl;
}

void ClassSample::testeSwitchClangFormat()
{
    int a = 2;
    switch (a)
    {
    case 2:
        std::cout << "teste switch no clang-format" << std::endl;

        break;
    case 4:

        break;

    case 6:

        break;
    case 10:

        break;

    default:
    }
}
