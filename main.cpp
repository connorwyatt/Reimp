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
        const string &target_filename = *argumentParser.get_target_filename();

        logger.info();
        logger.log("Loading file: \"");
        logger.log(target_filename, ConsoleColor::MAGENTA);
        logger.log("\".");
        logger.new_line();

        FileHandler file(target_filename);

        logger.info();
        logger.log("File loaded.");

        string file_string = file.get_string();

        return 0;
    }

    logger.error();
    logger.log("No filename was provided.", ConsoleColor::YELLOW);
    logger.new_line();

    return 1;
}
