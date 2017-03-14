#ifndef CAGE_H
#define CAGE_H
#include <string.h>
#include "animal.h"

/**@class Cage
 * Kelas cage atau kandang yang menyimpan animal*/
using namespace std;

class Cage {
  public:

    /**@brief constructor
     * Konstruktor tanpa parameter yang membangun cage kosong*/
    Cage();

    /**@brief constructor
     * Konstruktor dengan parameter yang membangun cage dengan animal
     * berkode c 
      **@param c
      * Kode karakter pembeda dari animal */
    Cage(char c);

    /**@brief SetAnimal
     * Memasukkan animal pada cage
      **@param c
      * Kode karakter pembeda dari animal */
    void SetAnimal(char c);

    /**@brief GetAnimal
     * Mengembalikan variabel animal yang ada pada cage*/
    Animal GetAnimal();

    /**@brief Interact
     * Melakukan interaksi dengan kandang */
    void Interact();

    /**@brief GetCode
     * Mengembalikan suatu karakter yang merupakan kode pembeda cage*/
    char GetCode();

  protected:
    char code;
    string name;
    Animal animal;
    
};
#endif
