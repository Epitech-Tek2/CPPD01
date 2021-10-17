/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD01-clement.muth
** File description:
** drawing
*/

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include "drawing.h"

void process_x(img_data_t img_data, vect_t vector)
{
    if (vector.x >= img_data.size)
        return;
    img_data.img[img_data.origin->y + vector.y]
    [img_data.origin->x + vector.x] = img_data.color;
    vector.x++;
    process_x(img_data, vector);
}

void process_y(img_data_t img_data, vect_t vector)
{
    if (vector.y >= img_data.size)
        return;
    process_x(img_data, vector);
    vector.y++;
    process_y(img_data, vector);
}

void draw_square(uint32_t **img, const point_t *origin, size_t size,
uint32_t color)
{
    vect_t vector = {0, 0};
    img_data_t img_data = {img, origin, size, color, vector};

    process_y(img_data, vector);
}