/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 13:06:12 by rmehadje          #+#    #+#             */
/*   Updated: 2024/07/09 14:27:37 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
    try
    {
        Bureaucrat  *bureaucrat = new Bureaucrat("Bureaucrat", 4);
        PresidentialPardonForm A = PresidentialPardonForm("AForm");
        RobotomyRequestForm B = RobotomyRequestForm("AForm2");
        ShrubberyCreationForm C = ShrubberyCreationForm("tree");

        std::cout << *bureaucrat << std::endl;
        std::cout << A << std::endl;
        std::cout << B << std::endl;
        std::cout << C << std::endl;
        std::cout << "----------------------------------------" << std::endl;
        std::cout << "Sign Form section " << std::endl;
        bureaucrat->signForm(A);
        bureaucrat->signForm(B);
        bureaucrat->signForm(C);

        std::cout << "----------------------------------------" << std::endl;
        std::cout << *bureaucrat << std::endl;
        std::cout << A << std::endl;
        std::cout << B << std::endl;
        std::cout << C << std::endl;

        std::cout << "----------------------------------------" << std::endl;
        std::cout << "Execute Form section " << std::endl;
        bureaucrat->executeForm(A);
        bureaucrat->executeForm(B);
        bureaucrat->executeForm(C);
    
        delete bureaucrat;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Grade out of range " << '\n';
    }

    return (0);
}