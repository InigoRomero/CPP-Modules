NAME = replace

SRCS =	main.cpp 

INCS_DIR = incs/Replace.hpp

INCLUDE = -I$(INCS_DIR)
FLAGS = -Wall -Wextra -Werror $(INCLUDE)

OBJS_DIR 	= 	objs/
OBJ 		= 	$(SRCS:.cpp=.o)
OBJS 		= 	$(addprefix $(OBJS_DIR), $(OBJ))

$(OBJS_DIR)%.o :	$(SRCS)%.cpp 
	@mkdir -p $(OBJS_DIR)
	@clang++ $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@clang++ -g -fsanitize=address $(FLAGS) -o $(NAME) $(OBJS)

all: $(NAME)

clean:
	@rm -rf $(OBJS_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

run: $(NAME)
	./$(NAME)
