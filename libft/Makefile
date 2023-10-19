NAME	= libft.a

CC 		= gcc

FLAGS 	= -Wall -Wextra -Werror

MAIN	= main.c

SRCS 	= ft_putchar.c ft_putchar_fd.c ft_putstr.c ft_putendl.c \
		  ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
		  ft_strlen.c ft_isdigit.c ft_isalpha.c ft_isalnum.c ft_isascii.c \
		  ft_isprint.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strlcpy.c \
		  ft_strlcat.c ft_strrchr.c ft_strncmp.c ft_strnstr.c ft_bzero.c \
		  ft_memset.c ft_memmove.c ft_strdup.c ft_atoi.c ft_calloc.c \
		  ft_strjoin.c ft_strtrim.c ft_striteri.c ft_memcpy.c ft_memcmp.c \
		  ft_split.c ft_substr.c ft_itoa.c ft_memchr.c ft_strmapi.c

OBJS 	 = $(SRCS:.c=.o)

#bonus
BON_SRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
		   ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
		   ft_lstmap.c

BON_OBJS = $(BON_SRCS:.c=.o)
#bonus

AR		 = ar

ARFLAGS  = -rcs

all: $(NAME)

.PHONY: clean fclean all re bonus

# for main compilation; not required in final submission
# $(MAIN): $(NAME)
# 	$(CC) $@ -L. $(NAME) -lbsd

# added bonus objects as dependencies for libft.a
$(NAME): $(OBJS) $(BON_OBJS)
	$(AR) $(ARFLAGS) $@ $(OBJS) $(BON_OBJS)
	ranlib $(NAME)

$(OBJS): $(SRCS)
	$(CC) $(FLAGS) -c -I. $^

# bonus
$(BON_OBJS): $(BON_SRCS)
	$(CC) $(FLAGS) -c -I. $^

# bonus
bonus: $(BON_OBJS)

clean:
	rm $(OBJS) $(BON_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
