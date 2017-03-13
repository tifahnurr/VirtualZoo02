#ifndef CELL_H
#define CELL_H
#include <string.h>
#include "habitat.h"
#include "facility.h"

class Cell {
  public:
    Cell();
    
    Cell(char c);
    
    Cell(const& Cell);
    
    void SetHabitat(char c);
    
    void SetFacility(char c);
  
  protected:
    char code;
    std::string name;
    Habitat habitat;
    Facility facility;
    
};
#endif
