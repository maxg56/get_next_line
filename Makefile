
SCRS		=  get_next_line_utils.c  get_next_line.c

OBJS		= ${SCRS:.c=.o}

BONUS		= 

BONUS_OBJS	= ${BONUS:.c=.o}

NAME		= get_next_line.aut

NAMETESTS	= tests.out	

CC			= cc 
CFLAGS		= -Wall -Wextra -Werror -D UFFER_SIZE=42

all:		${NAME}

%.o: %.c
			${CC} ${CFLAGS} -c $< -o $@ -I libft.h


clean:
			rm -f ${OBJS} ${BONUS_OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

bonus :		$(OBJS) $(BONUS_OBJS)
			ar rcs $(NAME) $^

tests:		all
			${CC} ${CFLAGS} .tests.c -L . -l ft  -o ${NAMETESTS}
			./${NAMETESTS}
			rm -f ${NAMETESTS}
			
.PHONY:		all clean fclean re bonus tests 