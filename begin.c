#include "global.h"
void begin()
{

    char *user=getenv("USER");
    char hostname[1024];
    hostname[1023] = '\0';
    if(gethostname(hostname, 1023)==-1)
    {
        perror("hostname");
        exit(1);
    }
    printf("\e[1;32m""%s""\e[m",user); 
    printf("\e[1;32m""@""\e[m"); 
    printf("\e[1;32m");
    printf("\e[1;32m""%s:""\e[m", hostname); 
    printf("\e[1;34m");
    printdr(user);
    printf("\e[m");
    printf("  "); 

}
