#include <iostream>
#include "Memory.h"


Memory::Memory(int size){
	int i;

	if (size <= 0){
		size = 32000;
	}

	value = new unsigned short int[size];

	for (i = 0; i < size; i++){
		this->value[i] = (unsigned short int) 0;
	}

	this->size = size;
}
	
Memory::~Memory(){
	delete(value);
}

int Memory::getValue(int position){
	unsigned short int aux;

	aux = this->value[position];

	return aux;
}

void Memory::setValue(int position, unsigned short int value){
	if (position >= 0 && position < this->size){
		this->value[position] = value;
	}
}
