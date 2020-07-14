#include "global.h"

void setenv1(char **arguments,int len)
{
    if(len > 3 || len < 2)
    {
        perror("wrong number of arguments!!");
        return ;
    }

    if(arguments[2]==NULL){
        if(setenv(arguments[1],"",1)==-1)              // sets the environment value
        {
            perror("setenv failed!!");

        }
    }
    else
    {
        if(setenv(arguments[1],arguments[2],1)==-1)
        {
            perror("setenv failed!!");
        }
    }

}
