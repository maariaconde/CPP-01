
#include "Zombie.hpp"

void Zombie::setName(std::string name)
{
    _name = name;
}

Zombie::~Zombie()
{
    std::cout << _name << " has been destroyed" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}



