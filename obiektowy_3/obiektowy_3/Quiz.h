#include <string>

class Quiz {
public:
	Quiz() {};
	~Quiz() {};
	bool loadQuiz();
	void startGame();
private:
	std::string name;
	
};
