# C-Shell
My Bash Shell in C with features like piping redirection,foreground processes ,background processes and much more!



Here dir/ means a Directory path

    echo: The echo.c file handles the echo command This supports echo abc which prints abc and if we do echo "abc" it prints "abc"

    ## cd: The cd.c file handles the cd command with cd ~ ,cd - being supported This supports: cd dir/ cd ~ cd - cd

    ## history: The history.c handles both the addition of the command to the storage file and the function call history history prints the last 10 commands while history n prints last n commands n<=10;

    ls: The ls.c file handles the various types of ls commands This supports: ls ls -l ls -la ls -al ls -a ls dir/ ls -l dir/ ls -la dir/ ls -al dir/ ls -a dir/

    pinfo: The pinfo.c file handles the pinfo command The format is: pinfo pinfo procnum

    pwd: The pwd.c handles the pwd command

    system commands: inbuild commands like cp , mkdir ,etc are handled by exe.c file and format is normal (like in actual shell)

    The sep.c file seperates various commands by ;and executes them individually.

    The execute.c file checks the command input and then calls a function appropriately. for eg if input is cd ~, it will call runcd function

    The printDir.c file prints the current Directory of the shell while replacing the place where the shell is located by with ~

    The input.c file takes command input from user then calls adds it io history

    global.h file contains all function prototypes and contains all c libraries.

    begin.c file takes care of printing user name and hostname.

# Specifications:

    Specification 1: Foreground and background processes

    Specification 2: input-output redirection functionality

    Specification 3: command redirection using pipes

    Specification 4: i/o redirection + pipes redirection

    setenv var [value] :: If environment variable var does not exist, then my shell is creating it

    unsetenv var : shell must destroy the environment variable var. It is an error for an unsetenv command to have zero command-line arguments

    jobs : prints a list of all currently running jobs along with their pid, in particular,background jobs, in order of their creation along with their state – Running or Stopped.

    kjob : takes the job id of a running job and sends a signal value to that process

    fg : brings a running or a stopped background job with given job number to foreground.

    bg : changes a stopped background job to a running background job

    overkill : kills all background process at once.

    quit : exits the shell.

    CTRL-Z : It is changing the status of currently running job to stop, and pushing it in background process.

    CTRL-C : It is causing a SIGINT signal to be sent to the current foreground job of my shell. If there is no foreground job, then the signal does have any effect

    Command Recall using ‘UP’ arrow key:

    If the ‘UP’ key is pressed ‘K’ times consecutively, the Kth previous command should be executed.

    cronjob -c -t -p command which executes a particular command in fixed time interval for a certain period.



