##
## EPITECH PROJECT, 2021
## B-CPP-300-STG-3-1-CPPD17-clement.muth
## File description:
## Makefile
##

GCC	=	gcc
CFLAGS	=	-std=gnu11 -Wall -Wextra

SRC	=	menger.c	\
		main.c

OBJ	=	$(SRC:.c=.o)
EXEC	=	menger

all:	$(EXEC)

$(EXEC):	$(OBJ)
	$(GCC) $(CFLAGS) -o $@ $(OBJ)

clean:
	rm -rf $(OBJ)

fclean:	clean
	rm -rf $(EXEC)

re:	fclean all

.PHONY:	clean fclean re all