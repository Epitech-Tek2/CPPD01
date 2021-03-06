/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD01-clement.muth
** File description:
** bitmap
*/

#ifndef BITMAP_H_
#define BITMAP_H_

#include <stdio.h>
#include <stdint.h>
#include <unistd.h>
#include <fcntl.h>

#define IMAGE_SIZE size * size * 4

typedef struct __attribute__((packed)) bmp_header_s
{
    uint16_t magic;
    uint32_t size;
    uint16_t _app2;
    uint16_t _app1;
    uint32_t offset;
} bmp_header_t;

typedef struct __attribute__((packed)) bmp_info_header_s
{
    uint32_t size;
    int32_t width;
    int32_t height;
    uint16_t planes;
    uint16_t bpp;
    uint32_t compression;
    uint32_t raw_data_size;
    int32_t h_resolution;
    int32_t v_resolution;
    uint32_t pallette_size;
    uint32_t important_colors;
} bmp_info_header_t;

void make_bmp_info_header(bmp_info_header_t *header, size_t size);

void make_bmp_header(bmp_header_t *header, size_t size);

#endif /* !BITMAP_H_ */