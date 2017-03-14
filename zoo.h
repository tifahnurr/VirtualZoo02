#ifndef ZOO_H
#define ZOO_H
#include <string.h>
#include "cell.h"

class Zoo {
  public:
  
    Zoo(int _p, int _l);
    
    ~Zoo();
    
    Cell GetCell(int y, int x);
    
    int GetEntL();
    
    int GetEntP();
    
    int GetPanjang();
    
    int GetLebar();
    
    void CheckAround(int y, int x);
    
    bool IsRoute(int y, int x);
  protected:
    Cell** map;
    const int panjang;
    const int lebar;
    int entrance_l;
    int entrance_p;
    
};
#endif
