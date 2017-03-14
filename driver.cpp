#include "driver.h"
#include <iostream>

using namespace std;

void Driver::PrintMap(Zoo& z, Point& u){
  for (int i = 0; i<z.GetPanjang(); i++){
	  for (int j = 0; j<10; j++){
		  if (i!=u.GetY() || j!=u.GetX()){
			z.GetCell(i,j).Render();
		  } else {
			cout<<'u';
		  }
	  }
	  cout<<endl;
  }
}

void Driver::Tour(Zoo& z){
	int l;
  Point user(z.GetEntL(),z.GetEntP());
  bool avail=true;
  Point *visited = new Point [60];
  int i=0;
  visited[0]=user;
  while (avail){
	PrintMap(z,user);
	z.CheckAround(user.GetY(), user.GetX());
	Point temp1(user.GetX(),user.GetY()+1);
	Point temp2(user.GetX(),user.GetY()-1);
	Point temp3(user.GetX()+1,user.GetY());
	Point temp4(user.GetX()-1,user.GetY());
	
	if (user.GetY()+1<z.GetPanjang() && !temp1.IsMember(visited,i) &&
        z.IsRoute(temp1.GetY(),temp1.GetX())){
		i++;
		visited[i]=temp1;
		user=temp1;
	} else if (user.GetY()-1>=0 && !temp2.IsMember(visited,i) &&
          z.IsRoute(temp2.GetY(),temp2.GetX())){
		i++;
		visited[i]=temp2;
		user=temp2;
    } else if (user.GetX()+1<z.GetLebar() && 
               !temp3.IsMember(visited,i) &&
               z.IsRoute(temp3.GetY(),temp3.GetX())){
		i++;
		visited[i]=temp3;
		user=temp3;
    } else if (user.GetX()-1>=0 && !temp4.IsMember(visited,i) &&
               z.IsRoute(temp4.GetY(),temp4.GetX())){
		i++;
		visited[i]=temp4;
		user=temp4;
    } else {
	  avail=false;
	}
	cin.ignore();
	cout<<endl;
  }
}
