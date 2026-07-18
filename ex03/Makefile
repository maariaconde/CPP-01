NAME = Weapon

C_FILES = main.cpp \
		HumanA.cpp \
		HumanB.cpp \
		Weapon.cpp \
		  
O_FILES = ${C_FILES:.cpp=.o}

all: ${NAME}

${NAME}: ${O_FILES}
	c++ ${O_FILES} -o ${NAME}

clean:
	@rm -f ${O_FILES}

fclean: clean
	@rm -f ${NAME}

re: fclean all

%.o: %.cpp
	c++ -c -Wall -Wextra -Werror -std=c++98 -o $@ $<

.PHONY: all clean fclean re