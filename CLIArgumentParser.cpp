#include "CLIArgumentParser.h"

using namespace std;

CLIArgumentParser::CLIArgumentParser(int argc, char *argv[])
{
    if (argc > 1)
    {
        static string filename(argv[1]);

        target_filename = &filename;
    }
}

bool CLIArgumentParser::has_target_filename()
{
    return get_target_filename() != NULL;
}

string *CLIArgumentParser::get_target_filename()
{
    return target_filename;
}