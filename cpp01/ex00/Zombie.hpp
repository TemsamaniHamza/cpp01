#ifndef Zombie_hpp
#define Zombie_hpp

#include <string>
#include <iostream>

class Zombie{
    private:
        std::string name;
    public:
        void announce( void ) {std::cout<< name << ": BraiiiiiiinnnzzzZ.." << std::endl;};
        Zombie(std::string name) : name(name) {}
        ~Zombie(void) {
            std::cout << "The name of the zombie is " << name << std::endl;
            };
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );
#endif