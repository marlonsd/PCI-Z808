#ifndef REGISTER_H
#define	REGISTER_H

#include <iostream>

using namespace std;

class Register{

private:
	unsigned short int value;
	
public:
	Register(int value = 0);	
	~Register();
	int getValue();
	void setValue(unsigned short int value);
};

#endif