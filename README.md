# CPP Module 05 - Repetition and Exceptions

This repository contains my solutions for **C++ Module 05** from the 42 curriculum.

## About the Module

This module focuses on:

- Exceptions
- Orthodox Canonical Form
- Class relationships
- Abstract classes
- Inheritance
- Polymorphism

The exercises simulate a bureaucratic system with bureaucrats, forms, execution rules, and an intern that can create forms dynamically.

---

## Project Structure

ex00/
ex01/
ex02/
ex03/

Each exercise has its own source files and Makefile.

Exercises
ex00 - Bureaucrat

Implementation of the Bureaucrat class with:

constant name
grade from 1 to 150
grade increment/decrement
custom exceptions:
GradeTooHighException
GradeTooLowException
ex01 - Form

Adds the Form class with:

signing requirements
execution requirements
signing logic through Bureaucrat::signForm()
ex02 - AForm and Derived Forms

Turns Form into an abstract class AForm and adds:

ShrubberyCreationForm
RobotomyRequestForm
PresidentialPardonForm

Also introduces execution logic with grade checks.

ex03 - Intern

Implements the Intern class that creates forms dynamically using:
<pre>
AForm* makeForm(const std::string& formName, const std::string& target);
</pre>
Supported form names:

"shrubbery creation"
"robotomy request"
"presidential pardon"
Compilation

Go inside any exercise folder and run:
<pre>
make
</pre>

Example:

<pre>
cd ex00
make
./Bureaucrat
</pre>

Notes
Code is written in C++98
Compiled with:

<pre>
-Wall -Wextra -Werror -std=c++98
</pre>

No STL containers or forbidden functions were used
