#include <iostream>
#include "cage.h"

using namespace std;

Cage::Cage(){
  code = '0';
  animal = Animal ('0');
}

Cage::Cage(char c){
  if (c=='1'){
	code = c;
	animal = Animal ('0');
  } else {
	code = c;
	animal = Animal (c);
  }
}

void Cage::SetAnimal(char c){
  code = '1';
  animal = Animal (c);
}

Animal Cage::GetAnimal(){
  return animal;
}

char Cage::GetCode(){
  return code;
}

void Cage::Interact(){
  if (animal.GetCode()!='0'){
    cout<<"Kandang ini berisi hewan "<<animal.GetName()<<endl;
    animal.Interact();
  } else if (code=='1') {
    cout<<"Kandang ini kosong"<<endl;
  }
}
