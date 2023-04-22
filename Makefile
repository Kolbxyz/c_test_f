## VARIABLES

SRC    =    src/test.c  \
##  src/test2.c  \
##  src/test3.c

OBJ    =    $(SRC:.c=.o)

NAME    =    testFile

CFLAGS    =    -W -Wall -Wextra

CC    =    gcc

## RULES

$(NAME):    $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS)
	
all:    $(NAME)

clean:
	rm -f $(OBJ)

fclean:    clean
	rm -f $(NAME)

re:	fclean all

run:
	./$(NAME)

do:	$(NAME)
	clear
	./$(NAME)
	rm -f $(OBJ)
	rm -f $(NAME)
	

.PHONY:
