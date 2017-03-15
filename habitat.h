#ifndef HABITAT_H
#define HABITAT_H
#include <string>
#include "cage.h"

/**@class Habitat
 * Kelas yang digunakan untuk membuat habitat */
class Habitat {
  public:
    /**@brief Constructor.
     * Mengkonstruksi habitat tanpa parameter*/
    Habitat();
    /**@brief Constructor.
     * Mengkonstruksi habitat dengan parameter c berupa tipe pembeda habitat
     * @param c Tipe pembeda dari habitat*/
    Habitat(char c);
    /**@brief SetCage.
     * Menginisiasi cage dengan tipe pembeda dari habitat
     * @param c Tipe pembeda dari habitat*/
    void SetCage(char c);
    /**@brief GetCage.
     * Mengambil cage yang dituju */
    Cage GetCage ();
    /**@brief GetCode.
     * Mengambil code dari habitat*/
    char GetCode();
    /**@brief Interact.
     * Berinteraksi dengan habitat*/
    void Interact();
    /**@brief Render.
     * Menampilkan tampilan yang harus ditampilkan */
    void Render();

  protected:
    char code;
    std::string name;
    Cage cage;
};
#endif
