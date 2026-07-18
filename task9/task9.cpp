#include <iostream>

int main()
{
    int number1, number2, number3, number4;

    std::cout << "Input 1st part of IP address:";
    std::cin >> number1;
    std::cout << "Input 2nd part of IP address:";
    std::cin >> number2;
    std::cout << "Input 3rd part of IP address:";
    std::cin >> number3;
    std::cout << "Input 4th part of IP address:";
    std::cin >> number4;

    // numbers must be in the range of 1 to 255
    if (number1 < 1 || number1 > 255 || number2 < 1 || number2 > 255 || number3 < 1 || number3 > 255 || number4 < 1 || number4 > 255)
    {
        std::cout << "Numbers must be in the range of 1 to 255" << std::endl;
        return -1;
    }
    // get four numbers from user and connect them with dots to form an IP address
    std::cout << "IP address: " << number1 << "." << number2 << "." << number3 << "." << number4 << std::endl;
    return 0;
}