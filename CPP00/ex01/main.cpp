
#include <iostream>
#include <iomanip>
#include <string>
#include "Contact.hpp"
#include "PhoneBook.hpp"

void printContact(Contact c)
{

} 

int main()
{
    PhoneBook pb;
    pb.index = 0;
    std::string input;

    pb.contacts[0].name = "Ahmet";
    pb.contacts[0].surname = "Yılmaz";
    pb.contacts[0].nickname = "Aho";
    pb.contacts[0].number = "111111111";
    pb.contacts[0].dark = "Kahverengi";

    // Kişi 2
    pb.contacts[1].name = "Ayşe";
    pb.contacts[1].surname = "Demir";
    pb.contacts[1].nickname = "Aysu";
    pb.contacts[1].number = "222222222";
    pb.contacts[1].dark = "Siyah";

    // Kişi 3
    pb.contacts[2].name = "Mehmet";
    pb.contacts[2].surname = "Kaya";
    pb.contacts[2].nickname = "Memo";
    pb.contacts[2].number = "333333333";
    pb.contacts[2].dark = "Mavi";

    // Kişi 4
    pb.contacts[3].name = "Fatma";
    pb.contacts[3].surname = "Arslan";
    pb.contacts[3].nickname = "Fatoş";
    pb.contacts[3].number = "444444444";
    pb.contacts[3].dark = "Yeşil";

    // Kişi 5
    pb.contacts[4].name = "Ali";
    pb.contacts[4].surname = "Çelik";
    pb.contacts[4].nickname = "Alibaba";
    pb.contacts[4].number = "555555555";
    pb.contacts[4].dark = "Turuncu";

    // Kişi 6
    pb.contacts[5].name = "Zeynep";
    pb.contacts[5].surname = "Şahin";
    pb.contacts[5].nickname = "Zuzu";
    pb.contacts[5].number = "666666666";
    pb.contacts[5].dark = "Mor";

    // Kişi 7
    pb.contacts[6].name = "Can";
    pb.contacts[6].surname = "Kurt";
    pb.contacts[6].nickname = "Cancağız";
    pb.contacts[6].number = "777777777";
    pb.contacts[6].dark = "Pembe";

    // Kişi 8
    pb.contacts[7].name = "Selin";
    pb.contacts[7].surname = "Kara";
    pb.contacts[7].nickname = "Seli";
    pb.contacts[7].number = "888888888";
    pb.contacts[7].dark = "Sarı";

    while (input != "EXIT")
    {
        std::cout << "\033[0;36m\033[1mADD, SEARCH, EXIT -->\033[0m";
        std::getline(std::cin, input);
        if (input == "ADD")
        {
            while (1)
            {
                std::cout << "Enter name: ";
                std::getline(std::cin, pb.contacts[pb.index].name);
                std::cout << "Enter surname: ";
                std::getline(std::cin, pb.contacts[pb.index].surname);
                std::cout << "Enter nickname: ";
                std::getline(std::cin, pb.contacts[pb.index].nickname);
                std::cout << "Enter number: ";
                std::getline(std::cin, pb.contacts[pb.index].number);
                std::cout << "Enter secret: ";
                std::getline(std::cin, pb.contacts[pb.index].dark);
                if (pb.contacts[pb.index].name.empty() || pb.contacts[pb.index].surname.empty() || pb.contacts[pb.index].nickname.empty() || pb.contacts[pb.index].number.empty() || pb.contacts[pb.index].dark.empty())
                {
                    std::cout << "All fields must be filled out" << std::endl;
                }
                else
                {
                    pb.index++;
                    break;
                }
                if (pb.index == 8)
                    pb.index = 0;
            }
        }
        else if (input == "SEARCH")
        {
            int i = 1;
            std::string id;
            int j;
            const char *c;

            std::cout << "prints phone book" << std::endl;

            while (i <= 8)
            {
				
                std::cout << std::setw(10) << i << "|";
				printContact(pb.contacts[i - 1]);
				std::endl;
                i++;
            }
            while (1)
            {
                std::cout << "Enter index number: ";
                std::getline(std::cin, id);
                c = id.c_str();
                j = atoi(id.c_str());
                if ((j >= 0 && j <= 8) && (*c >= '0' && *c <= '8'))
                {
                    std::cout << std::setw(10) << std::left << "name: " << pb.contacts[j - 1].name << std::endl;
                    std::cout << std::setw(10) << std::left << "surname: " << pb.contacts[j - 1].surname << std::endl;
                    std::cout << std::setw(10) << std::left << "nickname: " << pb.contacts[j - 1].nickname << std::endl;
                    std::cout << std::setw(10) << std::left << "number: " << pb.contacts[j - 1].number << std::endl;
                    std::cout << std::setw(10) << std::left << "secret: " << pb.contacts[j - 1].dark << std::endl;
                    break;
                }
                else
                {
                    std::cout << "Wrong index" << std::endl;
                }
            }
        }
        else if (input == "EXIT")
        {
            std::cout << "Exit Program.";
        }
        else
        {
            std::cout << "Wrong choice" << std::endl;
        }
    }

    return 0;
}