/*
** EPITECH PROJECT, 2021
** exec_command
** File description:
** exec the chosen command
*/

#include "../include/my.h"

int is_info_invalid(char *line)
{
    int nbr = 0;

    for (int i = 0; line[i]; i++)
        if (line[i] == ':')
            nbr++;
    if (nbr >= 35)
        return (0);
    return (1);
}

void is_error_status(char *line, char *command)
{
    int status = 0;
    int valid = 0;
    if (is_same_str(INFO, command) && is_info_invalid(line)) {
        exit_simulation();
    }
    for (int i = 0; line[i]; i++)
        if (line[i] == ':')
            valid = 1;
    if (valid == 0) {
        exit_simulation();
    }
    status = atoi(strtok(line, ":"));
    free(line);
    if (status != 1 && status != 2 && status != 10 &&
        status != 19 && status != 20) {
        exit_simulation();
    }
}

char *exec_command(char *command)
{
    char *line = NULL;
    size_t len = 0;

    my_putstr(command);
    if (getline(&line, &len, stdin) == -1)
        exit_simulation();
    is_error_status(my_strdup(line), command);
    for (int i = 0; line[i]; i++)
        if (line[i] == 'T') {
            my_putstr(NOSPEED);
            exit(0);
        }
    if (is_same_str(command, INFO))
        return (line);
    free(line);
    return (NULL);
}