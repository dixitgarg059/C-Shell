#include "global.h"
void callpinfo(int pid)
{
    char pp[100];
    if(pid==-1)
    {
        pid=getpid();
    }
    sprintf(pp,"%d",pid);
    char path1[100]="/proc/";
    char path2[100];
    strcat(path1,pp);
    strcpy(path2,path1);
    strcat(path1,"/stat");
    strcat(path2,"/exe");                        // go into file 
    char buffer[10000],buffer2[10000],buffer3[10000];
    int fd=open(path1,O_RDONLY);
    if(fd<0)
    {
        perror("Unable to Open File!!\n");
        exit(0);
    }
    read(fd,buffer,10000);
    char *ptr=strtok(buffer," ");
    char *tokens[10000];
    int count_tokens=0;
    while(ptr!=NULL)
    {
        tokens[count_tokens++]=ptr;
        ptr=strtok(NULL," ");
    }
    readlink(path2,buffer2,5000);
    char *executable_path=realpath(path2,buffer3);     // obtaining executable path
    printf("pid -- %d\n",pid);
    printf("Process Status -- %s\n",tokens[2]);
    printf("Memory -- %s\n",tokens[22]);
    printf("Executable Path -- %s\n",buffer3);
}
