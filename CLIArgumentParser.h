#ifndef REIMP_CLIARGUMENTPARSER_H
#define REIMP_CLIARGUMENTPARSER_H

#include <string>

using namespace std;

class CLIArgumentParser
{
    string *target_filename;
public:
    CLIArgumentParser(int argc, char *argv[]);

    bool has_target_filename();

    string *get_target_filename();
};


#endif //REIMP_CLIARGUMENTPARSER_H
