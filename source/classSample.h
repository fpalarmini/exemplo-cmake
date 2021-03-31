#include <iostream>
#include <string>

class ClassSample
{
  public:
    ClassSample();
    ~ClassSample();
    void mostrarNomeObjeto(void);
    void testeSwitchClangFormat();

  private:
    std::string m_objectName;
};
