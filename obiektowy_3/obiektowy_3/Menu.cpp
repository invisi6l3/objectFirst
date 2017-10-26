#include "Menu.h"
#include "Quiz.h"
#include <iostream>

void inline Menu::checkCin() {
	if (std::cin.fail() == true) {
		std::cin.clear();
		std::cin.ignore(10000, '\n');
	}
}

Menu::Menu() {
	std::cout << "1.Load Quiz" << std::endl
		<< "2. Make Quiz" << std::endl
		<< "3. Exit" << std::endl;
	int flag = 0;
	do {
		if (flag == 1) {
			std::cout << "1.Load Quiz" << std::endl
				<< "2. Make Quiz" << std::endl
				<< "3. Exit" << std::endl
				<< "4. Start Quiz" << std::endl;
			flag = 2;
		}
		std::cin >> choiceNum;
		checkCin();
		switch (choiceNum) {
		case 1: 
			Quiz* myQuiz =  new Quiz();
			myQuiz->loadQuiz();
			flag = 1;
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			if (flag == 0)
				break;

		}
	} while (choiceNum != 3);
}


