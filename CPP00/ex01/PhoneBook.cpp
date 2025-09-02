#include "PhoneBook.hpp"

void PhoneBook::menu(void) {
    std::cout << "*******************************" << std::endl;
    std::cout << "** Welcome to the PhoneBook! **" << std::endl;
    std::cout << "*******************************" << std::endl;

    std::cout << "1) ADD a new contact. (a)" << std::endl;
    std::cout << "2) SEARCH a new contact. (s)" << std::endl;
    std::cout << "3) EXIT. (e or q)" << std::endl;

    char choice;
    
    do
    {
        std::cout << "\nPlease enter a choice: " << std::endl;
        std::cin >> choice;
        if (choice == 'a')
            addContact();
        else if (choice == 's')
            searchContact();
        else if (choice == 'e' || choice == 'q')
            std::cout << "Exiting PhoneBook. Goodbye!" << std::endl;
        else
            std::cout << "Invalid choice. Please try again." << std::endl;
    } while (choice != 'e' && choice != 'q');
}


void PhoneBook::addContact(void) {
    std::string firstName, lastName, nickName, phoneNumber, darkestSecret;

    std::cout << "First name: ";
    std::cin >> firstName;
    std::cout << "Last name: ";
    std::cin >> lastName;
    std::cout << "Nickname: ";
    std::cin >> nickName;
    std::cout << "Phone number: ";
    std::cin >> phoneNumber;
    std::cout << "Darkest secret: ";
    std::cin >> darkestSecret;

    if (contactCount < 8) {
        contacts[contactCount].setFirstName(firstName);
        contacts[contactCount].setLastName(lastName);
        contacts[contactCount].setNickName(nickName);
        contacts[contactCount].setPhoneNumber(phoneNumber);
        contacts[contactCount].setDarkestSecret(darkestSecret);
    } else {
        contacts[0].setFirstName(firstName);
        contacts[0].setLastName(lastName);
        contacts[0].setNickName(nickName);
        contacts[0].setPhoneNumber(phoneNumber);
        contacts[0].setDarkestSecret(darkestSecret);
    }
    contactCount++;
}

void printTable(void) {
    std::cout << "-------------------------------------" << std::endl;
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    std::cout << "-------------------------------------" << std::endl;

    for (int i = 0; i < contactCount; i++) {
        std::cout << "| " << i << " | "
                  << contacts[i].getFirstName() << " | "
                  << contacts[i].getLastName() << " |" << std::endl;
    }

    std::cout << "-------------------------------------" << std::endl;
}

void PhoneBook::searchContact(void) {

}