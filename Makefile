NAME    = push_swap
LIBFT   = ./libft/libft.a
INC     = inc/
SRCS_DIR    = srcs/
OBJ_DIR     = obj/
CC      = cc
CFLAGS  = -Wall -Wextra -Werror -I$(INC) -I./libft/includes/
RM      = rm -f

COMMANDS    = push.c rotate.c sort_stacks.c sort_three.c swap.c
PUSH_SWAP   = handle_errors.c init_a_to_b.c init_b_to_a.c push_swap.c split.c stack_init.c stack_utils.c

SRCS    = $(addprefix $(SRCS_DIR)commands/, $(COMMANDS)) \
          $(addprefix $(SRCS_DIR)push_swap/, $(PUSH_SWAP))

OBJS				= $(patsubst $(SRCS_DIR)%.c,$(OBJ_DIR)%.o,$(SRCS))

$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

$(OBJ_DIR)%.o: $(SRCS_DIR)%.c
	echo "aaa"
	mkdir -p $(@D)
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	@make -C ./libft

all: $(NAME)

clean:
	$(RM) -r $(OBJ_DIR)
	make clean -C ./libft

fclean: clean
	$(RM) $(NAME)
	make fclean -C ./libft

re: fclean all

.PHONY: all clean fclean re
