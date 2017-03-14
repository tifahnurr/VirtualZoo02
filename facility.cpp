#include "facility.h"
#include <iostream>
#include <string>

using namespace std;
Facility::Facility(){
  name = " ";
  code = '0';
}
Facility::Facility(char c){
  code = c;
  if (c=='r'){
    name = "Route";
  } else if (c=='R'){
    name = "Restaurant";
  } else if (c=='E'){
    name = "Entrance";
  } else if (c=='X'){
    name = "Exit";
  } else if (c=='P'){
    name = "Park";
  }
}

char Facility::GetCode(){
  return code;
}

void Facility::Render(){
  if (code == 'r'){
    cout<<'-';
  } else {
    cout<<code;
  }
}

void Facility::Interact(){
  if (code=='R'){
    cout<<"Restoran di kebun binatang."<<endl;
    cout<<"Kamu mau pesan apa?"<<endl;
  } else if (code=='P'){
    cout<<"Taman yang berisi banyak pohon dan bersih."<<endl;
    cout<<"Mau duduk dulu?"<<endl;
  }
}
