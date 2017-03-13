#include "zoo.h"
#include <stdio.h>
#include <fstream>

Zoo::Zoo(int p, int l){
  map = new Cell*[p];
  for (int i = 0; i < p; i++){
    map[i] = new Cell[l];
  }
  ifstream file ("map.txt");
  string line;
  if (file.is_open()) {
    for (i = 0; i < p; i++){
      string row;
      if (file >> row){
        for (j = 0; j != min<int>(lebar, row.length()); ++j){
          if (row[j]='-'){
            map[i][j].SetFacility('r');
            map[i][j].SetHabitat('0');
          } else if (row[j]='W'){
            map[i][j].SetFacility('0');
            map[i][j].SetHabitat('w');
            };
}

Zoo::~Zoo(){
  for (int i = 0; i < p; i++){
    delete [] map[i];
  }
  delete [] map;
}

