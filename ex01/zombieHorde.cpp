
#include "Zombie.hpp"

Zombie *zombieHorde( int N, std::string name )
{
    if(N <= 0)
        return(NULL);
        
    Zombie *ZombieHorde;

    ZombieHorde = new Zombie[N];

    for(int i = 0; i < N; i++)
    {
        ZombieHorde[i].setName(name);
    }
    return(ZombieHorde);
}
