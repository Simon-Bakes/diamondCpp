#include <iostream>

int main(){
    int midLine;

    std::cout << "Enter diamond size: ";
    std::cin >> midLine;

    if(midLine % 2 == 1 && midLine > 1){
       for(int i = 0; i <= midLine-1; i+=2){
            std::cout << " ";
        for(int j = 0; j <= i; j++){
            std::cout << "*";
        }
        std::cout << "\n";
       }
       for(int i = midLine-1; i >= 0; i-=2){
            std::cout << " ";
        for(int j = i; j >= 2; j--){
            std::cout << "*";
        }
        std::cout << "\n";
       }
    }else{
        std::cout << "Input has to be odd or greater than 1.";
    }
}