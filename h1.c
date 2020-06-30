#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int v = 7;

int main () { 

pid_t pid = fork() ;

if (pid == 0 ) {
v++;
printf("FirstChild=%d\n",v ) ;
return 0 ; 
} else if (pid > 0 ) {

pid = fork() ;

if (pid == 0)  {
v--;
printf("SecondChild=%d\n",v ) ;
return 0 ;  
} else if ( pid > 0 ) {
//wait(NULL) ;
//wait(NULL) ;
printf("Parent=%d\n",v ) ;
return 0 ;
}

}


}
