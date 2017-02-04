#ifndef REIMP_LOGGER_H
#define REIMP_LOGGER_H

#include "ConsoleColor.cpp"
#include <string>

using namespace std;

class Logger
{
public:
    void log(string message, ConsoleColor color);

    void new_line();
};


#endif //REIMP_LOGGER_H
