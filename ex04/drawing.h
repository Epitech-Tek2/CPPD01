/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD01-clement.muth
** File description:
** drawing
*/

#ifndef DRAWING_H_
#define DRAWING_H_

#include <stdio.h>
#include <stdint.h>

typedef struct point_s
{
    unsigned int x;
    unsigned int y;
} point_t;

typedef struct vect_s
{
    uint x;
    uint y;
} vect_t;

typedef struct img_data_s
{
    uint32_t **img;
    const point_t *origin;
    size_t size;
    uint32_t color;
    vect_t vector;
} img_data_t;

void draw_square(uint32_t **img, const point_t *origin, size_t size,
uint32_t color);

#endif /* !DRAWING_H_ */