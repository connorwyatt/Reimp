#ifndef REIMP_AST_H
#define REIMP_AST_H

#include <string>

using namespace std;

class AST
{
public:
    virtual string test() = 0;

protected:
    AST();
};


#endif //REIMP_AST_H
