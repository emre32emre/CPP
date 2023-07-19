#include <iostream>
#include <iomanip>
#include <string>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
    PhoneBook pb;
    pb.index = 0;
    std::string input;

    while (input != "EXIT")
    {
        std::cout << "\033[0;36m\033[1mADD, SEARCH, EXIT -->\033[0m";
        std::getline(std::cin, input);
        if (input == "ADD") {
            while (1)
            {
                std::cout << "Enter name: ";		std::getline(std::cin, pb.contacts[pb.index].name);
                std::cout << "Enter surname: "; 	std::getline(std::cin, pb.contacts[pb.index].surname);
                std::cout << "Enter nickname: ";	std::getline(std::cin, pb.contacts[pb.index].nickname);
                std::cout << "Enter number: ";		std::getline(std::cin, pb.contacts[pb.index].number);
                std::cout << "Enter secret: ";		std::getline(std::cin, pb.contacts[pb.index].dark);
                if (pb.contacts[pb.index].name.empty() || pb.contacts[pb.index].surname.empty() || pb.contacts[pb.index].nickname.empty() || pb.contacts[pb.index].number.empty() || pb.contacts[pb.index].dark.empty()) {
                    std::cout << "All fields must be filled out" << std::endl;
                }
                else {
                    pb.index++;
                    break;
                }
                if (pb.index == 8) pb.index = 0;
            }
        }
        else if (input == "SEARCH") {
            int i = 1;
            std::string id;
            int j;
            const char *c;

            std::cout << std::setw(10) << "index" << "|";
            std::cout << std::setw(10) << "name" << "|";
            std::cout << std::setw(10) << "surname" << "|";
            std::cout << std::setw(10) << "nickname" << "|" << std::endl;
            while (i <= 8) {
                std::cout << std::setw(10) << i << "|";
                std::cout << std::setw(10) << (pb.contacts[i - 1].name.size() > 10 ? pb.contacts[i - 1].name.substr(0, 9) + "." : pb.contacts[i - 1].name) << "|";
                std::cout << std::setw(10) << (pb.contacts[i - 1].surname.size() > 10 ? pb.contacts[i - 1].surname.substr(0, 9) + "." : pb.contacts[i - 1].surname) << "|";
                std::cout << std::setw(10) << (pb.contacts[i - 1].nickname.size() > 10 ? pb.contacts[i - 1].nickname.substr(0, 9) + "." : pb.contacts[i - 1].nickname) << "|" << std::endl;
                i++;
            }
            while (1) {
                std::cout << "Enter index number: ";
                std::getline(std::cin, id);
                c = id.c_str();
                j = atoi(id.c_str());

                if ((j >= 0 && j <= 8) && (*c >= '0' && *c <= '8')) {
                    std::cout << std::setw(10) << std::right << "name: " << pb.contacts[j - 1].name << std::endl;
                    std::cout << std::setw(10) << std::right << "surname: " << pb.contacts[j - 1].surname << std::endl;
                    std::cout << std::setw(10) << std::right << "nickname: " << pb.contacts[j - 1].nickname << std::endl;
                    std::cout << std::setw(10) << std::right << "number: " << pb.contacts[j - 1].number << std::endl;
                    std::cout << std::setw(10) << std::right << "secret: " << pb.contacts[j - 1].dark << std::endl;
                    break;
                }
                else std::cout << "Wrong index" << std::endl;
                
            }
        }
        else if (input == "EXIT") std::cout << "Exit Program.";
        else std::cout << "Wrong choice" << std::endl;
    }
    return 0;
}