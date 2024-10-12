/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 11:57:38 by rmehadje          #+#    #+#             */
/*   Updated: 2024/07/09 14:30:14 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




#pragma once

#include <iostream>
#include "Bureaucrat.hpp"
#include <string>

class Bureaucrat;

class AForm{
	private:
		const	std::string name;
		bool					isitSigned;
		const int			gradeSign;
		const int			gradeExec;
		AForm(const std::string name, int gradeSign, int gradeExec);
	public:
		virtual ~AForm();
		AForm(const AForm &og);
		AForm &operator=(const AForm &cp);

		std::string	getName() const;
		bool			getSigned() const;
		int			getGradeSign() const;
		int			getGradeExec() const;

		void			beSigned(const Bureaucrat &Bureaucrat);
		virtual void	execute(Bureaucrat const &executor) const = 0;

		class GradeTooHighException: public std::exception{
			public:
			virtual const char *what(void) const throw() { return "grade too high";};
		};
		class GradeTooLowException: public std::exception{
			public:
			virtual const char *what(void) const throw() { return "grade too low";};
		};
		class AFormNotSignedException : public std::exception{
			public:
				virtual const char *what(void) const throw() { return "the form has not been signed";};
		};
};

std::ostream &operator<<(std::ostream &out, const AForm &value);