//
// Created by VOOleksandrov22 on 1/22/2025.
//

#include <iostream>
#include <conio.h>
#include "passwordInput.h"



std::string inputPassword(){
    std::string result;
    char inputtedChar;
    inputtedChar = (char)getch();


    while (int(inputtedChar) != 13){
        if (inputtedChar == 127 || inputtedChar == 8){
            if (result.size() > 0){
                result.erase(result.size()-1);
                std::cout << "\b \b";
            }

        } else{
            result += inputtedChar;

            std::cout << "*";
        }

        inputtedChar = (char)getch();
    }
    std::cout << "\n";

    return result;

}