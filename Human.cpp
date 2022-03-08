#include "Human.h"
#include <iostream>
#include <string>
using namespace std;

Human::Human(){
	humanMove;
}

char Human::makeMove(){
	cout<< "Enter move: ";
	cin>> humanMove;

	return humanMove;
}