#include <iostream>
#include "CLIArgumentParser.h"
#include "Logger.h"
#include "SyntaxParser.h"

int main(int argc, char *argv[])
{
    CLIArgumentParser argumentParser(argc, argv);

    Logger logger;

    if (argumentParser.has_target_filename())
    {
        const string &target_filename = *argumentParser.get_target_filename();

        SyntaxParser syntaxParser(&logger);

        syntaxParser.parse_from_file(target_filename);

        return 0;
    }

    logger.error();
    logger.log("No filename was provided.", ConsoleColor::YELLOW);
    logger.new_line();

    return 1;
}
