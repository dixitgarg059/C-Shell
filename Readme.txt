Here dir/ means a Directory path
echo:
    The echo.c file handles the echo command
    This supports echo abc which prints abc and if we do echo "abc" it prints "abc"

cd:
    The cd.c file handles the cd command with cd ~ ,cd - being supported
    This supports:
        cd dir/
        cd ~
        cd -
        cd

history:
    The history.c handles both the addition of the command to the storage file and the function call history
    history prints the last 10 commands while history n prints last n commands n<=10;

ls:
    The ls.c file handles the various types of ls commands
    This supports:
        ls
        ls -l
        ls -la
        ls -al
        ls -a
        ls dir/
        ls -l dir/
        ls -la dir/
        ls -al dir/
        ls -a dir/

nightswatch:
    The nightswatch.c handles the command nightswatch with "interrupt" and "dirty" being possible arguments
    format: here i is a number
        nightswatch -n i interrupt
        nightswatch -n i dirty 

pinfo:
    The pinfo.c file handles the pinfo command
    The format is:
        pinfo
        pinfo procnum
pwd:
    The pwd.c handles the pwd command


system commands:
    inbuild commands like cp , mkdir ,etc are handled by exe.c file and format is normal (like in actual shell)

->The sep.c file seperates various commands by ;and executes them individually.

->The execute.c file checks the command input and then calls a function appropriately. for eg if input is cd ~,  it will call runcd function

->The printDir.c file prints the current Directory of the shell while replacing the place where the shell is located by with ~

->The input.c file takes command input from user then calls adds it io history

->global.h file contains all function prototypes and contains all c libraries.

->begin.c file takes care of printing user name and hostname.
