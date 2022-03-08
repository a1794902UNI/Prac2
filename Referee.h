#ifndef REFEREE_H
#define REFEREE_H

#include <iostream>
#include <string>
#include "Human.h"
#include "Computer.h"
using namespace std;

class Referee{
private:
	char Outcome;
	char p1m;
	char p2m;
protected:

public:
	Referee();
	char refGame(Human, Computer);

};

#endif