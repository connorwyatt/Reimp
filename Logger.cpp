#include <iostream>
#include "Logger.h"

void Logger::log(string message, ConsoleColor color)
{
    cout << "\033[0;" << color << "m" << message << "\033[0m";
}

void Logger::new_line()
{
    cout << endl;
}
