#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

extern char **environ;
int main(int argc, char **argv, char **envp)
{
    int rc = gethostname(argv[1],sizeof(argv[1]));
    if(rc == 0){
        printf("hostname = %s\n",argv[1]);
    }
}
