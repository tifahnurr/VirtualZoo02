#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
/**@class Animal.
 * Kelas ini menangani jenis hewan yang ada*/

using namespace std;

class Animal {
  public:

    /**@brief Constructor
     * Konstruktor tanpa parameter yang membangun animal kosong*/
    Animal ();

    /**@brief Constructor
     * Konstruktor dengan parameter membangun animal dengan kode c
      **@param c
      * Kode dari animal untuk dibangun menjadi animal khusus*/
    Animal(char c);

    /**@brief GetCode
     * Mengembalikan kode pembeda animal*/
    char GetCode();

    /**@brief Interact.
     * Menampilkan interaksi yang dapat dilakukan user*/
    void Interact();

    /**@brief GetName.
     * Mengembalikan string name dari animal */
    std::string GetName();

    /**@brief Render.
     * Fungsi untuk menampilkan tampilan*/
    void Render();

  protected:
    char code;
    string name;
    string type;
    string sound;
    char habitat_type;

};
#endif
