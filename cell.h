#ifndef CELL_H
#define CELL_H
#include <string.h>
#include "habitat.h"
#include "facility.h"

/**@class Cell
 * Kelas yang menjadi mapping dari kebun binatang*/
class Cell {
  public:
    /**@brief Constructor
     * Konstruktor tanpa parameter untuk menginisialisasi nilai-nilai
     * pada cell*/
    Cell();

    /**@brief SetHabitat
     * Mengeset habitat pada cell dengan parameter
      **@param chab
      * karakter pembeda untuk habitat
      **@param cani
      * karakter pembeda untuk animal */
    void SetHabitat(char chab, char cani);

    /**@brief SetHabitat
     * Mengeset habitat dummy apabila cell merupakan facility*/
    void SetHabitat();

    /**@brief SetFacility
     * Mengeset facility menjadi facility yang diwakili dengan parameter c
      **@param c
      * Karakter pembeda facility */
     
    void SetFacility(char c);
    
    /**@brief GetHabitat
     * Mengambil tipe habtat dari karakter pembeda untuk habitat
     */
    Habitat GetHabitat ();
  
    /**@brief GetFacility
     * Mengambil tipe Faclity dari karakter pembeda untuk fasilitas
     */
    Facility GetFacility ();
  
    /**@brief Render
     * Menampilkan tampilan yang harus ditampilkan
     */
    void Render();
  
    /**@brief Interact
     * Berinterasksi dengan cell
     */
    void Interact();

  protected:
    char code;
    Habitat habitat;
    Facility facility;
    
};
#endif
