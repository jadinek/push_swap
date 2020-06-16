SRC = ft_strlen.c\
	ft_strdup.c\
	ft_strcpy.c\
	ft_strcmp.c\
	ft_strncmp.c\
	ft_atoi.c\
	ft_isalpha.c\
	ft_isdigit.c\
	ft_isalnum.c\
	ft_isascii.c\
	ft_isprint.c\
	ft_strnew.c\
	ft_strdel.c\
	ft_strchr.c\
	ft_strrchr.c\
	ft_strsub.c\
	ft_strjoin.c\
	ft_strtrim.c\
	ft_strsplit.c\
	ft_itoa.c\
	ft_putchar.c\
	ft_putstr.c\
	ft_putendl.c\
	ft_putnbr.c\
	ft_strrev.c\
	ft_atol.c\
	get_next_line.c\

OBJ = $(SRC:.c=.o)

SRCDIR = srcs

OBJDIR = objs

SRCS = $(addprefix $(SRCDIR)/, $(SRC))

OBJS = $(addprefix $(OBJDIR)/, $(OBJ))

HEADER = -I includes

CC = gcc

CFLAGS = -c -Wall -Wextra -Werror

NAME = libft.a

.PHONY: all clean fclean re
.SUFFIXES: .c .o

all: $(NAME)

$(OBJS): $(SRCS)
	/bin/mkdir -p $(OBJDIR) ;
	$(CC) $(CFLAGS) $(SRCS) $(HEADER) ;
	/bin/mv $(OBJ) $(OBJDIR)/

$(NAME): $(OBJS)
	ar rcs $@ $^
	ranlib $@

clean:
	/bin/rm -rf $(OBJDIR)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
