#include<vector>
#include<string>

class Menu {
public:
	Menu();
	~Menu() {};
	//Menu(std::vector<std::vector<std::string>> allQuestions); //Create whole menu
	//bool makeLine(std::vector<std::vector<std::string>> allQuestions); 
	//bool maleLine(int whichLine, std::vector<std::string > question); //Create/edit 1 lane from menu
	//void view_menu(); //show menu
	static inline void checkCin();
private:
	int choiceNum;
};