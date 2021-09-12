//https://codeforces.com/problemset/problem/112/A
#include <iostream>

int main()
{
    std::string firstLine, secondLine;
	std::cin >> firstLine >> secondLine ;
    int result {0} ;
    int firstLineDec {0} ,secondLineDec {0};
    for ( int i = 0 ; i < (int)firstLine.size() ; i++ ) {
        (int)firstLine.at(i) < 97 ? (firstLineDec=(int)firstLine.at(i)+32): firstLineDec=(int)firstLine.at(i);
        (int)secondLine.at(i) < 97 ? (secondLineDec=(int)secondLine.at(i)+32): secondLineDec=(int)secondLine.at(i);
        if (firstLineDec==secondLineDec){
            result=0;
        }else if (firstLineDec < secondLineDec){
            result = -1;
            break ;
        }else {
            result = 1;
            break;
            }
        }
    std::cout << result << std::endl;
	return 0;
}
