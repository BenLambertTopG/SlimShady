#include <iostream>
#include <string>

int main()
{

    std::string FirstName;
    std::string SecondName;
    std::string FullName;

    std::cout << "Please Enter your full name: ";
    std::cin >> FirstName >> SecondName;
    FullName = FirstName + " " + SecondName;

    std::cout << "\nSo your First name is " + FirstName + " and  your Second name is " + SecondName;
    std::cout << "\nSo your full name is " + FullName;
    std::cout << "\nWow that's " << FullName.length() - 1 << " characters long";

    return 0;
}