
#include <iostream>
#include <string>

int main()
{
    std::string myName = "Jack Wangi";
    std::cout << "My name is " + myName << std::endl;

    std::string favFood = "mac and cheese";
    std::cout << "My favorite food is " + favFood + "." << std::endl;

    int classCred;
        classCred = 4;
        std::cout << classCred << std::endl;

    int maxCred;
        maxCred = 18;
        std::cout << maxCred << std::endl;

    int perCent;
    perCent = (float)classCred / (float)maxCred * 100;
    std::cout << perCent << std::endl;

    return 0;

}
