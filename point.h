#ifndef POINT_H
#define POINT_H

class Point {
  public:
    /**@brief Constructor
     * Mengalokasi point tanpa parameter*/
    Point();
  
    /**@brief Constructor
     * Mengalokasi point dengan parameter
     * @param _x
     * parameter koordinat x
     * @param _y
     * parameter koordinat y*/
    Point(int _x, int _y);
  
    /**@brief operator==
     * Mengembalikan nilai kebenaran apakah point yang dimasukkan
     * sama dengan this atau tidak
     * @param point
     * Point lain yang dibandingkan dengan objek this*/
    bool operator==(Point&);
  
    /**@brief GetX
     * Mengembalikan nilai x */
    int GetX();
  
    /**@brief GetY
     * Mengembalikan nilai y*/
    int GetY();
  
    /**@brief SetX
     * Mengeset nilai x dengan _x
     * @param _x
     * nilai yang akan diset menjadi x */
    void SetX(int _x);
  
    /**@brief SetY
     * Mengeset nilai y dengan _y
     * @param _y
     * nilai yang akan diset menjadi y */
    void SetY(int _y);
  
    /**@brief IsMember
     * Mengecek apakah objek this merupakan anggota dari
     * array of point p
     * @param *p
     * array of point yang akan dicek
     * @param n
     * banyaknya array of point*/
    bool IsMember(Point *p, int n);
  private:
    int x;
    int y;
};

#endif
