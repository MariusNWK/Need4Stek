/*
** EPITECH PROJECT, 2021
** define direction
** File description:
** define the direction of the car
*/

#include "include/my.h"

int define_left(int direction, float distance)
{
    if (distance >= 300) {
        exec_command(SPEED2);
        exec_command(GOLEFT1);
    }
    else if (distance >= 150) {
        exec_command(SPEED1);
        exec_command(GOLEFT2);
    }
    else {
        exec_command(SPEED1);
        exec_command(GOLEFT3);
    }
    return (0);
}

int define_right(int direction, float distance)
{
    if (distance >= 300) {
        exec_command(SPEED2);
        exec_command(GORIGHT1);
    }
    else if (distance >= 150) {
        exec_command(SPEED1);
        exec_command(GORIGHT2);
    }
    else {
        exec_command(SPEED1);
        exec_command(GORIGHT3);
    }
    return (0);
}

int can_car_go_straight(float *distances)
{
    for (int i = LEFT4; i <= RIGHT4; i++) {
        if (distances[i] < 900)
            return (0);
    }
    exec_command(GOSTRAIGHT);
    return (1);
}

int car_must_go_backwards(float *distances)
{
    for (int i = 0; i < 32; i++)
        if (distances[i] <= 0) {
            exec_command(GOSTRAIGHT);
            exec_command(BACK5);
            return (1);
        }
    return (0);
}

int define_direction(float *distances)
{
    int direction = 0;
    float distance_min = distances[0];

    if (car_must_go_backwards(distances))
        return (0);
    if (can_car_go_straight(distances))
        return (1);
    for (int i = 1; i < 32; i++) {
        if (distances[i] < distance_min) {
            distance_min = distances[i];
            direction = i;
        }
    }
    if (direction >= LEFT15 && direction <= LEFT1)
        return (define_right(direction, distances[direction]));
    if (direction >= RIGHT1 && direction <= RIGHT15)
        return (define_left(direction, distances[direction]));
    return (0);
}