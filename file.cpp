#include <iostream>
#include <fstream>
#include <vector> 
#include <string>

void load_task(std::vector<std::string>& task){
	std::fstream file("todo.txt", std::ios::in);
	std::string File_Text;
	while(std::getline(file, File_Text)){
		task.push_back(File_Text);
	}
	file.close();
}

void save_task(std::vector<std::string>& task){
	std::fstream file("todo.txt", std::ios::out);
	for (std::size_t i=0; i<task.size(); i++){
		file << task[i] << '\n';
		std::cout << "The task " << task[i] << " was added to todo.txt.";
	} 
	file.close();
}

void delete_task(std::vector<std::string>& task){
	std::size_t index;
	std::cout << "Good, wich task do you want to delete ? (Knowing that 0 = 1st task) : " << '\n';
	std::cin >> index;
	if (index < task.size()){
		task.erase(task.begin() + index);
		std::cout << "The task " << index << " was deleted." << '\n';
	}
	else{
		std::cout << "Wrong choice." << '\n';
	}

}
