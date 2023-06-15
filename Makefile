NAME    	= libft.a

SRCS_DIR	=	/src

SRCS    	= 	ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
				ft_isprint.c ft_strlen.c ft_strncmp.c ft_strlcpy.c \
				ft_strnstr.c ft_strlcat.c ft_memset.c ft_strchr.c ft_strrchr.c ft_memcpy.c \
				ft_memmove.c ft_memchr.c ft_memcmp.c ft_bzero.c ft_toupper.c ft_tolower.c \
				ft_atoi.c ft_itoa.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c \
				ft_split.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
				ft_putnbr_fd.c

HEADER		=	./header/libft.h

OBJS    	=	$(addprefix $(OBJ_DIR), $(addprefix $(SRCS_DIR)/, $(SRCS:.c=.o)))

OBJ_DIR		=	./obj

CFLAGS		=	-Wall -Wextra -Werror

all: $(NAME)

$(OBJ_DIR)/%.o: %.c
	@mkdir -p  $(OBJ_DIR) $(OBJ_DIR)$(SRCS_DIR)
	cc $(CFLAGS) -c $< -o $@

$(NAME): $(HEADER) $(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS) $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

git: fclean
	git add . && clear && git status

push:
	git add . && clear && git status && git commit -m "fast att" && git push

.PHONY: all clean fclean re git