#ifndef HumanB_hpp
#define HumanB_hpp

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
    private:
        std::string name;
        Weapon *wepn;
    public:
        HumanB(std::string name);
        void setWeapon(Weapon& wpn)
        {
            wepn = &wpn;
        };
        void attack()
        {
            std::cout << name << " attacks with their " << wepn->getType() << std::endl; 
        };
};


#endif