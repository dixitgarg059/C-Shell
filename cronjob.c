#include "global.h"
void cronjob(char **arguments,int n)
{
    if(n<7)
    {
        perror("invalid syntax\n");
        return;
    }

    if(strcmp(arguments[1],"-c")==0 && strcmp(arguments[n-2],"-p")==0 && strcmp(arguments[n-4],"-t")==0){
        char str[100];
        for(int i=2;i<=(n-5);i++)
        {
            strcat(str,arguments[i]);
            strcat(str," ");
        }
        int Tmax=atoi(arguments[n-1]),period=atoi(arguments[n-3]);
                // printf("%s",str);
                // exit(0);
        pid_t pid=fork();
        cron1=1;
        if(pid < 0)
        {
            perror("fork failed\n");
            exit(0);
        }
        else if(pid ==0)
        {   
            int t=0;
            while(t<=Tmax)
            {
                int mn=Tmax-t;
                if(mn > period)
                    mn=period;
                sleep(mn);
                t+=period;
                if(t>Tmax)
                {
                    break;
                }
                execute(str);
                if(t+period > Tmax)
                    break;
                printf("\n");
                fflush(stdout);
                begin();
                fflush(stdout);

            }
            printf("\n");
            fflush(stdout);
            begin();
            fflush(stdout);
            exit(0);
        }
        else
        {
            cronjobpid=pid;
        }



    }
    else
    {
        perror("invalid syntax\n");
        return;
    }

    return ;
}
