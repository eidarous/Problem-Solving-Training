/*Let's consider a word too long, if its length is strictly more than 10 characters.
 All too long words should be replaced with a special abbreviation.
This abbreviation is made like this:
 we write down the first and the last letter of a word and between them
 we write the number of letters between the first and the last letters.
 That number is in decimal system and doesn't contain any leading zeroes.
Thus, "localization" will be spelt as "l10n", and "internationalization» will be spelt as "i18n"*/


#include <iostream>
#include <vector>


int main()
{
    int numOfWord;
    std::string word;
    std::cin >> numOfWord ;
    std::vector < std::string > words ;
    
    for (int i = 0 ; i < numOfWord ; i++){
        	std::cin >> word ;
            words.push_back(word);
        }
        
    for (int i = 0 ; i < numOfWord ; i++){
        if ( words.at(i).size() <= 10 ){
        	std::cout << words.at(i) <<std::endl ;
        }else{
            std::cout << words.at(i).replace(1,words.at(i).size()-2,std::to_string(words.at(i).size()-2))<<std::endl;
            }
        }
	return 0;
}
