#ifndef CAGE_H
#define CAGE_H
#include <string.h>

class Cage {
  public:
    Cage(char c);
    Cage(const& Cage);
  
  protected:
    const char code;
    std::string name;
    Animal animal;
    
};
#endif
