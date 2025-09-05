#include "Zombie.hpp"

int main()
{
    Zombie zombie("frankenstein");
    zombie.announce();

    Zombie *ptr = newZombie("dracula");
    ptr->announce();
    delete ptr;
    return 0;

}