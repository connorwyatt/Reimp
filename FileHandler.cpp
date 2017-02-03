#include <fstream>
#include "FileHandler.h"

using namespace std;

FileHandler::FileHandler(string filename)
{
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
