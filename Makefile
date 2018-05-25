NAME = r_main

SRS = src/*.c

HEADER = -I./includes/ -I./libft.h

all:
	cd libft/ && make && cp libft.a ../
	rm -rf $(NAME)
	gcc -o $(NAME) $(SRS) $(HEADER) libft.a
	./$(NAME)
