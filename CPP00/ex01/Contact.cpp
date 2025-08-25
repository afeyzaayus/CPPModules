#include "Contact.hpp"

// setter
void Contact::setFirstName(std::string name) {
	firstName = name;
}

void Contact::setLastName(std::string name) {
	lastName = name;
}

void Contact::setNickName(std::string name) {
	nickName = name;
}

void Contact::setPhoneNumber(std::string name) {
	phoneNumber = name;
}

void Contact::setDarkestSecret(std::string name) {
	darkestSecret = name;
}

//getter

std::string Contact::getFirstName(void) const {
	return (firstName);
}

std::string Contact::getLastName(void) const {
	return (lastName);
}

std::string Contact::getNickName(void) const {
	return (nickName);
}

std::string Contact::getPhoneNumber(void) const {
	return (phoneNumber);
}

std::string Contact::getDarkestSecret(void) const {
	return (darkestSecret);
}
