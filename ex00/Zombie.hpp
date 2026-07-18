#include <iostream>
#include <cctype>
#include <cstdlib>
#include <string>
#include <iomanip>

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

class Zombie
{
    private:
        std::string _name;

    public:
        Zombie();
        ~Zombie();
        Zombie(std::string name);
        void announce(void);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif