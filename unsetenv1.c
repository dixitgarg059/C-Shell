#include "global.h"
void unsetenv1(char **arguments,int l)
{
    if(l!=2)
    {
        perror("wrong number of arguments!!");
        return ;                                    // unset the environment variable
    }
    if(unsetenv(arguments[1])!=0)
    {
        perror("unsetenv failed!\n");
        return ;
    }
}
