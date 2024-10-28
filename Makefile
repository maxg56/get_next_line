
SCRS		=  get_next_line_utils.c  get_next_line.c main.c

OBJDIR		= obj
OBJS		= $(addprefix $(OBJDIR)/, $(SCRS:.c=.o))

NAME		= get_next_line

NAMETESTS	= tests.out	

CC			= cc 

UFFER_SIZE  = 10
CFLAGS		= -Wall -Wextra -Werror -D UFFER_SIZE=${UFFER_SIZE}

RM			= rm -f
MKDIR		= mkdir

all:		${NAME}

$(OBJDIR):
			${MKDIR} $(OBJDIR)  

$(OBJDIR)/%.o: %.c | $(OBJDIR)
			${CC} ${CFLAGS} -c $< -o $@

${NAME}:	${OBJS}
			${CC} ${CFLAGS} -o ${NAME} ${OBJS}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re