#include <iostream> // we include the iostream library to use cout and cin
#include <iomanip>  // we include the iomanip library to use setprecision
#include <string>   // we include the string library to use string data type

int main()
{
    int secondIn3Hours = 10800;      // 3*60*60
    int _3MinutesInSeconds = 3 * 60; // This is a variable to hold the value of 3 minutes in seconds
    int _5MinutesInSeconds = 5 * 60; // This is a variable to hold the value of 5 minutes in seconds

    float valuePi = 3.141526; // This is the value of pi to 6 decimal places

    std::cout << "result: " << secondIn3Hours << std::endl; // This will print the value of secondIn3Hours to the console
    return 0;                                               // This will return 0 to the operating system, indicating that the program has completed successfully
}
