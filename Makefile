NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
HEADERFILES = libft.h
HEADERDIR = ./hdr/
HEADER = $(addprefix $(HEADERDIR), $(HEADERFILES))
SRCSDIR = ./src/
SRCS = $(addprefix $(SRCSDIR), $(SRCSFILES))
SRCSFILES = 	ft_putchar.c \
				ft_putchar_fd.c \
				ft_putstr.c \
				ft_putstr_fd.c \
				ft_putendl.c \
				ft_putendl_fd.c \
				ft_putnbr.c \
				ft_putnbr_fd.c \
				ft_strlen.c \
				ft_memalloc.c \
				ft_strclr.c \
				ft_striter.c \
				ft_strequ.c \
				ft_strnequ.c \

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJS)
	ranlib $(NAME)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re



