/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:48:30 by rmehadje          #+#    #+#             */
/*   Updated: 2024/05/21 16:38:02 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
	if (argc != 4){
		std::cerr << "please write the correct number of arguements (program name, infile, character to be changed, inserted character)" << std::endl;	
		return 1;
	}
	std::string	s1 = std::string(argv[2]);
	if (s1.empty()){
		std::cerr << "error: cannot take empty characters as arguemnts" << std::endl;
		return 1;
	}
	if (s1.length() > 1)
	{
		std::cerr << "please make sure you only write one character as argument" << std::endl;
		return 1;
	}
	else
	{
		std::string	s2 = std::string(argv[3]);
		if (s1 == s2){
			std::cerr << "nothing to be changed here" << std::endl;
			return 1;
		}
		if (s2.length() > 1)
		{
			std::cerr << "please make sure you only write one character as argument" << std::endl;
			return 1;
		}
		std::ifstream	infile(argv[1]);
		if (!infile){
			std::cerr << "error: cannot open file" << std::endl;
			infile.close();
			return 1;
		}
		std::string	lines;
		std::string every;
		while (std::getline(infile, lines)){
			every += lines;
			if (every.find(s1) == std::string::npos){
				std::cerr << "error: cannot find the character '" << s1 << "'" << std::endl;
				infile.close();
				return 1;
			}
			if (infile.eof())
				break ;
			every += '\n';
		}
		std::ofstream	outfile(std::string (argv[1]) + ".replace");
		if (!outfile){
			std::cerr << "error: cannot open file" << std::endl;
			infile.close();
			outfile.close();
			return 1;
		}
		int i = every.find(s1);
		while (i < every.length()){
				every.erase(i, s1.length());
				every.insert(i, s2);
				i = every.find(s1);
			}
		outfile << every;
		infile.close();
		outfile.close();
	}
	return (0);
}
