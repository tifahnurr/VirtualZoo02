#include "cell.h"
Cell::Cell(){
  habitat = Habitat();
}

void Cell::SetHabitat(char chab,char cani){
  habitat = Habitat (chab);
  habitat.SetCage(cani);
}

void Cell::SetHabitat(){
  habitat = Habitat ();
}

void Cell::SetFacility(char c){
  facility = Facility (c);
}

Habitat Cell::GetHabitat(){
  return habitat;
}

Facility Cell::GetFacility(){
  return facility;
}

void Cell::Render(){
  if (habitat.GetCode()!='0'){
    habitat.Render();
  } else {
    facility.Render();
  }
}

void Cell::Interact(){
  if (habitat.GetCode()!='0'){
    habitat.Interact();
  } else {
    facility.Interact();
  }
}
