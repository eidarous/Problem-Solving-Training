#include <iostream>

int main()
{
    int number;
	std::cout << "Enter a number to check if it's even or odd : "  ;
    std::cin >> number ;
    number%2==0 ? std::cout << "it's even" << std::endl :  std::cout << "it's odd" << std::endl ;
	return 0;
}
