NAME = r_main

SRS = src/*.c

HEADER = -I./includes/ -I./libft/

all: $(NAME)

$(NAME): $(OBJECTS)
	cd libft/ && make && cp libft.a ../
	gcc -o $(NAME) $(SRS) $(HEADER) libft.a

clean: fclean

fclean:
	rm -rf $(NAME)

re:	fclean all

run: all
	./$(NAME)
