#include <iostream>
#include "Register.h"

Register::Register(int value){
	this->value = value;
}

Register::~Register(){
	
}

int Register::getValue(){
	unsigned short int aux;

	aux = this->value;

	return aux;
}

void Register::setValue(unsigned short int value){
	this->value = value;
}