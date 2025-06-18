#include "Zombie.hpp"

// int main()
// {
//     Zombie* t = new Zombie("x");
//     t->announce();
//     delete(t);
//     t = newZombie("X");
//     delete(t);
//     randomChump("Omar");
// }

int main()
{
    Zombie *t = new Zombie();
    t->announce();
    delete(t);
    t = newZombie("x");
    delete(t);
    randomChump("omar");
}