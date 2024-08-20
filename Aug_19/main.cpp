#include "lib.h"
#include <iostream>
#include <string>
#include <limits>

int main()
{
	char yes = ' ';
	User obj1("stalin@ussr.com", "1945$win", "Joseph Stalin");
	User obj2;

	std::cout << "Do you want to create new user? " << std::endl;
	std::cout << "Y/N -> ";
	std::cin.get(yes);

	if (yes == 'y' || yes == 'Y') {
	    std::string fullname;
            std::string email;
            std::string password;
            std::cout << "Enter user fullname" << std::endl;
            std::getline(std::cin, fullname);
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            obj2.setFullname(fullname);
            std::cout << "Enter user email" << std::endl;
            std::cin >> email;
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            obj2.setEmail(email);
            std::cout << "Enter user password" << std::endl;
            std::getline(std::cin, password);
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            obj2.setPassword(password);
		while (true) {
			int action = 0;
			std::cout << "1 - > change password, 2 -> update email, 3 -> exit" << std::endl;
			std::cin >> action;
			switch(action) {
				case 1: 
					obj2.changePassword();
					break;
				case 2:
					obj2.updateEmail();
					break;
				case 3: 
					std::cout << "OK" << std::endl;
					return 0;
			}
		}
	}
	std::cout << "OK" << std::endl;
	return 0;
}
