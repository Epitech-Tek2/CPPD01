/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD01-clement.muth
** File description:
** pyramid
*/

#include <stdio.h>
#include <stdlib.h>

static int min(int a, int b)
{
    return (a < b) ? a : b;
}

static void bottom_row(int *min_dig, int size, int **map)
{
    static int i = 0;

    if (i >= size)
        return;
    min_dig[i] = map[size - 1][i];
    i++;
    bottom_row(min_dig, size, map);
}

int pyramid_path(int size, int **map)
{
    int min_dig[size];

    bottom_row(min_dig, size, map);
    for (int i = size - 2; i >= 0; i--)
        for (int n = 0; n < size; n++)
            min_dig[n] = map[i][n] + min(min_dig[n], min_dig[n + 1]);
    return min_dig[0];
}