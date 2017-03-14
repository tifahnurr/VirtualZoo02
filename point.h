#ifndef POINT_H
#define POINT_H

class Point {
  public:
    Point();
    Point(int _x, int _y);
    bool operator==(Point&);
    int GetX();
    int GetY();
    void SetX(int _x);
    void SetY(int _y);
    bool IsMember(Point *p, int n);
  private:
    int x;
    int y;
};

#endif
