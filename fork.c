#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

int main(){
    pid_t ret_val;
    int x = 0;
    
    ret_val = fork();

    if(ret_val != 0){ //Parent process
        //pid_t pid_term = wait(&x);
        printf("This is the parent process\n");
        printf("The parent process PID is: %d\n", getpid());
        printf("The parent process\'s parent PID is: %d\n", getppid());
    }
    else{
        printf("This is the child process\n");
        printf("The child process PID is: %d\n", getpid());
        printf("The child process\'s parent PID is: %d\n", getppid());
    }
    
    return 0;
}
