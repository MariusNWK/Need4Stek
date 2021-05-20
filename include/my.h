/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** need4stek
*/

#include <stddef.h>
#include <sys/types.h>
#include <dirent.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <signal.h>
#include <fcntl.h>

#define START_SIMULATION    "START_SIMULATION\n"
#define STOP_SIMULATION     "STOP_SIMULATION\n"
#define NOSPEED             "CAR_FORWARD:0\n"
#define SPEED1              "CAR_FORWARD:0.2\n"
#define SPEED2              "CAR_FORWARD:0.4\n"
#define SPEED3              "CAR_FORWARD:0.6\n"
#define SPEED4              "CAR_FORWARD:0.8\n"
#define SPEED5              "CAR_FORWARD:1\n"
#define NOBACK              "CAR_BACKWARDS:0\n"
#define BACK1               "CAR_BACKWARDS:0.2\n"
#define BACK2               "CAR_BACKWARDS:0.4\n"
#define BACK3               "CAR_BACKWARDS:0.6\n"
#define BACK4               "CAR_BACKWARDS:0.8\n"
#define BACK5               "CAR_BACKWARDS:1\n"
#define GORIGHT1            "WHEELS_DIR:-0.2\n"
#define GORIGHT2            "WHEELS_DIR:-0.4\n"
#define GORIGHT3            "WHEELS_DIR:-0.6\n"
#define GORIGHT4            "WHEELS_DIR:-0.8\n"
#define GORIGHT5            "WHEELS_DIR:-1\n"
#define GOSTRAIGHT          "WHEELS_DIR:0\n"
#define GOLEFT1             "WHEELS_DIR:0.2\n"
#define GOLEFT2             "WHEELS_DIR:0.4\n"
#define GOLEFT3             "WHEELS_DIR:0.6\n"
#define GOLEFT4             "WHEELS_DIR:0.8\n"
#define GOLEFT5             "WHEELS_DIR:1\n"
#define INFO                "GET_INFO_LIDAR\n"
#define CYCLE               "CYCLE_WAIT:30\n"
#define END                 "Track Cleared"

enum Direction {
    LEFT15,
    LEFT14,
    LEFT13,
    LEFT12,
    LEFT11,
    LEFT10,
    LEFT9,
    LEFT8,
    LEFT7,
    LEFT6,
    LEFT5,
    LEFT4,
    LEFT3,
    LEFT2,
    LEFT1,
    MIDLEFT,
    MIDRIGHT,
    RIGHT1,
    RIGHT2,
    RIGHT3,
    RIGHT4,
    RIGHT5,
    RIGHT6,
    RIGHT7,
    RIGHT8,
    RIGHT9,
    RIGHT10,
    RIGHT11,
    RIGHT12,
    RIGHT13,
    RIGHT14,
    RIGHT15,
};

void my_putchar(char);
int my_strlen(char *);
void my_putstr(char *);
int is_same_str(char *, char *);
int my_getnbr(char const *);
char *my_strdup(char const *);
void my_puterr(char *);
char *my_strcat(char *, char *);
char *file_reader(char const *);

/************/

char *exec_command(char *);
void ai(float *);
float *define_distances(float *, char *);
int define_direction(float *);
void define_speed(int, float *);
void exit_simulation(void);