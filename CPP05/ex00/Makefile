all: 
	@c++ -o Polymorphism main.cpp Animal.cpp Dog.cpp Cat.cpp -Wall -Wextra -Werror -std=c++98
	@echo "Derlendi"

wrong:
	@c++ -o WrongPolymorphism main.cpp WrongAnimal.cpp WrongCat.cpp -Wall -Wextra -Werror -std=c++98 
	@echo "Yanlış kod derlendi"
fclean:
	rm -rf Polymorphism

re: fclean all