#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stddef.h>
#include <stdlib.h>
#include <ctype.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <errno.h>
#include <netdb.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <dirent.h>
#include <pwd.h>
#include <time.h>
#include <grp.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <string.h>
#include <sys/wait.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <fcntl.h>
#include <dirent.h>
#include <pwd.h>
#include <time.h>
#include <grp.h>
#include <curses.h>
#include <ncurses.h>
#include <time.h>
char tilda[100];
char previous[1000];
char buffer[100000];
char *buf;
void printdr(char *);
void begin();
void runcd(char *,int);
void addhistory(char *);
void callpinfo(int);
void printhistory(int);
void runecho(char *);
void runpwd();
void runls(char *,char *,int,int);
void runexecvp(char **,int);
void nightswatch(int,int);
void execute(char *);
void commandsep(char *);
void execute_pipe(char *);
int takeInput(char *);
void db1();
void setenv1(char **,int );
char *trim2(char *,const char *);
char *trim(char *);
char *slice(char *,int l,int f);
int redirect(char *,int,int);
void unsetenv1(char **,int);
void printjobs();
int jobslen;
struct job{
	int id;
	char name[1000];
	int  status;
};
int cron1;
int cronjobpid;
void giverecenthistory(int,char *);
struct job jobs[10000];
void kjobs(char **);
void fg_or_bg(char **,int);
void overkill();
void sigintHandler (int);
void sigtstpHandler(int); 
void cronjob(char **,int);
int previousid;
