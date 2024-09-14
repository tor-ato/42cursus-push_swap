NAME    = push_swap
LIBFT   = ./libft/libft.a
INC     = ./inc/
SRCS_DIR    = srcs/
OBJ_DIR     = obj/
CC      = cc
CFLAGS  = -Wall -Wextra -Werror -I$(INC) -I./libft/includes/
RM      = rm -f

ALGORITHMS  = sort_three.c sort_stacks.c
COMMANDS    = push.c rotate.c swap.c rev_rotate.c
ERRORS      = handle_errors.c
INITS       = init_a_to_b.c init_b_to_a.c init_stack_a.c
MAIN        = push_swap.c
UTILS       = split.c stack_utils.c

SRCS    = $(addprefix $(SRCS_DIR)algorithms/, $(ALGORITHMS)) \
          $(addprefix $(SRCS_DIR)commands/, $(COMMANDS)) \
          $(addprefix $(SRCS_DIR)errors/, $(ERRORS)) \
          $(addprefix $(SRCS_DIR)inits/, $(INITS)) \
          $(addprefix $(SRCS_DIR)main/, $(MAIN)) \
          $(addprefix $(SRCS_DIR)utils/, $(UTILS))


OBJS    = $(patsubst $(SRCS_DIR)%.c,$(OBJ_DIR)%.o,$(SRCS))

$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

$(OBJ_DIR)%.o: $(SRCS_DIR)%.c
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
