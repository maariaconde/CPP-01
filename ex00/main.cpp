
#include "Zombie.hpp"

int main(void)
{
    Zombie* zombie;

    randomChump("Antonio");

    std::cout << "-----------------------------" << std::endl;

    zombie = newZombie("Bob");
    zombie->announce();

    delete zombie;

    return (0);
}

