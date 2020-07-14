#include "global.h"
void runcd(char *argu,int f1)
{

    if(f1==0)
    {
        strcpy(argu,tilda);
    }
    if(strcmp(argu,"-")==0)
    {
        if(strcmp(previous,"INVALID")==0)
        {
            perror("cd: OLDPWD not set\n");
            return ;
        }
        else
        {
            strcpy(argu,previous);

        }
    }

    else if(strcmp(argu,"~")==0)
    {
        strcpy(argu,tilda);
    }
    getcwd(previous,100);
    int status = chdir(argu);
    if (status != 0) {
        perror("ERROR");
        return;
    }
}
