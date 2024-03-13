FILES = ft_bzero.c ft_atoi.c ft_isalnum.c ft_isalpha.c ft_split.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_isascii.c ft_itoa.c ft_strjoin.c ft_strtrim.c ft_strnstr.c ft_substr.c ft_isdigit.c ft_strdup.c ft_isprint.c ft_calloc.c ft_memcpy.c ft_memset.c ft_memmove.c ft_memcmp.c ft_memchr.c ft_strrchr.c ft_strchr.c ft_strlcat.c ft_strncmp.c ft_strlcpy.c ft_strlen.c ft_strrchr.c ft_tolower.c ft_toupper.c
OBJECTS = $(FILES:.c=.o)
FLAGS = -Wall -Werror -Wextra
BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
BONUS_OBJECTS = $(BONUS:.c=.o)
NAME = libft.a

all:$(NAME)

$(NAME):$(OBJECTS)	
	@ar crs $(NAME) $(OBJECTS)
$(OBJECTS):$(FILES) 
	@gcc $(FLAGS) -c $(FILES)

clean:
	@rm -f $(OBJECTS)

fclean:
	@rm -f $(NAME) $(OBJECTS)

bonus:
	@gcc $(FLAGS) -c $(BONUS)
	@ar crs $(NAME) $(BONUS_OBJECTS)
re: fclean all

.PHONY: all clean fclean re
