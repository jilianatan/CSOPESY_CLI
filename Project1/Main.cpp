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

    while (command != "exit") {

        std::cout << " _______  _______  _______  _______  _______  _______  __   __  \n";
        std::cout << "|       ||       ||       ||       ||       ||       ||  | |  |\n";
        std::cout << "|       ||  _____||   _   ||    _  ||    ___||  _____||  |_|  | \n";
        std::cout << "|       || |_____ |  | |  ||   |_| ||   |___ | |_____ |       |\n";
        std::cout << "|      _||_____  ||  |_|  ||    ___||    ___||_____  ||_     _|\n";
        std::cout << "|     |_  _____| ||       ||   |    |   |___  _____| |  |   |   \n";
        std::cout << "|_______||_______||_______||___|    |_______||_______|  |___|  \n\n";
                                           


        
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
        else if (command == "clear") {
            system("cls");
        } 
        else if (command == "exit") {
        }
        else {
            std::cout << "\n^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^\n\n";
            std::cout << "Command not recognized. \n";
            std::cout << "\n^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^\n\n";
        }

    }

}

void initialize() {

    std::cout << "\n^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^\n\n";
    std::cout << "Initialize command recognized. Doing something.\n";
    std::cout << "\n^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^\n\n";
}

void screen() {
    std::cout << "\n^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^\n\n";
    std::cout << "Screen command recognized. Doing something.\n";
    std::cout << "\n^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^\n\n";
}

void scheduleTester() {
    std::cout << "\n^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^\n\n";
    std::cout << "Schedule Tester command recognized. Doing something.\n";
    std::cout << "\n^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^\n\n";
}

void schedulerStop() {
    std::cout << "\n^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^\n\n";
    std::cout << "Scheduler Stop command recognized. Doing something.\n";
    std::cout << "\n^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^\n\n";
}

void reportUtil() {
    std::cout << "\n^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^\n\n";
    std::cout << "Report Util command recognized. Doing something.\n";
    std::cout << "\n^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^\n\n";
}
