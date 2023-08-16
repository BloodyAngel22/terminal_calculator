#include "logic.h"
#include <cmath>
#include <curses.h>


void Calculator::setA(){
	printw("Enter the first number\n");
	scanw("%f", &a);
}

void Calculator::setB(){
	printw("Enter the second number\n");
	scanw("%f", &b);
}

void Calculator::setC(){
	printw("Enter the number\n");
	scanw("%f", &c);
}

void Calculator::setSymbol(){
	printw("Choose an action\n"); 
	printw(" + , - , * , / , ! , ^ , r(sqrt) , (e)xit\n");
	scanw("%c", &s);
}

void Calculator::printResult(){
	printw("result = %.3f\n", res);
}

char Calculator::getSymbol(){
	return s;
}

float Calculator::sum(){
	return a+b;
}

float Calculator::sub(){
	return a-b;
}

float Calculator::division(){
	return a/b;
}

float Calculator::multi(){
	return a*b;
}

float Calculator::mySqrt(){
	return sqrt(c);
}

float Calculator::factorial(){
	if (c < 0){
		printw("Factorial cannot be less than zero\n");
		return 0;
	}
	if (c == 0 or c == 1)
		return 1;
	int tmp = 1;
	for (int i = 1; i <= c; i++){
		tmp = tmp * i;
	}
	c = tmp;
	return c;
}

float Calculator::degree(){
	return pow(a,b);
}
