.PHONY: all, clean, fclean, re

NAME = Colleen Grace Sully 

END=\033[0m
OKC=\033[32m
KOC=\033[31m

FLAG = -Wall -Wextra -Werror

SRC_NAME = Colleen.c Grace.c Sully.c 
OBJ_NAME = $(SRC_NAME:.c=.o)

%.o: %.c
	@gcc $(FLAG) -o $@ -c $<

all: $(NAME)

$(NAME): $(OBJ_NAME)
		@echo
		@gcc $(FLAG) -o Colleen Colleen.o
		@gcc $(FLAG) -o Grace Grace.o
		@gcc $(FLAG) -o Sully Sully.o
		@echo "$(OKC) $(NAME) CREATED & READY$(END)"
		@echo

clean:
		@rm -rf $(OBJ_NAME)
		@echo "$(KOC)$(NAME)'s OBJS REMOVED$(END)"

fclean: clean
		@rm -f $(NAME)
		@echo "$(KOC)$(NAME) REMOVED$(END)"

re: fclean all
