
// CPP code to create three child 
// process of a parent 
#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h> 
  
// Driver code 
int main() 
{ 
    int pid;
  
    pid = fork(); 
  
    if (pid == 0) { 
  
        printf("child --> pid = %d and parent pid = %d\n", 
               getpid(), getppid()); 
    } 
  
    
        
  
            else { 
              
                // hence made to sleep for 3 seconds. 
                sleep(3); 
                printf("parent --> pid = %d , child pid= %d , ppid= %d\n", getpid(),pid,getppid()); 
            } 
         
  
    return 0; 
} 
