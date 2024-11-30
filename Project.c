#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void execute_command(char *command);
int main() {
    char command[MAX_COMMAND_SIZE];
   while (1) {
        printf("my_shell> ");
        if (fgets(command, sizeof(command), stdin) == NULL) {
            perror("fgets");
            continue;
        }
        command[strcspn(command, "\n")] = 0;
        if (strcmp(command, "exit") == 0) {
            break;
        }
        execute_command(command);
  {
  return 0;
}
void execute_command(char *command) {
    char *args[MAX_ARG_SIZE];
    char *token = strtok(command, " ");
    int i = 0;

    while (token != NULL) {
        args[i++] = token;
        token = strtok(NULL, " ");
    }
    args[i] = NULL;
    if (strcmp(args[0], "cd") == 0) {
if (args[1] == NULL) {
            fprintf(stderr, "cd: missing argument\n");
        } else {
            if (chdir(args[1]) != 0) {
                perror("cd");
            }
        }
    } else {
         if (pid < 0) {
            perror("fork");
        } else if (pid == 0) {
                        if (execvp(args[0], args) == -1) {
                perror("execvp");
            }
            exit(1); 
        } else {
            wait(NULL);
        }
    }
}
