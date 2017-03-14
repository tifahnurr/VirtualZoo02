#include <iostream>
#include "habitat.h"

using namespace std;

Habitat::Habitat(){
  name ="";
  code = '0';
}

Habitat::Habitat(char c){
  code = c;
  if (c=='w' || c=='W'){
    name = "Water";
  } else if (c=='l' || c=='L'){
    name = "Land";
  } else if (c=='f' || c=='f'){
    name = "Air";
  }
  
  if (c=='W' || c=='L' || c=='F'){
    cage = Cage('1');
  } else {
    cage = Cage('0');
  }
}

void Habitat::SetCage(char c){
  cage = Cage(c);
}

Cage Habitat::GetCage(){
  return cage;
}

void Habitat::Interact(){
  cout<<"Habitat "<<name<<endl;
  if (cage.GetCode() != '0'){
    cage.Interact();
  }
}

void Habitat::Render(){
  if (cage.GetCode()=='0'){
  	cout<<code;
  } else if (cage.GetCode()=='1') {
	  if (code == 'w') {
	   cout<<"W";
    } else if (code == 'f'){
      cout<<"F";
    } else if (code == 'l'){
      cout<<"L";
    }
  } else if (cage.GetAnimal().GetCode()!='0'){
        cage.GetAnimal().Render();
  }
}

char Habitat::GetCode(){
  return code;
}
