#include "zoo.h"
#include <stdio.h>
#include <fstream>
#include <iostream>

using namespace std;

Zoo::Zoo(int _p, int _l) : panjang(_p), lebar(_l) {
  map = new Cell*[panjang];
  for (int i = 0; i < panjang; i++){
    map[i] = new Cell[lebar];
  }
  ifstream file ("map.txt");\
  if (file.is_open()) {
    for (int i = 0; i < panjang; i++){
      string row;
      if (file >> row){
        for (int j = 0; j != min<int>(lebar, row.length()); ++j){
		  cout<<row[j];
          if (row[j]=='-'){
            map[i][j].SetFacility('r');
            map[i][j].SetHabitat();
          } else if (row[j]=='W'){
            map[i][j].SetFacility('0');
            map[i][j].SetHabitat('w','1'); 
          } else if (row[j]=='w'){
            map[i][j].SetFacility('0');
            map[i][j].SetHabitat('w','0'); 
          } else if (row[j]=='L'){
            map[i][j].SetFacility('0');
            map[i][j].SetHabitat('l','1'); 
          } else if (row[j]=='l'){
            map[i][j].SetFacility('0');
            map[i][j].SetHabitat('l','0'); 
          } else if (row[j]=='F'){
            map[i][j].SetFacility('0');
            map[i][j].SetHabitat('f','1');
          } else if (row[j]=='f'){
            map[i][j].SetFacility('0');
            map[i][j].SetHabitat('f','0'); 
          } else if (row[j]=='P'){
            map[i][j].SetFacility('P');
            map[i][j].SetHabitat(); 
          } else if (row[j]=='R'){
            map[i][j].SetFacility('R');
            map[i][j].SetHabitat(); 
          } else if (row[j]=='E'){
            map[i][j].SetFacility('E');
            map[i][j].SetHabitat(); 
            entrance_l=j;
            entrance_p=i;
          } else if (row[j]=='X'){
            map[i][j].SetFacility('X');
            map[i][j].SetHabitat(); 
          }
        }
        cout<<endl;
      }
    }
  }
  file.close();
  map[0][1].SetHabitat('l','i');
  map[0][5].SetHabitat('w','r');
  map[3][0].SetHabitat('f','B');
  map[3][2].SetHabitat('f','b');
  map[3][5].SetHabitat('l','G');
  map[3][8].SetHabitat('l','H');
  map[6][1].SetHabitat('w','t');
  map[6][4].SetHabitat('l','z');
  map[6][6].SetHabitat('l','D');
  map[6][7].SetHabitat('l','m');
  map[6][8].SetHabitat('l','n');
  map[7][6].SetHabitat('f','o');
  map[7][8].SetHabitat('f','p');
  map[7][9].SetHabitat('l','d');
  map[8][0].SetHabitat('w','f');
  map[10][3].SetHabitat('w','S');
  map[10][5].SetHabitat('l','K');
  map[10][7].SetHabitat('w','c');
  map[11][4].SetHabitat('f','d');
  
}

Zoo::~Zoo(){
  for (int i = 0; i < panjang; i++){
    delete [] map[i];
  }
  delete [] map;
}

Cell Zoo::GetCell(int y, int x){
  return map[y][x];
}

int Zoo::GetEntL(){
  return entrance_l;
}

int Zoo::GetEntP(){
  return entrance_p;
}

int Zoo::GetPanjang(){
	return panjang;
}

int Zoo::GetLebar(){
	return lebar;
}

void Zoo::CheckAround(int y, int x){
  if ((y-1)>=0 && (y-1)<panjang){
	map[y-1][x].Interact();
  }
  if ((y+1)>=0 && (y+1)<panjang){
	map[y+1][x].Interact();
  }
  if ((x-1)>=0 && (x-1)<lebar){
	map[y][x-1].Interact();
  }
  if ((x+1)>=0 && (x+1)<lebar){
	map[y][x+1].Interact();
  }
}

bool Zoo::IsRoute(int y, int x){
  return (map[y][x].GetFacility().GetCode()=='r');
}
