#pragma once 

#include <iostream>

class Bureaucrat{

private:
    const std::string name;
    int grade;

public:
    Bureaucrat();
    Bureaucrat(const std::string &name, int grade);
    Bureaucrat(const Bureaucrat &other);
    ~Bureaucrat();
    Bureaucrat &operator =(const Bureaucrat &other);

    const std::string &getName() const;
    int getGrade() const;

    void incrementGrade(int change = 1);
    void decrementGrade(int change = 1);

    class GradeTooHighException: public std::exception{
        virtual const char* what() const throw();
    };

    class GradeTooLowException: public std::exception {
		virtual const char*	what() const throw();
	};
};