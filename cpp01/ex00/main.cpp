#include "Zombie.hpp"

int main()
{
    Zombie* t = new Zombie();
    // t->announce();
    delete(t);
    t = newZombie("X");
    delete(t);
    randomChump("Omar");
}