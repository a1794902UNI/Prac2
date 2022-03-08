#include "Computer.h"
#include <iostream>
#include <string>
using namespace std;


Computer::Computer(){
	compMove;
}

char Computer::makeMove(){
	compMove='R';
	return compMove;
}
