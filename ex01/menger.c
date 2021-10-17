/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD17-clement.muth
** File description:
** menger
*/

#include <stdlib.h>
#include <stdio.h>
#include "menger.h"

void menger(info_t info, vector2i_t vect)
{
    info.size /= 3;
    printf("%03d %03d %03d\n", info.size, NEW_X, NEW_Y);
    if (1 >= info.level || 0 >= info.size / 3)
        return;
    --info.level;
    menger(info, (vector2i_t){.x = vect.x, .y = vect.y});
    menger(info, (vector2i_t){.x = vect.x, .y = NEW_Y});
    menger(info, (vector2i_t){.x = vect.x, .y = vect.y + (info.size << 1)});
    menger(info, (vector2i_t){.x = NEW_X, .y = vect.y});
    menger(info, (vector2i_t){.x = NEW_X, .y = vect.y + (info.size << 1)});
    menger(info, (vector2i_t){.x = vect.x + (info.size << 1), .y = vect.y});
    menger(info, (vector2i_t){.x = vect.x + (info.size << 1), .y = NEW_Y});
    menger(info, (vector2i_t){.x = vect.x + (info.size << 1), .y = vect.y +
    (info.size << 1)});
}