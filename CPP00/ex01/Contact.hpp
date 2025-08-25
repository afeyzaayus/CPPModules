#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact {
	private:

		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkestSecret;

	public:

		void setFirstName(std::string name);
		void setLastName(std::string name);
		void setNickName(std::string name);
		void setPhoneNumber(std::string name);
		void setDarkestSecret(std::string name);

		std::string getFirstName(void) const;
		std::string getLastName(void) const;
		std::string getNickName(void) const;
		std::string getPhoneNumber(void) const;
		std::string getDarkestSecret(void) const;

};

#endif