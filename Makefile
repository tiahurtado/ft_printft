NAME = libftprintf.a
TEST = test

CC = cc
CFLAGS = -Wall -Wextra -Werror

AR = ar
ARFLAGS = rcs

SRC =	ft_printf.c \
		utils/process_format.c \
		utils/printf_utils.c \
		src/print_char.c \
		src/print_string.c \
		src/print_int.c \
		src/print_hex.c \
		src/print_unsigned.c \
		src/print_pointer.c \

OBJ = $(SRC:.c=.o)

HEADER = ft_printf.h

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $(NAME) $(OBJ)

$(TEST): $(NAME) main.c
	$(CC) $(CFLAGS) main.c -L. -lftprintf -o $(TEST)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f $(TEST)

re: fclean all

.PHONY: all clean fclean re test