/*
** EPITECH PROJECT, 2021
** define speed
** File description:
** define the speed of the car
*/

#include "include/my.h"

void straight_speed(float *distances)
{
    int speed5 = 1;
    int speed4 = 1;

    for (int i = LEFT4; i <= RIGHT4; i++) {
        if (distances[i] < 1200)
            speed5 = 0;
        if (distances[i] < 1000)
            speed4 = 0;
    }
    if (speed5)
        exec_command(SPEED5);
    else if (speed4)
        exec_command(SPEED4);
    else
        exec_command(SPEED3);
}

void define_speed(int straight, float *distances)
{
    if (straight)
        straight_speed(distances);
}