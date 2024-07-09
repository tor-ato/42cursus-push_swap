NAME		= libft.a

INCS_DIR	= includes/
SRCS_DIR	= srcs/
OBJS_DIR	= objs/

CCFLAGS		= -Wall -Wextra -Werror -I

RM			= rm -fr
AR			= ar -rsc
MKDIR		= mkdir -p

SRCS		= $(SRCS_DIR)ft_is/ft_isalnum.c \
			  $(SRCS_DIR)ft_is/ft_isalpha.c \
			  $(SRCS_DIR)ft_is/ft_isascii.c \
			  $(SRCS_DIR)ft_is/ft_isdigit.c \
			  $(SRCS_DIR)ft_is/ft_islower.c \
			  $(SRCS_DIR)ft_is/ft_isprint.c \
			  $(SRCS_DIR)ft_is/ft_isspace.c \
			  $(SRCS_DIR)ft_is/ft_isupper.c \
			  $(SRCS_DIR)ft_lst/ft_lstadd_back.c \
			  $(SRCS_DIR)ft_lst/ft_lstadd_front.c \
			  $(SRCS_DIR)ft_lst/ft_lstclear.c \
			  $(SRCS_DIR)ft_lst/ft_lstdelone.c \
			  $(SRCS_DIR)ft_lst/ft_lstiter.c \
			  $(SRCS_DIR)ft_lst/ft_lstlast.c \
			  $(SRCS_DIR)ft_lst/ft_lstmap.c \
			  $(SRCS_DIR)ft_lst/ft_lstnew.c \
			  $(SRCS_DIR)ft_lst/ft_lstsize.c \
			  $(SRCS_DIR)ft_mem/ft_memchr.c \
			  $(SRCS_DIR)ft_mem/ft_memcmp.c \
			  $(SRCS_DIR)ft_mem/ft_memcpy.c \
			  $(SRCS_DIR)ft_mem/ft_memmove.c \
			  $(SRCS_DIR)ft_mem/ft_memset.c \
			  $(SRCS_DIR)ft_printf/ft_printf.c \
			  $(SRCS_DIR)ft_printf/ft_putaddress.c \
			  $(SRCS_DIR)ft_printf/ft_putchar.c \
			  $(SRCS_DIR)ft_printf/ft_putnbr.c \
			  $(SRCS_DIR)ft_printf/ft_putstr.c \
			  $(SRCS_DIR)ft_put/ft_putchar_fd.c \
			  $(SRCS_DIR)ft_put/ft_putendl_fd.c \
			  $(SRCS_DIR)ft_put/ft_putnbr_fd.c \
			  $(SRCS_DIR)ft_put/ft_putstr_fd.c \
			  $(SRCS_DIR)ft_stdlib/ft_abs.c \
			  $(SRCS_DIR)ft_stdlib/ft_bzero.c \
			  $(SRCS_DIR)ft_stdlib/ft_calloc.c \
			  $(SRCS_DIR)ft_stdlib/ft_split.c \
			  $(SRCS_DIR)ft_str/ft_strchr.c \
			  $(SRCS_DIR)ft_str/ft_strdup.c \
			  $(SRCS_DIR)ft_str/ft_striteri.c \
			  $(SRCS_DIR)ft_str/ft_strjoin.c \
			  $(SRCS_DIR)ft_str/ft_strlcat.c \
			  $(SRCS_DIR)ft_str/ft_strlcpy.c \
			  $(SRCS_DIR)ft_str/ft_strldup.c \
			  $(SRCS_DIR)ft_str/ft_strlen.c \
			  $(SRCS_DIR)ft_str/ft_strltrim.c \
			  $(SRCS_DIR)ft_str/ft_strmapi.c \
			  $(SRCS_DIR)ft_str/ft_strncmp.c \
			  $(SRCS_DIR)ft_str/ft_strnlen.c \
			  $(SRCS_DIR)ft_str/ft_strnstr.c \
			  $(SRCS_DIR)ft_str/ft_strrchr.c \
			  $(SRCS_DIR)ft_str/ft_strtrim.c \
			  $(SRCS_DIR)ft_str/ft_substr.c \
			  $(SRCS_DIR)ft_to/ft_atoi.c \
			  $(SRCS_DIR)ft_to/ft_itoa.c \
			  $(SRCS_DIR)ft_to/ft_tolower.c \
			  $(SRCS_DIR)ft_to/ft_toupper.c

OBJS 			= $(SRCS:%.c=$(OBJS_DIR)%.o)
# $(patsubst $(SRC_DIR)%.c,$(OBJ_DIR)%.o,$(SRCS))

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

$(OBJ_DIR)%.o: $(SRCS_DIR)%.c
	$(MKDIR) $(OBJS_DIR)
	$(MKDIR) $(OBJS_DIR)srcs
	$(MKDIR) $(OBJS_DIR)srcs/ft_is
	$(MKDIR) $(OBJS_DIR)srcs/ft_lst
	$(MKDIR) $(OBJS_DIR)srcs/ft_mem
	$(MKDIR) $(OBJS_DIR)srcs/ft_printf
	$(MKDIR) $(OBJS_DIR)srcs/ft_put
	$(MKDIR) $(OBJS_DIR)srcs/ft_stdlib
	$(MKDIR) $(OBJS_DIR)srcs/ft_str
	$(MKDIR) $(OBJS_DIR)srcs/ft_to
	$(MKDIR) $(@D)
	$(CC) $(CFLAGS) $(INC) -c $< -o $@

clean:
	@$(RM)  $(OBJS_DIR)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
