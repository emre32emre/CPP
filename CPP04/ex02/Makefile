all: 
	@c++ -o Polymorphism3 main.cpp AAnimal.cpp Dog.cpp Cat.cpp Brain.cpp -Wall -Wextra -Werror -std=c++98
	@echo "Derlendi"

wrong:
	@c++ -o WrongPolymorphism3 wrongmain.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp -Wall -Wextra -Werror -std=c++98 
	@echo "Yanlış kod derlendi"
fclean:
	rm -rf Polymorphism3 WrongPolymorphism3

re: fclean all