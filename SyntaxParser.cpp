#include "SyntaxParser.h"
#include "FileHandler.h"

SyntaxParser::SyntaxParser(Logger *logger)
{
    this->logger = logger;
}

void SyntaxParser::parse_from_file(string filename)
{
    FileHandler fileHandler(logger, filename);

    string file_string = fileHandler.get_string();
}
