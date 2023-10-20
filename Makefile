NAME		=	libftprintf.a

CC			=	gcc

FLAGS		=	-Wall -Wextra -Werror

LIBFTDIR	=	libft/

LIBFT		=	libft.a

LIBFT_SRCS	=	$(LIBFTDIR)*.c

LIBFT_OBJS	=	$(LIBFT_SRCS:.c=.o)

SRCS		=	ft_printf.c ft_putnbr_base.c ft_print_memory.c ft_print_nbr.c \
				ft_print_str.c ft_print_char.c

OBJS		=	$(SRCS:.c=.o)

TEST		=	main.c

.PHONY: all

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	ar -rcs $@ $(OBJS) $(LIBFTDIR)$(LIBFT)
	ranlib $(NAME)

$(LIBFT): $(LIBFTDIR)
	$(MAKE) -C $(LIBFTDIR)

# for all the ft_printf object files
$(OBJS): $(SRCS)
	$(CC) $(FLAGS) -c $^

# temporary file for testing purposes
$(TEST): $(NAME) $(LIBFT)
	$(CC) $(TEST) $(NAME) $(LIBFTDIR)$(LIBFT)

clean:
	$(MAKE) -C $(LIBFTDIR) clean
	rm $(OBJS)
	rm a.out

fclean: clean
	rm $(NAME)
	rm $(LIBFTDIR)$(LIBFT)

re: clean all

