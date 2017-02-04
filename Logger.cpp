#include <iostream>
#include "Logger.h"

const string INFO = "[INFO ]: ";
const string ERROR = "[ERROR]: ";

void Logger::log(string message)
{
    cout << message;
}

void Logger::log(string message, ConsoleColor color)
{
    log(get_color(color));
    log(message);
    log(get_color_reset());
}

void Logger::info()
{
    log(INFO, ConsoleColor::CYAN);
}

void Logger::error()
{
    log(ERROR, ConsoleColor::RED);
}

void Logger::new_line()
{
    cout << endl;
}

string Logger::get_color(ConsoleColor color)
{
    return "\033[0;" + to_string(color) + "m";
}

string Logger::get_color_reset()
{
    return "\033[0m";
}
