NAME = so_long

BNAME = so_long_bonus

LIBFT = ./libft/

FT_PRINTF = ./ft_printf/

CFLAGS = -Wall -Wextra -Werror

CC = cc 
MLX	= -lmlx -framework OpenGl -framework AppKit

SOURCES =			./srcs/so_long.c \
					./srcs/so_long_checker.c \
					./srcs/ft_error.c \
					./srcs/so_long_path.c \
					./srcs/ft_mlx.c \
					./srcs/ft_p_e_c_0_1.c \
					./srcs/ft_movement.c \

BSOURCES =			./bonus/so_long_bonus.c \
					./bonus/so_long_checker_bonus.c \
					./bonus/ft_error_bonus.c \
					./bonus/so_long_path_bonus.c \
					./bonus/ft_mlx_bonus.c \
					./bonus/ft_p_e_c_0_1_bonus.c \
					./bonus/ft_movement_bonus.c \
					./bonus/ft_monster_bonus.c \
					./bonus/ft_animation_pt2.c \
					./bonus/ft_animation.c \

NC			= \033[0m
B_RED		= \033[1;31m
RED 		= \033[0;31m
PURPLE		= \033[0;35m
B_PURPLE	= \033[1;35m
BLUE	= \033[1;34m
GREEN	= \033[1;32m
YELLOW	= \033[1;33m

OBJECTS = $(SOURCES:.c=.o)

BOBJECTS = $(BSOURCES:.c=.o)

all : $(NAME)

%.o: %.c
#	@echo "$(B_GREEN)Compiling: $(GREEN)$(notdir $<) 🔨$(NC)"
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "\033[1;34m█\033[0m\c"

$(NAME): compile $(OBJECTS) $(LIBFT)libft.a $(FT_PRINTF)ft_printf.a done
	@$(CC) $(MLX) $(OBJECTS) $(LIBFT)libft.a $(FT_PRINTF)ft_printf.a -o $(NAME)

$(LIBFT)libft.a :
	@make -C $(LIBFT)

$(FT_PRINTF)ft_printf.a :
	@make -C $(FT_PRINTF)

bonus:$(BNAME)

$(BNAME):compile_b $(BOBJECTS) $(LIBFT)libft.a $(FT_PRINTF)ft_printf.a done
	@$(CC) $(MLX) $(BOBJECTS) $(LIBFT)libft.a $(FT_PRINTF)ft_printf.a -o $(BNAME)



clean :
	@rm -f $(OBJECTS)
	@rm -f $(BOBJECTS)
	@echo "\033[0;33m•\033[0;33m\c"
	@echo "$(B_RED)🧹 Cleaning: $(RED) so_long object files $(NC)"
	@make clean -C $(LIBFT)
	@make clean -C $(FT_PRINTF)

fclean : clean
	@rm -f $(NAME)
	@rm -f $(BNAME)
	@echo "\033[0;33m••\033[0;33m\c"
	@echo "$(B_RED)🧹 Cleaning: $(RED) $(NAME) $(NC)"
	@make fclean -C $(LIBFT)
	@make fclean -C $(FT_PRINTF)

re : fclean all

compile	:
			@echo "\n$(YELLOW)[X] Compiling $(BLUE)so_long$(NC)\n"

compile_b	:
			@echo "\n$(YELLOW)[X] Compiling Bonus $(BLUE)so_long$(NC)\n"

done	:
			@echo "$(BLUE) => 100%$(NC)\n"