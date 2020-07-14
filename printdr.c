#include "global.h"
void printdr(char *user)
{
    char cwd[1024];
    getcwd(cwd,sizeof(cwd));
    int n=strlen(tilda);
    int flag=1;
    if(strlen(cwd)<n)
    {
        flag=0;

    }
    else
    {
        for(int i=0;i<n;i++)
        {
            if(cwd[i]!=tilda[i])
            {
                flag=0;
                break;
            }
        }
    }
    if(flag==1)
    {
        printf("~%s$ ",cwd+n);


    }
    else
    {
        printf("%s$ ",cwd);
    }
}
