/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD17-clement.muth
** File description:
** main
*/

#include "bitmap.h"

void make_bmp_header(bmp_header_t *header, size_t size)
{
    header->magic = 0x4D42;
    header->offset = sizeof(bmp_header_t) + sizeof(bmp_info_header_t);
    header->size = (IMAGE_SIZE + (sizeof(bmp_header_t) +
    sizeof(bmp_info_header_t)));
    header->_app1 = 0;
    header->_app2 = 0;
}

void make_bmp_info_header(bmp_info_header_t *header, size_t size)
{
    header->bpp = 32;
    header->compression = 0;
    header->h_resolution = 0;
    header->height = size;
    header->important_colors = 0;
    header->pallette_size = 0;
    header->planes = 1;
    header->raw_data_size = (IMAGE_SIZE);
    header->size = 40;
    header->v_resolution = 0;
    header->width = size;
}