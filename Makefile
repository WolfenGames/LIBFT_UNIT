NAME = r_main

SRS = src/*.c

HEADER = -I./includes/ -I./libft.h

all:
	cd libft/ && make && cp libft.a ../
	gcc -o $(NAME) $(SRS) libft.a
	./$(NAME)
