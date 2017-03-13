#ifndef ZOO_H
#define ZOO_H
#include <string.h>

class Zoo {
  public:
  
    Zoo(int p, int l);
    
    ~Zoo();
    
    Zoo(const& Animal);
  
  protected:
    Cell** map;
    const int x;
    const int y;
    
};
#endif
