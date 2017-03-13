#ifndef ANIMAL_H
#define ANIMAL_H
#include <string.h>

class Animal {
  public:
    Animal(char c);
    Animal(const& Animal);
    Interact();
  
  protected:
    const char code;
    std::string name;
    std::string sound;
    
};
#endif
