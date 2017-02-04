#ifndef REIMP_LOGGER_H
#define REIMP_LOGGER_H

#include "ConsoleColor.cpp"
#include <string>

using namespace std;

class Logger
{
    string get_color(ConsoleColor color);

    string get_color_reset();

public:
    void log(string message);

    void log(string message, ConsoleColor color);

    void info();

    void error();

    void new_line();
};


#endif //REIMP_LOGGER_H
