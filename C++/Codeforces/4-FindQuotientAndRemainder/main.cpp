#include <iostream>

int main()
{
    int firstNum {0}, secondNum {0} ,quotient {0}, remainder {0};
    double result{0.0};
	std::cout << "Enter two digits you want to divide seprated by space:" << std::endl;
    std::cin >> firstNum >> secondNum ;
    result = double (firstNum) / secondNum;
    quotient = firstNum / secondNum ;
    remainder = firstNum % secondNum;
    std:: cout << "The Result of : " <<firstNum <<"/" << secondNum <<" equals to: "<< result << std::endl;
    std::cout << "Quotient: " << quotient << "\nRemainder: " << remainder << std::endl ;
	return 0;
}
