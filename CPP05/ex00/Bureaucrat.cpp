#include "Bureaucrat.hpp"

#include <iostream>
Bureaucrat::Bureaucrat() : name("Noname"), grade (1){
    std::cout << "Default contructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : name(name) , grade(grade){
    std::cout << "Bureaucrat first constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat() {
    std::cout << "Bureaucrat dectructor called" << std::endl; 
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.name) , grade(other.grade){
    std::cout << "Bureaucrat copy constructor called " << std::endl;
}

Bureaucrat& Bureaucrat::operator =(const Bureaucrat& other){
    if (this != &other)
        grade = other.grade;
    return *this;
}

const std::string &Bureaucrat::getName() const{ return name; }

int Bureaucrat::getGrade() const{ return grade; }

void Bureaucrat::incrementGrade(int change){ 
    if (grade + change > 150)
        throw GradeTooLowException();
    grade -= change;
}

void Bureaucrat::decrementGrade(int change){ 
    if ( grade - change < 1)
        throw GradeTooHighException();
    grade += change; 
}

const char* Bureaucrat::GradeTooLowException::what() const throw () {
    return "Bureaucrat grade too low!";
}

const char*	Bureaucrat::GradeTooHighException::what() const throw (){
	return "Bureaucrat grade too high!";
}


