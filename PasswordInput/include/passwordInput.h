//
// Created by VOOleksandrov22 on 1/22/2025.
//

#ifndef PASSWORD_INPUT_PASSWORDINPUT_H
#define PASSWORD_INPUT_PASSWORDINPUT_H

#include <iostream>

#include "options.h"

Options defaultOptions = {
    "Input password: ",
    true,
    nullptr
};


std::string inputPassword(const Options &options = defaultOptions);


#endif //PASSWORD_INPUT_PASSWORDINPUT_H
