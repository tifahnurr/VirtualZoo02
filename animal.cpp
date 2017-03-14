#include "animal.h"
#include <iostream>
using namespace std;

Animal::Animal(){
  code = '0';
  name = "";
  type = "";
  sound = "";
  habitat_type = '0';
}

Animal::Animal(char c){
  code = c;
  if (c=='i'){
    name = "Singa";
    type = "mamalia";
    sound = "ROAR!";
	habitat_type = 'l';
  } else if (c=='G'){
	name = "Jerapah";
	type = "mamalia";
	sound = "...";
	habitat_type = 'l';
  } else if (c=='e'){
	name = "Elang";
    type = "aves";
    sound = "Koak";
	habitat_type = 'f';
  } else if (c=='n'){
	name = "Ular";
	type = "reptil";
	sound = "Sshhh";
	habitat_type = 'l';
  } else if (c=='r'){
	name ="Pari";
    type = "pisces";
    sound = "Blub";
	habitat_type = 'w';
  } else if (c=='B'){
	name = "Kupu-kupu";
	type = "serangga";
	sound = "...";
	habitat_type = 'f';
  } else if (c=='P'){
	name ="Penguin";
    type = "aves";
    sound = "Citciit";
	habitat_type = 'w';
  } else if (c=='t'){
	name = "Harimau";
	type = "mamalia";
	sound = "Auuum";
	habitat_type = 'l';
  } else if (c=='S'){
	name = "Hiu";
    type = "pisces";
    sound = "Groaar!";
	habitat_type = 'w';
  } else if (c=='z'){
	name = "Zebra";
	type = "mamalia";
	sound = "...";
	habitat_type = 'l';
  } else if (c=='b'){
	name = "Kelelawar";
    type = "mamalia";
    sound = "Citciit";
	habitat_type = 'f';
  } else if (c=='H'){
	name = "Kuda nil";
	type = "mamalia";
	sound = "Ngooo";
	habitat_type = 'l';
  } else if (c=='p'){
	name ="Merpati";
    type = "aves";
    sound = "Krr Krrr";
	habitat_type = 'f';
  } else if (c=='c'){
	name = "Cendrawasih";
	type = "aves";
	sound = "Suiiit";
	habitat_type = 'f';
  } else if (c=='t'){
	name = "Blue tang";
    type = "pisces";
    sound = "blubblub";
	habitat_type = 'w';
  } else if (c=='f'){
	name = "Ikan badut";
	type = "pisces";
	sound = "blubblub";
	habitat_type = 'w';
  } else if (c=='c'){
	name = "Buaya";
    type = "reptil";
    sound = "Groaar";
	habitat_type = 'w';
  } else if (c=='D'){
	name = "Bunglon";
	type = "reptil";
	sound = "Ngiiii";
	habitat_type = 'l';
  } else if (c=='K'){
	name ="Komodo";
    type = "reptil";
    sound = "Sssst";
	habitat_type = 'l';
  } else if (c=='o'){
	name = "Kecoak";
	type = "serangga";
	sound = "...";
	habitat_type = 'f';
  } else if (c=='m'){
	name = "Belalang";
    type = "serangga";
    sound = "...";
	habitat_type = 'l';
  } else if (c=='d'){
	name = "Capung";
	type = "serangga";
	sound = "...";
	habitat_type = 'f';
  }
}

char Animal::GetCode(){
  return code;
}

string Animal::GetName(){
  return name;
}

void Animal::Interact(){
  cout<<name<<" termasuk ke dalam binatang "<<type<<endl;
  cout<<sound<<endl;
}

void Animal::Render(){
  cout<<code;
}
