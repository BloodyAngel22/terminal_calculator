#include "logic.h"
#include <curses.h>

int main(){
Calculator calculator;
    initscr();                   
		printw("Terminal Calculator\n");
		
		do {
		calculator.setSymbol();
		if (calculator.getSymbol() != 'e'){
			if (calculator.getSymbol() != 'r' and calculator.getSymbol() != '!'){
			calculator.setA();
			calculator.setB();
			}
			else {
			calculator.setC();
			}
			switch (calculator.getSymbol()) {
				case '+':
					calculator.res = calculator.sum();
					break;
				case '-':
					calculator.res = calculator.sub();
					break;
				case '*':
					calculator.res = calculator.multi();
					break;
				case '/':
					calculator.res = calculator.division();
					break;
				case 'r':
					calculator.res = calculator.mySqrt();
					break;
				case '!':
					calculator.res = calculator.factorial();
					break;
				case '^':
					calculator.res = calculator.degree();
					break;
			}
			calculator.printResult();
			}
		} while (calculator.getSymbol() != 'e');
		printw("Goodbye\n");

    refresh();                   
    getch();                     
    endwin();                    
    return 0;

}
