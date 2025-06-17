#include <iostream>
#include <string>
// class Zombie {
// public:
//     int health;
    
//     Zombie() : health(100) {}

//     void announce() {
//         std::cout << "I am a zombie with " << health << " health!" << std::endl;
//     }
// };

int main() {
    int a = 5;
    const int& ref = a;  // ref is a const reference to a
    // ref = 10;          // Error! You cannot modify a through ref
    a = 10;               // You can still modify a directly
    std::cout << ref << std::endl; 
    return 0;
}
