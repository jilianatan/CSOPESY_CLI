#include <iostream>  
#include <string>


void initialize();
void screen();
void scheduleTester();
void schedulerStop();
void reportUtil();
void clear();
void exit();

int main() {
    std::string command;

    while (command != "Exit") {

        std::cout << "\n[ DISPLAY HEADER ]\n";
        std::cout << "List of Commands:\n * Initialize\n * Screen\n * Schedule Tester\n * Schedule Stop\n * Report Util\n * Clear\n * Exit\n";
        std::cout << "Enter a command: ";
        std::getline(std::cin, command);

        if (command == "Initialize") {
            initialize();
        }
        else if (command == "Screen") {
            screen();
        }

    }



}

void initialize() {

    std::cout << "Initialize command recognized. Doing something.";
}

void screen() {
    std::cout << "Screen command recognized. Doing something.";
}