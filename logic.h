#include <iostream>
#include <ncurses.h>
#include <math.h>

using namespace std;

class Calculator{
	private:
		float a,b,c;
		char s; //symbol
	public:
		float res;
		void setA();
		void setB();
		void setC();
		void setSymbol();
		char getSymbol();
		void printResult();

		float sum();
		float division();
		float multi();
		float sub();
		float mySqrt();
		float factorial();
		float degree();
};
