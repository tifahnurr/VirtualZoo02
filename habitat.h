#ifndef HABITAT_H
#define HABITAT_H
#include <string>
#include "cage.h"

class Habitat {
  public:
	Habitat();
    Habitat(char c);
    void SetCage(char c);
    Cage GetCage ();
    char GetCode();
    void Interact();
    void Render();

  protected:
    char code;
    std::string name;
    Cage cage;
};
#endif
