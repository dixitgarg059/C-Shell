# C-Shell
My Bash Shell in C with features like piping redirection,foreground processes ,background processes and much more!

## Specifications:

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
