#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include <string>
# define ZOMBIE_NUM 5

class Zombie {
	private:
		std::string name;

	public:
		Zombie() = default;
		Zombie(std::string name);
		~Zombie();
        void setName(std::string name);
        std::string getName(void) const;
		void announce(void);
		
		
};
	
Zombie* zombieHorde( int N, std::string name );



#endif
