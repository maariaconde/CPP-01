
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB antonio("Antonio");
		antonio.attack();
		antonio.setWeapon(club);
        antonio.attack();
		club.setType("some other type of club");
		antonio.attack();
	}
	return (0);
}
