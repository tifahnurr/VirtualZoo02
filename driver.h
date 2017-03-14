#ifndef DRIVER_H
#define DRIVER_H

#include "zoo.h"
#include "point.h"


class Driver{
  public:
    static void PrintMap(Zoo& z, Point& p);
    static void Tour(Zoo& z);
};

#endif
