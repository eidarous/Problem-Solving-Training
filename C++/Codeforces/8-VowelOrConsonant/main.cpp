#include <iostream>

int main()
{
    char let;
	std::cout << "Enter a letter to check if it's Vowel or Consonant : "  ;
    std::cin >> let ;
    if((let =='a')|(let =='e')|(let =='o')|(let =='u')|(let =='i')|(let =='y')){ 
        std::cout << "it's Vowel" << std::endl ;
        }
        else{
        std::cout << "it's Consonant" << std::endl ;}
    
	return 0;
}
