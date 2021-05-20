/*
** EPITECH PROJECT, 2021
** define_distances
** File description:
** define the distance from the wall of every directions
*/

#include "../include/my.h"

float *define_distances(float *distances, char *info)
{
    char *piece = strtok(info, ":");
    char *track_info;

    for (int i = 0; i < 2; i++)
        piece = strtok(NULL, ":");
    for (int i = 0; i < 32; i++)
        distances[i] = atof(strtok(NULL, ":"));
    track_info = strtok(NULL, ":");
    if (is_same_str(END, track_info))
        return (NULL);
    free(info);
    return (distances);
}