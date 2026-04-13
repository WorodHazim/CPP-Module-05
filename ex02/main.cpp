/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wuabdull <wuabdull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 18:06:22 by wuabdull          #+#    #+#             */
/*   Updated: 2026/04/13 18:06:23 by wuabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

int main()
{
    std::srand(std::time(0));

    Bureaucrat boss("Boss", 1);
    Bureaucrat mid("Mid", 50);
    Bureaucrat low("Low", 150);

    ShrubberyCreationForm s("home");
    RobotomyRequestForm r("Bender");
    PresidentialPardonForm p("Arthur");
    ShrubberyCreationForm unsignedForm("garden");

    std::cout << "---- Sign and execute shrubbery ----" << std::endl;
    boss.signForm(s);
    boss.executeForm(s);

    std::cout << "\n---- Sign and execute robotomy ----" << std::endl;
    boss.signForm(r);
    boss.executeForm(r);

    std::cout << "\n---- Sign and execute pardon ----" << std::endl;
    boss.signForm(p);
    boss.executeForm(p);

    std::cout << "\n---- Low bureaucrat fails to sign/execute pardon ----" << std::endl;
    low.signForm(p);
    low.executeForm(p);

    std::cout << "\n---- Mid bureaucrat fails to execute robotomy ----" << std::endl;
    mid.executeForm(r);

    std::cout << "\n---- Execute unsigned form ----" << std::endl;
    boss.executeForm(unsignedForm);

    return 0;
}