#include "PhoneBook.hpp"

void PhoneBook::menu(void) {
    std::cout << "*******************************" << std::endl;
    std::cout << "** Welcome to the PhoneBook! **" << std::endl;
    std::cout << "*******************************" << std::endl;

    
    char choice;
    
    do
    {
        std::cout << "\n1) ADD a new contact. (a)" << std::endl;
        std::cout << "2) SEARCH a new contact. (s)" << std::endl;
        std::cout << "3) EXIT. (e or q)" << std::endl;
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

    std::getline(std::cin, firstName); //buffer temizliği -> araştır


    std::cout << "First name: ";
    std::getline(std::cin, firstName);

    std::cout << "Last name: ";
    std::getline(std::cin, lastName);

    std::cout << "Nickname: ";
    std::getline(std::cin, nickName);

    std::cout << "Phone number: ";
    std::getline(std::cin, phoneNumber);

    std::cout << "Darkest secret: ";
    std::getline(std::cin, darkestSecret);

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

std::string PhoneBook::setSpace(std::string name) {
    if (name.length() > 10) {
        return name.substr(0, 9) + ".";
    }
    // std::string constructor'u -> araştır bi
    return std::string(10 - name.length(), ' ') + name;
}

void PhoneBook::printTable(void) {
    std::cout << "|" << setSpace("Index") << "|" << setSpace("First Name") << "|" << setSpace("Last Name") << "|" << setSpace("Nickname") << "|" << std::endl;

    for (int i = 0; i < contactCount; i++) {
        std::cout << "|" << setSpace(std::to_string(i)) << "|"
                  << setSpace(contacts[i].getFirstName()) << "|"
                  << setSpace(contacts[i].getLastName()) << "|"
                  << setSpace(contacts[i].getNickName()) << "|" << std::endl;
    }
}

void PhoneBook::searchContact(void) {
    printTable();
    std::cout << "\nEnter the index of the contact to view details: ";
    int index;

    // segfault alyırosun geçersiz indexte dikkat ettt
    
    do {
        std::cin >> index;
        if (index >= 0 && index < contactCount) {
            std::cout << "|" << setSpace(std::to_string(index)) << "|"
                      << setSpace(contacts[index].getFirstName()) << "|"
                      << setSpace(contacts[index].getLastName()) << "|"
                      << setSpace(contacts[index].getNickName()) << "|" << std::endl;
        } else {
            std::cout << "Invalid index. Please try again." << std::endl;
        }
    } while (index < 0 || index >= contactCount);   
}