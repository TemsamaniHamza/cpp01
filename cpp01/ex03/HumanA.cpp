#include "HumanA.hpp"
#include <string>
#include <iostream>


HumanA::HumanA(std::string nm, Weapon &tyb) :  name(nm) , t(tyb)
{
    std::cout << nm << " " << "is the humanA with " << tyb.getType() << std::endl;
};

