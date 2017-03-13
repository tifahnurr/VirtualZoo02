#ifndef FACILITY_H
#define FACILITY_H
#include <string.h>

class Facility {
  public:
    Facility();
    Facility(char c);
    Facility(const& Facility);
  
  protected:
    char code;
    std::string name;
    
};
#endif
