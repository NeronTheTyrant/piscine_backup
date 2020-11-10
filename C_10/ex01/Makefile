SPATH	=	./srcs/

IPATH	=	./includes/

SRCS	=	${SPATH}main.c

OBJS	=	${SRCS:.c=.o}

CC	= 	gcc

CFLAGS	=	-Werror -Wall -Wextra -I${IPATH}

RM	=	rm -f

NAME	=	ft_cat

.c.o	:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}	:	${OBJS}
		${CC} ${CFLAGS} -o ${NAME} ${OBJS}

all	:	${NAME}

clean	:	
		${RM} ${OBJS}

fclean	:	clean
		${RM} ${NAME}

re	:	fclean all

.PHONY	:	all clean re fclean
