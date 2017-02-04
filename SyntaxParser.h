#ifndef REIMP_SYNTAXPARSER_H
#define REIMP_SYNTAXPARSER_H

#include "Logger.h"

using namespace std;

class SyntaxParser
{
    Logger *logger = NULL;
public:
    SyntaxParser(Logger *logger);

    void parse_from_file(string filename);
};


#endif //REIMP_SYNTAXPARSER_H
