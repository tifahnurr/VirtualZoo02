#ifndef FACILITY_H
#define FACILITY_H

#include <string>
#include <iostream>

class Facility {
  public:
    Facility();
    Facility(char c);
    void Render();
    char GetCode();
    void Interact();

  protected:
    char code;
    std::string name;

};
#endif
