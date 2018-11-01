/*
 * File: labelgen.hpp
 * ---------------
 * This file has the definition of class LabelGenerator
 *
 * Author:  Kerolos Farah Adeeb
 * Version: 1.0
 * Date:    27 Oct. 2018
 */

#ifndef _labelgen_hpp
#define _labelgen_hpp

#include <iostream>
#include <string>

class LabelGenerator
{
private:
    std::string prefix;
    int index;
public:
    // constructor takes the string and the first number of the sequence
    LabelGenerator(std::string newP , int newI);
    // function return the string with the first number in the sequence
    std::string nextLabel();
};

#endif // _labelgen_hpp

