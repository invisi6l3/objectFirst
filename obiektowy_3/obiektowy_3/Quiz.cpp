#include "Quiz.h"
#include "Menu.h"
#include <iostream>
#include <fstream>

bool Quiz::loadQuiz() {
	std::cout << "Give Quiz name\n " << std::endl;
	std::cin >> name;
	Menu::checkCin();
	std::ifstream openQuiz ("MYQUIZ.txt");
	if (openQuiz.is_open()==1)
		return true;
	return false;
}

void Quiz::startGame() {

}

Quiz::Quiz() {
	name = "basicName";
}