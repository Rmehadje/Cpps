/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 12:51:19 by rmehadje          #+#    #+#             */
/*   Updated: 2024/07/22 12:58:18 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack>
#include <string>
#include <cstdlib>
#include <iostream>
#include "RPN.hpp"

std::string	merge(char **argv){
    std::string result;
    for (int i = 1; argv[i]; ++i){
        result += argv[i];
        if (argv[i + 1])
            result += ' ';
    }
    return result;
}

bool    isOp(char c){
    return c == '+' || c == '*' ||  c == '-' ||  c == '/';
}

bool    isValidNumber(const std::string &str){
    if (str.empty()) return false;
    if (str.length() > 1) return false;
    for (std::size_t i = 0; i < str.length(); ++i){
        if (!std::isdigit(str[i])) return false;
        int nbr = std::atoi(str.c_str());
        if (nbr < 0 || nbr > 9 ) return false;
    }
    return true;
}

int    checkInput(std::string input){
    if (input.empty()) return 1;
    int nbr = 0;
    int op = 0;
    std::istringstream iss(input);
    std::string token;
    while (iss >> token){
        if (std::isdigit(token[0])){
            if (!isValidNumber(token)) return 1;
            nbr++;
        }
        else if(isOp(token[0])){
            if (token.length() != 1) return 1;
            op++;
        }
        else
            return 1;
    }
    return nbr != op + 1;
}

int main(int argc, char **argv){
    if (argc < 2){
        std::cerr << "Wrong number of arguments, usage : number number operator" << std::endl;
        return 1;
    }
    std::string input;
    input = merge(argv);
    if (checkInput(input) == 1){
        std::cerr << "Error: invalid input" << std::endl;
        return 1;
    }
    RPN rpn(input);
    return 0;
}