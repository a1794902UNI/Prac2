#ifndef HUMAN_H
#define HUMAN_H

#include <iostream>
#include <string>
using namespace std;

class Human{
private:
	char humanMove;
protected:

public:
	Human();
	char makeMove();

};

#endif