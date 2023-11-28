all: 
	@c++ -o Polymorphism2 main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp -Wall -Wextra -Werror -std=c++98
	@echo "Derlendi"

wrong:
	@c++ -o WrongPolymorphism2 wrongmain.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp -Wall -Wextra -Werror -std=c++98 
	@echo "Yanlış kod derlendi"
fclean:
	rm -rf Polymorphism2 WrongPolymorphism2

re: fclean all