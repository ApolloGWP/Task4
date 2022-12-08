#include <stdio.h>
#include <stdlib.h>

extern char **environ;

int main(int argc, char **argv, char **envp)
{
    int i = 0;
    while(environ[i]) {
        printf("%s\n", environ[i++]); 
    }
    if (argv[1] == NULL){
        clearenv();
    }
    else{
        unsetenv(argv[1]);
    }
    i = 0;
    while(environ[i]) {
        printf("%s\n", environ[i++]); 
    }
}