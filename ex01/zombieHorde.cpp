
#include "Zombie.hpp"

//permite crear varios zombies sin necesidad de ponerle un nombre (constructor por defecto)
Zombie::Zombie(){}

Zombie *zombieHorde( int N, std::string name )
{
    if(N <= 0)
        return(NULL);
    Zombie *ZombieHorde;

    ZombieHorde = new Zombie[N];

    for(int i = 0; i < N; i++)
    {
        ZombieHorde[i] = name;
    }
    return(ZombieHorde);
}
