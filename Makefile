NAME = r_main
basicName = r_main_basic

SRS = src/atoi.c src/fdtest.c src/ft_print_memory.c src/is_tests.c src/it.c src/m.c src/memory.c src/putnbrt.c src/strcat.c src/strings.c src/strlen_test.c src/testitoa.c src/teststrcpy.c src/touptolow.c
SRSC = src/atoi.c src/fdtest.c src/ft_print_memory.c src/is_tests.c src/it.c src/m.1.c src/lsttest.c src/memory.c src/putnbrt.c src/strcat.c src/strings.c src/strlen_test.c src/testitoa.c src/teststrcpy.c src/touptolow.c

HEADER = -I./includes/ -I./libft/

all: $(NAME)

$(NAME):
	@make -C libft re 
	@gcc -o $(NAME) $(SRSC) $(HEADER) -L libft -lft

basic: $(basicName)

$(basicName):
	@make -C libft re
	@gcc -o $(basicName) $(SRS) $(HEADER) -L libft -lft

clean: fclean

fclean:
	@make -C libft fclean
	@rm -rf $(NAME)
	@rm -rf $(basicName)

re:	fclean all

run: re
	./$(basicName)
