/*
 * File: labelgen.cpp
 * ---------------
 * This file has the implementation of class LabelGenerator
 * defined in labelgen.hpp
 *
 * Author:  Kerolos Farah Adeeb
 * Version: 1.0
 * Date:    27 Oct. 2018
 */


#include <iostream>
#include <sstream>
#include "labelgen.h"
using namespace std;

LabelGenerator::LabelGenerator(string newP , int newI)
{
    // access to the private members
    prefix = newP;
    index = newI;
}
string LabelGenerator::nextLabel()
{
    // convert the int number to string
    stringstream ss;
    ss << index;
    string str = ss.str();
    // make the string and the number in one word
    string z = prefix + str;
    index++;
    return z;
}

