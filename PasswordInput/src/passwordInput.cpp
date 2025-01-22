//
// Created by VOOleksandrov22 on 1/22/2025.
//

#include <iostream>
#include <conio.h>

#include "passwordInput.h"
#include "options.h"



std::string inputPassword(const Options &options){
    std::string password;
    char inputtedChar;

    std::cout << options.message;
    inputtedChar = (char)getch();


    while (int(inputtedChar) != 13){
        if (inputtedChar == 127 || inputtedChar == 8){
            if (password.size() > 0){
                password.erase(password.size() - 1);
                std::cout << "\b \b";
            }

        } else{
            password += inputtedChar;

            std::cout << "*";
        }

        inputtedChar = (char)getch();
    }
    std::cout << "\n";


    if (options.doubleCheck){
        Options optionsForDoubleCheck = {
            "Reenter the password : ",
            false,
            nullptr
        };

        std::string reenteredPassword = inputPassword(optionsForDoubleCheck);
        if (password != reenteredPassword){
            throw std::runtime_error("Passwords didn't match!");
        }
    }

    if (!(options.validationCallback == nullptr || options.validationCallback(password))){
        throw std::runtime_error("Validation failed!");
    }

    return password;

}