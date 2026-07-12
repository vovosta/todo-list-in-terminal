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
