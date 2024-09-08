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
        std::cout << "List of Commands:\n * Initialize\n * Screen\n * Schedule-Tester\n * Schedule-Stop\n * Report-Util\n * Clear\n * Exit\n";
        std::cout << "\nEnter a command: ";
        std::getline(std::cin, command);

        for (auto& c : command) c = tolower(c);

        if (command == "initialize") {
            initialize();
        }
        else if (command == "screen") {
            screen();
        }
        else if (command == "schedule-tester") {
            scheduleTester();
        }
        else if (command == "schedule-stop") {
            scheduleTester();
        }
        else if (command == "report-util") {
            reportUtil();
        }

    }

}

void initialize() {

    std::cout << "Initialize command recognized. Doing something.";
}

void screen() {
    std::cout << "Screen command recognized. Doing something.";
}

void scheduleTester() {
    std::cout << "Schedule Tester command recognized. Doing something.";
}

void schedulerStop() {
    std::cout << "Scheduler Stop command recognized. Doing something.";
}

void reportUtil() {
    std::cout << "Report Util command recognized. Doing something.";
}
