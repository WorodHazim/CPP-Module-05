/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wuabdull <wuabdull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 18:37:17 by wuabdull          #+#    #+#             */
/*   Updated: 2026/04/13 18:37:18 by wuabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

int main()
{
    std::srand(std::time(0));

    Intern someRandomIntern;
    Bureaucrat boss("Boss", 1);

    AForm* form1 = someRandomIntern.makeForm("robotomy request", "Bender");
    if (form1)
    {
        boss.signForm(*form1);
        boss.executeForm(*form1);
        delete form1;
    }

    std::cout << std::endl;

    AForm* form2 = someRandomIntern.makeForm("shrubbery creation", "home");
    if (form2)
    {
        boss.signForm(*form2);
        boss.executeForm(*form2);
        delete form2;
    }

    std::cout << std::endl;

    AForm* form3 = someRandomIntern.makeForm("presidential pardon", "Arthur");
    if (form3)
    {
        boss.signForm(*form3);
        boss.executeForm(*form3);
        delete form3;
    }

    std::cout << std::endl;

    AForm* wrong = someRandomIntern.makeForm("unknown form", "test");
    if (wrong)
        delete wrong;

    return 0;
}