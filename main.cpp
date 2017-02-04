#include <iostream>
#include "CLIArgumentParser.h"
#include "FileHandler.h"
#include "Logger.h"

int main(int argc, char *argv[])
{
    CLIArgumentParser argumentParser(argc, argv);

    Logger logger;

    if (argumentParser.has_target_filename())
    {
        FileHandler file(*argumentParser.get_target_filename());

        string file_string = file.get_string();

        return 0;
    }

    logger.log("No filename was provided.", ConsoleColor::RED);
    logger.new_line();

    return 1;
}
