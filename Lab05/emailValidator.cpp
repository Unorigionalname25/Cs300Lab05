#include "emailValidator.h"
#include <regex>
#include <iostream>
bool emailValidator(std::string email) {
    std::regex pattern("([A-Za-z0-9]{1,20}\\.[A-Za-z0-9!$&]+@[a-z]{1,20}\\.[a-z]{1,3})" );
    std::string result = "";
    if (std::regex_match(email, pattern)){
        result = "true";
    
    } else {
        result = "false";

    }



    std::cout<<(result)<<std::endl;

    return std::regex_match(email, pattern);
}
