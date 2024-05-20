/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:48:30 by rmehadje          #+#    #+#             */
/*   Updated: 2024/05/20 15:15:18 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iosteram>
#include <fsteram>

int main(int argc, char **argv)
{
	std::string	s1 = std::string(argv[2]);
	std::string	s2 = std::string(argv[3]);
	if (argc == 4)
	{
		std::ifstream	infile(argv[1]);
		if (!infile){
			std::cerr << "error: cannot open file" << std::endl;
			return 1;
		}
		std::string	lines;
		std::string every;
		while (std::getline(infile, lines)){
			every += lines;
			if (infile.eof())
				break ;
			every += '\n';
		}
		std::ifstream	outfile(argv[1] + ".replace");
		outfile << every;
		int i = 0;
		while (i < str.size(outfile)){
			
		}
	}
}