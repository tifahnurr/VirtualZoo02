#include "point.h"

Point::Point(){
  x=0;
  y=0;
}

Point::Point(int _x, int _y){
  x=_x;
  y=_y;
}

bool Point::operator==(Point& P){
  return (x==P.x && y==P.y);
}

int Point::GetX(){
  return x;
}

int Point::GetY(){
  return y;
}

void Point::SetX(int _x){
  x=_x;
}

void Point::SetY(int _y){
  y=_y;
}

bool Point::IsMember(Point *p, int n){
  bool member=false;
  int i=0;
  while (!member && i<n){
	if (p[i].x==x && p[i].y==y){
	  member=true;
	}
	i++;
  }
  return member;
}
