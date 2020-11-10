SPATH	=	./srcs/

IPATH	=	./includes/

SRCS	=	${SPATH}main.c

OBJS	=	${SRCS:.c=.o}

CC	= 	gcc

CFLAGS	=	-Werror -Wall -Wextra -I${IPATH}

RM	=	rm -f

NAME	=	ft_display_file

.c.o	:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}	:	${OBJS}
		${CC} ${CFLAGS} -o ${NAME} ${OBJS}

all	:	${NAME}

clean	:	
		${RM} ${OBJS}

flcean	:	clean
		${RM} ${NAME}

re	:	flcean all

.PHONY	:	all clean fclean re
