#include <iostream>

int main(){
    int midLine;
    int spaceCount;

    std::cout << "Enter diamond size: ";
    std::cin >> midLine;

    if(midLine % 2 == 1 && midLine > 1){
        spaceCount = midLine / 2;
       for(int i = 1; i <= midLine; i+=2){
            std::string repeated(spaceCount, ' ');
            std::cout << repeated;
            for(int j = 1; j <= i; j++){
                std::cout << "*";
            }
            std::cout << "\n";
            spaceCount -= 1;
        }

        spaceCount = 1;

       for(int i = midLine - 2; i >= 1; i -= 2){
            std::string repeated(spaceCount, ' ');
            std::cout << repeated;
            for(int j = 1; j <= i; j++){
                std::cout << "*";
            }
            std::cout << "\n";
            spaceCount += 1;
        }
    }else{
        std::cout << "Input has to be odd or greater than 1.";
    }
    system("pause");
    return 0;
}