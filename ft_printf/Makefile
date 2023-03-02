NAME = ft_printf.a

CFLAGS = -Wall -Wextra -Werror

CC = cc

SOURCES = 			./srcs/ft_printf.c \
					./srcs/ft_putchar.c \
					./srcs/ft_puthix.c \
					./srcs/ft_putnbr.c \
					./srcs/ft_putp.c \
					./srcs/ft_putstr.c \
					./srcs/ft_putunsigned.c \

NC			:= \033[0m
B_RED		:= \033[1;31m
RED 		:= \033[0;31m
B_BLUE 		:= \033[1;34m
BLUE 		:= \033[0;34m
PURPLE		:= \033[0;35m
B_PURPLE	:= \033[1;35m
GREEN		:= \033[1;32m

OBJECTS = $(SOURCES:.c=.o)

all: $(NAME)

%.o: %.c
#	@echo "$(B_GREEN)Compiling: $(GREEN)$(notdir $<) 🔨$(NC)"
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "\033[1;34m█\033[0m\c"

$(NAME): $(OBJECTS)
	@ar rc $(NAME) $(OBJECTS)

clean:
	@rm -f $(OBJECTS) $(BOBJECTS)
	@echo "\033[0;33m•\033[0;33m\c"
	@echo "$(B_RED)🧹 Cleaning: $(RED) ft_printf object files $(NC)"

fclean: clean
	@rm -f $(NAME)
	@echo "\033[0;33m••\033[0;33m\c"
	@echo "$(B_RED)🧹 Cleaning: $(RED) $(NAME) $(NC)"

re: fclean all
