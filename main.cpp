#include <iostream>
#include <vector> 
#include "task.h"

int main(){
	int choice;
	std::vector<std::string> task;
	std::cout << "======= TODO LIST =======" << '\n';
	std::cout << "1. Add task" << '\n';
	std::cout << "2. Quit TODO LIST" << '\n';
	std::cout << "3. Show all tasks in memory" << '\n';
	std::cout << "Your choice (1 or 2) : ";
	std::cin >> choice;
	switch (choice){
		case 1:
			add_task(task);
			break;
		case 2:
			std::cout << "Then, goodbye !" << '\n';
		return 0;
		case 3:
			show_task(task);
			break;
		default:
			std::cout << "Wrong choice. Try back.";
			
	}
}
