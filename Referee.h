#ifndef REFEREE_H
#define REFEREE_H

#include <iostream>
#include <string>
using namespace std;

class Referee{
private:
	char Outcome;
	char p1m;
protected:

public:
	Referee();
	char refGame();

}

#endif