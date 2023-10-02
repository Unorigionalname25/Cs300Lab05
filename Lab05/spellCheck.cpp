#include "spellCheck.h"
#include <iostream>
#include <string>
#include <regex>

std::string spellCheck(std::string recLetter, std::string studentName){


std::regex badName ("[Bb]art[a-zA-Z]+");

recLetter = std::regex_replace(recLetter, badName, studentName);


std::cout<< recLetter<< std::endl;
return recLetter;



}