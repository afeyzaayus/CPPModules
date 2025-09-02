#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook {
	private:
		Contact contacts[8];
        int contactCount = 0;

	public:
        //PhoneBook();
        void menu();
        void addContact();
        void searchContact();

};


#endif