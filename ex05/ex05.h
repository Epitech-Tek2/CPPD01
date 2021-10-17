/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD01-clement.muth
** File description:
** ex05
*/

#ifndef EX05_H_
#define EX05_H_

typedef union foo {
    struct __attribute__((packed)) foo_foo {
        unsigned short foo;
        union foo_foo_bar {
            unsigned short foo;
            unsigned short bar;
        } bar;
    } foo;
    unsigned int bar;
} foo_t;

#endif /* !EX05_H_ */