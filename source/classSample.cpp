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
