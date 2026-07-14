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
        void announce( void );

        //Esta función crea un zombi, le asigna un nombre y hace que se anuncie a sí mismo.
        void randomChump( std::string name );

    public:
        Zombie();
        //Esta función crea un zombi, le asigna un nombre y lo devuelve para que puedas utilizarlo fuera del ámbito (scope) de la función.
        Zombie* newZombie( std::string name );

};

#endif