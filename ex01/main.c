/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD17-clement.muth
** File description:
** main
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
#include "menger.h"

static void process(info_t info)
{
    vector2i_t vect = {.x = 0, .y = 0};

    if (0 > info.size || 0 > info.level)
        return;
    if ((info.size % 3) == 0 && (info.level <= (info.size / 3)))
        menger(info, vect);
}

int main(int ac, char **av)
{
    if (ac == 3)
        process((info_t){.size = atoi(av[1]), .level = atoi(av[2])});
    return (EXIT_SUCCESS);
}