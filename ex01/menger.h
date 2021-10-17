/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD17-clement.muth
** File description:
** menger
*/

#ifndef MENGER_H_
#define MENGER_H_

#define NEW_X vect.x + info.size
#define NEW_Y vect.y + info.size

typedef struct info_s
{
    int level;
    int size;
} info_t;

typedef struct vector2i_s
{
    int x;
    int y;
} vector2i_t;

void menger(info_t info, vector2i_t vect);


#endif /* !MENGER_H_ */