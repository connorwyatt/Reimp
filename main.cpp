#include <iostream>
#include "CLIArgumentParser.h"
#include "FileHandler.h"

int main(int argc, char *argv[])
{
    CLIArgumentParser argumentParser(argc, argv);

    if (argumentParser.has_target_filename())
    {
        FileHandler file(*argumentParser.get_target_filename());

        string file_string = file.get_string();

        return 0;
    }

    cout << "No filename was provided." << endl;

    return 1;
}
