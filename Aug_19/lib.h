#ifndef LIB_H
#define LIB_H
#include <string>

class User {
	private:
		std::string m_email;
		std::string m_password;
		std::string m_fullname;

	public:
		// constructors
		User();
		User(std::string email, std::string password, std::string fullname);
		User(const User& obj) = delete;
		
		// getters 
		std::string getEmail() const;
		std::string getFullname() const;

		// setters
		void setEmail(std::string email);
		void setFullname(std::string fullname);
		void setPassword(std::string password);

		// methods
		void changePassword();
		void updateEmail();
		bool is_valid(std::string password);
		bool is_valid_email(std::string email);
		bool checkPassword(std::string password) const;
};

#endif // LIB_H
