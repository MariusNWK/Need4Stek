/*
** EPITECH PROJECT, 2021
** ai
** File description:
** bootstrap
*/

#include "include/my.h"

int main(void)
{
    float *distances = malloc(sizeof(float) * 32);

    for (int i = 0; i < 32; i++)
        distances[i] = 0;
    exec_command(START_SIMULATION);
    ai(distances);
    exec_command(NOSPEED);
    exec_command(STOP_SIMULATION);
    free(distances);
    return (0);
}