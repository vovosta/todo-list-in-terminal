#include <iostream> 
#include <vector> 
#include "task.h"

void add_task(std::vector<std::string>& task){
	std::string new_task;
	std::cout << "Please enter the name of the task you want to add : " << '\n';
	std::getline(std::cin >> std::ws, new_task);
	task.push_back(new_task);
	std::cout << "Great ! The task " << new_task << " was added !" << '\n';
}

void show_task(std::vector<std::string>& task){
	std::cout << "Here is everything : " << '\n';
	for (std::size_t i = 0 ; i<task.size(); i++){
	std::cout << i+1 << ". " <<  task[i] << '\n';
	}
}
