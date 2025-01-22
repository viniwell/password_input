//
// Created by VOOleksandrov22 on 1/22/2025.
//

#include <iostream>
#include <conio.h>
#include "passwordInput.h"


int main(){
    std::string password = inputPassword();

    std::cout << "Your password is " << password << "\n";
    std::cout << "Press any to exit: "; getch();
}