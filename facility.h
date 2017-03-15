#ifndef FACILITY_H
#define FACILITY_H

#include <string>
#include <iostream>

/**@class Cell
 * Kelas yang digunakan untuk membentuk fasilitas*/
class Facility {
  public:
    /**@brief Constructor
     * Mengkonstruksi fasilitas tanpa parameter
     */
    Facility();
  
    /**@brief Constructor.
     * Mengkonstruksi fasilitas dengan tipe tertentu yang diambil dari parameter c
     */
    Facility(char c);
  
    /**@brief Render.
     * Menampilkan tampilan yang harus ditampilkan
     */
    void Render();
  
    /**@brief GetCode.
     * Mengambil karakter pembeda dari fasilitas
     */
    char GetCode();
  
    /**@brief Interact.
     * Berinteraksi dengan fasilitas
     */
    void Interact();

  protected:
    char code;
    std::string name;

};
#endif
