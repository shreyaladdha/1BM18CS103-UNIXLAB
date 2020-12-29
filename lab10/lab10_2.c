
// C program to demonstrate waitpid() 
#include<stdio.h> 
#include<stdlib.h> 
#include<sys/wait.h> 
#include<unistd.h> 
  
void waitexample() 
{ 
    int i, stat; 
    pid_t pid; 
   
        if ((pid = fork()) == 0) 
        { 
            
            exit(100 + i); 
        } 
     
  
    // Using waitpid() and printing exit status 
    // of children. 
         printf("Child->: pid %d\n",pid); 
        pid_t cpid = waitpid(pid, &stat, 0); 
        if (WIFEXITED(stat)) 
            printf("Parent-> pid %d, Child %d terminated with status: %d\n", getppid(),pid,
                    WEXITSTATUS(stat)); 
    } 
 
  
// Driver code 
int main() 
{ 
    waitexample(); 
    return 0; 
} 