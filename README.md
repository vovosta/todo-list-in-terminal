# Todo List in Terminal (C++)

A simple command-line Todo List application written in C++.

This project is part of my C++ learning journey. The goal is to build a complete terminal application step by step while learning good programming practices, software design, Git, and GitHub.

## Features

Current features:

* Add a new task
* Display all tasks currently stored in memory
* Interactive terminal menu
* Modular project structure using multiple source and header files

Planned features:

* Save tasks to a file
* Automatically load tasks at startup
* Delete a task
* Edit an existing task
* Mark tasks as completed
* Improve input validation
* Improve the user interface

## Project Structure

```text
.
├── main.cpp
├── task.cpp
├── task.h
├── file.cpp   
├── file.h     
├── LICENSE
└── README.md
```

## Build

Compile the project with:

```bash
g++ -Wall -Wextra -std=c++17 main.cpp task.cpp file.cpp -o todo_list
```

Run the application:

```bash
./todo_list
```

## Current Limitations

At the moment, tasks are stored only in memory.

This means that all tasks are lost when the program exits. File persistence will be implemented in a future version.

## Learning Objectives

This project is an opportunity to practice:

* Modern C++
* Functions
* Header files
* Project organization
* `std::vector`
* User input handling
* File input/output (coming soon)
* Git and GitHub workflow

## License

This project is licensed under the GNU General Public License v3.0 (GPLv3).

You are free to use, study, modify, and redistribute this software under the terms of the GPLv3. Any distributed modified version must also be released under the GPLv3.
