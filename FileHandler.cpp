#include <fstream>
#include "FileHandler.h"

using namespace std;

FileHandler::FileHandler(Logger *logger, string filename)
{
    logger->info();
    logger->log("Loading file: \"");
    logger->log(filename, ConsoleColor::MAGENTA);
    logger->log("\".");
    logger->new_line();

    ifstream file(filename);

    static vector<string> file_lines;
    string line;

    if (file.is_open())
    {
        while (getline(file, line))
        {
            file_lines.push_back(line);
        }

        file.close();
    }

    lines = &file_lines;

    logger->info();
    logger->log("File loaded.");
}

vector<string> *FileHandler::get_lines()
{
    return lines;
}

string FileHandler::get_string()
{
    string file_string;

    for (int i = 0; i < (*lines).size(); i++)
    {
        string line = (*lines)[i];

        file_string += line + '\n';
    }

    return file_string;
}
