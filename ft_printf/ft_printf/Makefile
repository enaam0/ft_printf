NAME = libftprintf.a

CC = cc
FLAGS = -Wall -Wextra -Werror
AR = ar rc
RM = rm -f

FIL_C =	ft_checker.c ft_putchar.c ft_putnbr_hx.c ft_putnbr_u.c ft_printf.c ft_putnbr_d.c ft_putnbr_p.c ft_putstr.c

FIL_O = $(FIL_C:.c=.o)

all : $(NAME)

%.o : %.c ft_printf.h
	$(CC) $(FLAGS) -c $<
	
$(NAME) : $(FIL_O)
	$(AR) $@ $^

clean : 
	$(RM) $(FIL_O)

fclean : clean
	$(RM) $(NAME)

re : fclean all