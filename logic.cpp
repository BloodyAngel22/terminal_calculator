#include "logic.h"
#include <cmath>
#include <curses.h>

const char symbol[9][10] = {
	"+",
	"-",
	"*",
	"/",
	"!",
	"^",
	"sqrt",
	"reset",
	"exit"
};

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
	clear();
	keypad(stdscr, true);
	curs_set(0);
	while (true){
	printw("Terminal Calculator\n");
	printw("Choose an action\n"); 
	
	for (int i = 0; i < 9; i++){
		if (i == pos){
			printw("-> ");
		}
		else {
			printw("   ");	
		}
		printw("%s\n", symbol[i]);
	}
	printw("   result = %.3f", res);
	
	switch (getch()) {
		case KEY_UP:
			if (pos != 0)
				pos--;
			break;
		case KEY_DOWN:
			if (pos != 8)
				pos++;
			break;
		case 10:
			if (pos == 0)
				s = '+';
			if (pos == 1)
				s = '-';
			if (pos == 2)
				s = '*';
			if (pos == 3)
				s = '/';
			if (pos == 4)
				s = '!';
			if (pos == 5)
				s = '^';
			if (pos == 6)
				s = 'r';
			if (pos == 7){
				reset();
				break;
			}
			if (pos == 8)
				s = 'e';
			return;
	}

	clear();
	refresh();
	}
}

void Calculator::printResult(){
	printw("result = %.3f\n\n", res);
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
	return sqrt(a);
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

void Calculator::reset(){
	res = 0;
}

void Calculator::nextLoop(){
	a = res;
}
