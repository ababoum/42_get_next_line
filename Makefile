CC			= @gcc

SRCS		= ./get_next_line.c \
				./get_next_line_utils.c

INCLUDES	= ./get_next_line.h

OBJS		= $(SRCS:.c=.o)

CFLAGS		= -Wall -Wextra -Werror -g -fsanitize=address

NAME		= gnl

all: $(NAME)

$(NAME):	$(OBJS) $(INCLUDES)
		$(CC) $(CFLAGS) $(SRCS) -o $(NAME) -lreadline
		@echo "\e[1;32m $(NAME) executable is compiled and ready.\e[0m"

clean:
		@rm -f $(OBJS)
		@echo "\e[1;36m .o files successfully deleted.\e[0m"

fclean:	clean
		@rm -f $(NAME)
		@echo "\e[1;36m $(NAME) executable successfully deleted.\e[0m"

re:	fclean $(NAME)

.PHONY: clean fclean all re