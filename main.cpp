#include <iostream>
#include <vector> 
#include "task.h"
#include "file.h"
int main(){
	int choice;
	std::vector<std::string> task;
	load_task(task);
	std::cout << "======= TODO LIST =======" << '\n';
	std::cout << "1. Add task" << '\n';
	std::cout << "2. Quit TODO LIST" << '\n';
	std::cout << "3. Show all tasks in memory" << '\n';
	std::cout << "4. Delete task in memory" << '\n';
	std::cout << "5. Edit task in memory" << '\n';
	std::cout << "Your choice (You can choose from 1 to 5) : ";
	std::cin >> choice;
	switch (choice){
		case 1:
			add_task(task);
			save_task(task);
			break;
		case 2:
			std::cout << "Then, goodbye !" << '\n';
		return 0;
		case 3:
			show_task(task);
			break;
		case 4:
			show_task(task);
			delete_task(task);
			save_task(task);
			break;
		case 5:
			show_task(task);
			edit_task(task);
			save_task(task);
			break;
		default:
			std::cout << "Wrong choice. Try back.";
			
	}
}
