NAME = libft.a

SRCS = ft_isalpha.c

OBJS = $(SRCS:.c=.o)

CC = cc
RM = rm -f
AR = ar rcs

CFLAGS = -Wall -Wextra -Werror -g

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(AR) $@ $^

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME) 

re: fclean all

.PHONY: all clean fclean re
