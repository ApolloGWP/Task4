#include <stdio.h>
#include <stdlib.h>

extern char **environ;
int main (int argc, char* argv[], const char *envp[]) {
    printf("envirop : %s\n", environ[0]);
    printf("envp: %s\n", envp[0]);

    setenv(argv[1], argv[2], 1);
    puts("-------Added NEW_VAR-----");

    printf("envirop : %s\n", environ[0]);
    printf("envp: %s\n", envp[0]);


    exit(EXIT_SUCCESS);
}
