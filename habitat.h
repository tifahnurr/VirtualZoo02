#ifndef HABITAT_H
#define HABITAT_H
#include <string.h>

class Habitat {
  public:
    Habitat(char c);
    Habitat(const& Habitat);

  protected:
    const char code;
    std::string name;
    Cage cage;
};
#endif
