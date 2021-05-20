/*
** EPITECH PROJECT, 2021
** ai
** File description:
** main function of ai
*/

#include "include/my.h"

void ai(float *distances)
{
    int straight = 0;

    if ((distances = define_distances(distances, exec_command(INFO))) == NULL)
        return;
    straight = define_direction(distances);
    define_speed(straight, distances);
    ai(distances);
}