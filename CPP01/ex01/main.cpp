#include "Zombie.hpp"

int main()
{
    Zombie *zombies = zombieHorde(ZOMBIE_NUM, "Horde");
    if (!zombies) 
        return 1;

    for (int i = 0; i < ZOMBIE_NUM; i++){
        zombies[i].announce();
    }
    
    delete[] zombies;
    zombies = nullptr;

    return 0;
}
