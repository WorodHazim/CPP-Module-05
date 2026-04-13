/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wuabdull <wuabdull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 17:53:57 by wuabdull          #+#    #+#             */
/*   Updated: 2026/04/13 17:53:58 by wuabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    std::cout << "---- Sign success ----" << std::endl;
    try
    {
        Bureaucrat b("Worod", 8);
        Form f("Contract", 30, 10);

        std::cout << b << std::endl;
        std::cout << f << std::endl;

        b.signForm(f);

        std::cout << f << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\n---- Sign fail ----" << std::endl;
    try
    {
        Bureaucrat b2("Ali", 100);
        Form f2("SecretForm", 20, 5);

        std::cout << b2 << std::endl;
        std::cout << f2 << std::endl;

        b2.signForm(f2);

        std::cout << f2 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\n---- Invalid form grades ----" << std::endl;
    try
    {
        Form bad1("BadForm1", 0, 10);
        std::cout << bad1 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        Form bad2("BadForm2", 10, 151);
        std::cout << bad2 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}