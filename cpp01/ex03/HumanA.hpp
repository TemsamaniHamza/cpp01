#ifndef HumanA_hpp
#define HumanA_hpp

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
    private:
        std::string name;
        Weapon& t;
    public:
        HumanA(std::string nm,Weapon& t);
        void attack(){ std::cout << name << " attacks with their " << t.getType() << std::endl;};
        void HumsetName(std::string nm) { name = nm;};
};  

#endif