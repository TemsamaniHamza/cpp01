#ifndef Zombie_hpp
#define Zombie_hpp

#include <string>
#include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
        void announce( void ) {std::cout<< name << std::endl;};
        void setNameZombie(std::string x) { name = x;};
};

Zombie* zombieHorde( int N, std::string name );

#endif 