SRCS	=	ft_printf.c	\
			ft_printf_utils.c\
			ft_printf_utils_2.c\

NAME = libftprintf.a

OBJS = $(SRCS:.c=.o)

OBJSB = $(SRCSB:.c=.o)

CC = gcc

CC_FLAGS = -Wall -Werror -Wextra

.c.o :
	@echo "Compiling: $<"
	@$(CC) $(CC_FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo "ft_printf done !"

all: $(NAME)

clean:
	@rm -rf $(OBJS) $(OBJSB)

fclean: clean
	@rm -f $(NAME)

re: fclean all

bonus: $(NAME) $(OBJSB)
	@ar rcs $(NAME) $(OBJS) $(OBJSB)
	@echo "ft_printf bonus done ! "
