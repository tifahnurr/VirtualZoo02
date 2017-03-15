#ifndef ZOO_H
#define ZOO_H
#include <string.h>
#include "cell.h"

class Zoo {
  public:
    /**@brief Constructor
     * Konstruktor dengan parameter
     * @param _p
     * panjang dari map zoo
     * @param _l
     * lebar dari map zoo*/
    Zoo(int _p, int _l);
    
   /**@brief Destructor
    * Destruktor dari zoo*/
    ~Zoo();
    
    /**@brief GetCell
     * Mengembalikan cell map y,x */
    Cell GetCell(int y, int x);
    
    /**@brief GetEntL
     * Mengembalikan koordinat melebar dari entrance*/
    int GetEntL();
    
    /**@brief GetEntP
     * Mengembalikan koordinat memanjang dari entrance*/
    int GetEntP();
    
    /**@brief GetPanjang
     * Mengembalikan panjang dari map zoo*/
    int GetPanjang();
    
    /**@brief GetLebar
     * Mengembalikan lebar dari map zoo*/
    int GetLebar();
    
    /**@brief CheckAround
     * Melakukan interaksi ke cell sekitar
     * @param y
     * koordinat memanjang dari titik yang dicari
     * @param x
     * koordinat melebar dari titk yang dicari*/
    void CheckAround(int y, int x);
    
    /**@brief IsRoute
     * Mengecek apakah cell pada (y,x) adalah route atau bukan
     * @param y
     * koordinat memanjang dari titik yang dicari
     * @param x
     * koordinat melebar dari titik yang dicari*/
    bool IsRoute(int y, int x);
  protected:
    Cell** map;
    const int panjang;
    const int lebar;
    int entrance_l;
    int entrance_p;
    
};
#endif
