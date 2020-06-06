CC=			gcc

NAME=		libft.a

CFLAGS=		-Werror -Wextra -Wall

LIB=		-I./includes

FT_FILES=	libft/ft_memset.c\
			libft/ft_bzero.c\
			libft/ft_memcpy.c\
			libft/ft_memccpy.c\
			libft/ft_memmove.c\
			libft/ft_memchr.c\
			libft/ft_memcmp.c\
			libft/ft_strlen.c\
			libft/ft_strnlen.c\
			libft/ft_isalpha.c\
			libft/ft_isdigit.c\
			libft/ft_isalnum.c\
			libft/ft_isascii.c\
			libft/ft_isprint.c\
			libft/ft_isspace.c\
			libft/ft_toupper.c\
			libft/ft_tolower.c\
			libft/ft_strchr.c\
			libft/ft_strrchr.c\
			libft/ft_strncmp.c\
			libft/ft_strlcpy.c\
			libft/ft_strncat.c\
			libft/ft_strlcat.c\
			libft/ft_strnstr.c\
			libft/ft_atoi.c\
			libft/ft_calloc.c\
			libft/ft_strdup.c\
			libft/ft_substr.c\
			libft/ft_strjoin.c\
			libft/ft_strtrim.c\
			libft/ft_split.c\
			libft/ft_itoa.c\
			libft/ft_itoa_base.c\
			libft/ft_utoa.c\
			libft/ft_utoa_base.c\
			libft/ft_lutoa.c\
			libft/ft_lutoa_base.c\
			libft/ft_strmapi.c\
			libft/ft_putchar_fd.c\
			libft/ft_putchar.c\
			libft/ft_putstr_fd.c\
			libft/ft_putstr.c\
			libft/ft_putendl_fd.c\
			libft/ft_putendl.c\
			libft/ft_putnbr_fd.c\
			libft/ft_putnbr.c

GNL_FILES=	get_next_line/get_next_line.c\
			get_next_line/get_next_line_utils.c

BONUS=		lst/ft_lstnew_bonus.c\
			lst/ft_lstadd_front_bonus.c\
			lst/ft_lstsize_bonus.c\
			lst/ft_lstlast_bonus.c\
			lst/ft_lstadd_back_bonus.c\
			lst/ft_lstdelone_bonus.c\
			lst/ft_lstclear_bonus.c\
			lst/ft_lstiter_bonus.c\
			lst/ft_lstmap_bonus.c

OBJ=		$(FT_FILES:.c=.o)\
			$(GNL_FILES:.c=.o)

B_OBJ=		$(BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

%.o: %.c
	$(CC) -c $(CFLAGS) $(LIB) -o $@ $<

clean:
	@rm -rf $(OBJ) $(B_OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean $(NAME)

bonus: $(OBJ) $(B_OBJ)
	ar rc $(NAME) $(OBJ) $(B_OBJ)
	ranlib $(NAME)
