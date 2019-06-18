TESTNAME1 = atoitest.out
TESTNAME2 = fdtest.out
TESTNAME3 = ftputnbrtests.out
TESTNAME4 = istest.out
TESTNAME5 = itoatest.out
TESTNAME6 = memtest.out
TESTNAME7 = putstrtest.out
TESTNAME8 = RodgerTests.out
TESTNAME9 = strcattest.out
TESTNAME10 = strcpytest.out
TESTNAME11 = strtests.out
TESTNAME12 = testJasenTheory.out
TESTNAME13 = touptolowtest.out
TESTNAME14 = lsttests.out

DIR_S = src
DIR_O = obj

HEADER = -I./includes -L libft -lft

SRCST1 = atoi.c atoitest.c
TESTNAME1_SRC = $(addprefix $(DIR_S)/,$(SRCST1))
TESTNAME1_OBJ = $(addprefix $(DIR_O)/,$(SRCST1:.c=.o))

SRCST2 = fdtest.c fdtests.c
TESTNAME2_SRC = $(addprefix $(DIR_S)/,$(SRCST2))


SRCST3 = ftputnbrtests.c putnbrt.c
TESTNAME3_SRC = $(addprefix $(DIR_S)/,$(SRCST3))


SRCST4 = istests.c is_tests.c
TESTNAME4_SRC = $(addprefix $(DIR_S)/,$(SRCST4))


SRCST5 = itoatest.c testitoa.c
TESTNAME5_SRC = $(addprefix $(DIR_S)/,$(SRCST5))


SRCST6 = memory.c memtest.c  ft_print_memory.c
TESTNAME6_SRC = $(addprefix $(DIR_S)/,$(SRCST6))


SRCST7 = putstrtest.c strcat.c
TESTNAME7_SRC = $(addprefix $(DIR_S)/,$(SRCST7))


SRCST8 = RodgerTests.c strlen_test.c
TESTNAME8_SRC = $(addprefix $(DIR_S)/,$(SRCST8))


SRCST9 = strcat.c strcattest.c
TESTNAME9_SRC = $(addprefix $(DIR_S)/,$(SRCST9))


SRCST10 = strcpytest.c teststrcpy.c
TESTNAME10_SRC = $(addprefix $(DIR_S)/,$(SRCST10))

SRCST11 = strtests.c strings.c ft_print_memory.c  it.c
TESTNAME11_SRC = $(addprefix $(DIR_S)/,$(SRCST11))

SRCST12 = test_jasen_theory.c memory.c  ft_print_memory.c
TESTNAME12_SRC = $(addprefix $(DIR_S)/,$(SRCST12))

SRCST13 = touplowtest.c touptolow.c
TESTNAME13_SRC = $(addprefix $(DIR_S)/,$(SRCST14))

SRCST14 = lsttest.c lsttestmain.c
TESTNAME14_SRC = $(addprefix $(DIR_S)/,$(SRCST14))

HEADER = -I./includes/ -I./libft/

$(DIR_O)/%.o:		$(DIR_S)/%.c
	@echo "\033[1;35;m[Compiling $<] \t\033[0m"
	@$(C) $(FLAGS) -$(HEADER) -o $@ -c $<

$(TESTNAME1): $(TESTNAME1_OBJ)
	@echo "MAKING LIBFT"
	@make -C libft
	@echo "ATOI"
	@gcc -o $(TESTNAME1) $(TESTNAME1_OBJ) $(HEADER)

$(TESTNAME2):
	@echo "MAKING LIBFT"
	@make -C libft
	@echo "FDTEST"
	@gcc -o $(TESTNAME2) $(TESTNAME2_SRC) $(HEADER) -L libft -lft

$(TESTNAME3):
	@echo "MAKING LIBFT"
	@make -C libft
	@echo "PUTNBRTEST"
	@gcc -o $(TESTNAME3) $(TESTNAME3_SRC) $(HEADER) -L libft -lft

$(TESTNAME4):
	@echo "MAKING LIBFT"
	@make -C libft
	@echo "ISTESTS"
	@gcc -o $(TESTNAME4) $(TESTNAME4_SRC) $(HEADER) -L libft -lft

$(TESTNAME5):
	@echo "MAKING LIBFT"
	@make -C libft
	@echo "ITOATEST"
	@gcc -o $(TESTNAME5) $(TESTNAME5_SRC) $(HEADER) -L libft -lft

$(TESTNAME6):
	@echo "MAKING LIBFT"
	@make -C libft
	@echo "MEMTEST"
	@gcc -o $(TESTNAME6) $(TESTNAME6_SRC) $(HEADER) -L libft -lft

$(TESTNAME7):
	@echo "MAKING LIBFT"
	@make -C libft
	@echo "PUTSTRTEST"
	@gcc -o $(TESTNAME7) $(TESTNAME7_SRC) $(HEADER) -L libft -lft

$(TESTNAME8):
	@echo "MAKING LIBFT"
	@make -C libft
	@echo "RODGERTEST"
	@gcc -o $(TESTNAME8) $(TESTNAME8_SRC) $(HEADER) -L libft -lft

$(TESTNAME9):
	@echo "MAKING LIBFT"
	@make -C libft
	@echo "STRCATTEST"
	@gcc -o $(TESTNAME9) $(TESTNAME9_SRC) $(HEADER) -L libft -lft

$(TESTNAME10):
	@echo "MAKING LIBFT"
	@make -C libft
	@echo "STRCPYTEST"
	@gcc -o $(TESTNAME10) $(TESTNAME10_SRC) $(HEADER) -L libft -lft

$(TESTNAME11):
	@echo "MAKING LIBFT"
	@make -C libft
	@echo "STRTESTS"
	@gcc -o $(TESTNAME11) $(TESTNAME11_SRC) $(HEADER) -L libft -lft

$(TESTNAME12):
	@echo "MAKING LIBFT"
	@make -C libft
	@echo "JASENTHEORY"
	@gcc -o $(TESTNAME12) $(TESTNAME12_SRC) $(HEADER) -L libft -lft

$(TESTNAME13):
	@echo "MAKING LIBFT"
	@make -C libft
	@echo "TOUPPLOWTEST"
	@gcc -o $(TESTNAME13) $(TESTNAME13_SRC) $(HEADER) -L libft -lft

$(TESTNAME14):
	@echo "MAKING LIBFT"
	@make -C libft
	@echo "LST"
	@gcc -o $(TESTNAME14) $(TESTNAME14_SRC) $(HEADER) -L libft -lft

all: temporary $(TESTNAME1) $(TESTNAME2) $(TESTNAME3) $(TESTNAME4) $(TESTNAME5) $(TESTNAME6) $(TESTNAME7) $(TESTNAME8) $(TESTNAME9) $(TESTNAME10) $(TESTNAME11) $(TESTNAME12) $(TESTNAME13) $(TESTNAME14)

temporary:
	@mkdir -p $(DIR_O)

clean: fclean

fclean:
	@make -C libft fclean
	@rm -rf $(NAME)
	@rm -rf $(basicName)

re:	fclean all

run: re
	./$(TESTNAME1)
	./$(TESTNAME2)
	./$(TESTNAME3)
	./$(TESTNAME4)
	./$(TESTNAME5)
	./$(TESTNAME6)
	./$(TESTNAME7)
	./$(TESTNAME8)
	./$(TESTNAME9)
	./$(TESTNAME10)
	./$(TESTNAME11)
	./$(TESTNAME12)
	./$(TESTNAME13)
	./$(TESTNAME14)
