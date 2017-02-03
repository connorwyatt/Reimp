#ifndef REIMP_FILEUTILS_H
#define REIMP_FILEUTILS_H

#include <string>
#include <vector>

using namespace std;

class FileHandler
{
    vector<string> *lines;
public:
    FileHandler(string filename);

    vector<string> *get_lines();

    string get_string();
};


#endif //REIMP_FILEUTILS_H
