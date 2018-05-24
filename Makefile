NAME = r_main

SRS = m.c

all:
	cd libft/ && make && cp libft.a ../
	gcc -o $(NAME) $(SRS) libft.a
	./$(NAME)
