#include <iostream>

int main()
{
    int firstNum{10} , secondNum {20} , temp {0};
	std::cout << "First Number: " << firstNum << "\nSecond Number: " << secondNum << std::endl;
    /*temp=firstNum ;
    firstNum=secondNum ;
    secondNum = temp ;*/
    //without temperory var :
    firstNum = firstNum + secondNum ;
    secondNum = firstNum - secondNum ;
    firstNum = firstNum - secondNum ;
    
    std:: cout << "Now After Swapping\n" << std::endl;
    std::cout << "First Number: " << firstNum << "\nSecond Number: " << secondNum << std::endl ;
     
	return 0;
}
