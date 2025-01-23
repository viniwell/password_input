//
// Created by VOOleksandrov22 on 1/22/2025.
//

#include <iostream>
#include <conio.h>
#include "passwordInput.h"


int main(){
    Options options = {
        "Test message: ",
        false,
        [](const std::string &password) -> bool {
            return password.size() > 5;
        }
    };

    std::string password;
    try {
        password = inputPassword(options);
    } catch(std::runtime_error &e) {
        std::cout << e.what() << "\n";
        return 1;
    }


    std::cout << "Your password is " << password << "\n";
    std::cout << "Press any to exit: "; getch();
}