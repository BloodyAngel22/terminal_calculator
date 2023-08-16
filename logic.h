#include <iostream>
#include <ncurses.h>
#include <math.h>

using namespace std;

class Calculator{
	private:
		float a,b,c;
		char s; //symbol
	public:
		int pos = 0;
		float res = 0;
		void setA();
		void setB();
		void setC();
		void setSymbol();
		char getSymbol();
		void printResult();
		void reset();
		void nextLoop();

		float sum();
		float division();
		float multi();
		float sub();
		float mySqrt();
		float factorial();
		float degree();
};
