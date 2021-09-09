#include <iostream>

int main()
{
    int firstNum {0}, secondNum {0} , sum {0};
	std::cout << "Enter two digits you want to add seprated by space:" << std::endl;
    std::cin >> firstNum >> secondNum ;
    sum = firstNum + secondNum;
    std:: cout << "The Sum of " <<firstNum <<"and " << secondNum <<" equals to "<< sum << std::endl;
	return 0;
}
