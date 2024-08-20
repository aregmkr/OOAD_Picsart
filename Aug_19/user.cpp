#include "lib.h"
#include <iostream>
#include <limits>

// ctors
User::User() : m_email{" "}, m_password{" "}, m_fullname{" "} {}

User::User(std::string email, std::string password, std::string fullname) {
	if (is_valid(password)) {
		m_password = password;
	} else {
		std::cout << "Invalid password format." << std::endl;
	}
	if (is_valid_email(email)) {
		m_email = email;
	} else {
		std::cout << "Invalid email format." << std::endl;
	}
	m_fullname = fullname;
}

// getters
std::string User::getEmail() const {
	return m_email;
}

std::string User::getFullname() const {
	return m_fullname;
}

// setters
void User::setFullname(std::string fullname) {
	m_fullname = fullname;
}

void User::setEmail(std::string email) {
	if (is_valid_email(email)) {
		m_email = email;
		return ;
	}
	std::cout << "Not valid email." << std::endl;
}

void User::setPassword(std::string password) {
	if (is_valid(password)) {
		m_password = password;
		return;
	}
	std::cout << "Not valid password." << std::endl; 
}

// methods

bool User::is_valid_email(std::string email) {
	bool symbol = false;
	size_t i = 0;
	while(email[i] != '\0') {
		if (email[i] == '&') {
			symbol = true;
		}
		++i;
	}
	return symbol;
}

bool User::checkPassword(std::string password) const {
	return m_password == password;
}

bool User::is_valid(std::string password) {
	bool symbol = false;
	bool Haslength = false;
	bool letter = false;
	size_t length = 0;
	while(password[length] != '\0') {
		if (password[length] >= 35 && password[length] <= 38) {
			symbol = true;
		} else if ((password[length] >= 'A' && password[length] <= 'Z') || (password[length] >= 'a' && password[length] <= 'z')) {
			letter = true;
		}
		++length;
	}
	Haslength = (length >= 4) ? true : false;
	return symbol && Haslength && letter;
}

void User::changePassword() {
	std::string tmp;
	std::string new_password;
	std::cout << "Enter current password." << std::endl;
	std::cin >> tmp;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear buffer
	if (checkPassword(tmp)) {
		std::cout << "Enter new password." << std::endl;
		std::cin >> new_password;
    	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear buffer
		setPassword(new_password);
		std::cout << "Password changed successfully!" << std::endl;
	} else {
		std::cout << "The current password is incorrect." << std::endl;
	}
}

void User::updateEmail() {
	std::string new_email;
	std::string tmp;
	std::cout << "Enter current password." << std::endl;
	std::cin >> tmp;
	if (checkPassword(tmp)) {
		std::cout << "Enter new email." << std::endl;
		std::cin >> new_email;
		if (is_valid_email(new_email)) {
			setEmail(new_email);
			std::cout << "Email updated successfully!" << std::endl;
		} else {
			std::cout << "New email does not meet criteria." << std::endl;
		}
	} else {
		std::cout << "The current password is incorrect." << std::endl;
	}
}
