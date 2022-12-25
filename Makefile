SRCS			=	ft_printf.c \
					ft_putcaphexa.c \
					ft_putchar.c \
					ft_puthexa.c \
					ft_putnbr.c \
					ft_putstr.c \
					ft_putunsigned.c \
					ft_puthexalong.c 

OBJS			= $(SRCS:.c=.o)

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror

NAME			= libftprintf.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar -rc $(NAME) $(OBJS)
				ranlib $(NAME)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re bonus