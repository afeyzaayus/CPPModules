#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name) {
	this->name = name;
}

void Zombie::announce(void) {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie() {
	std::cout << "Zombie " << name << " has been destroyed." << std::endl; 
}

void Zombie::setName(std::string name) {
	this->name = name;
}

std::string Zombie::getName(void) const {
	return name;
}
