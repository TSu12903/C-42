/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcybak <tcybak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 14:52:27 by tcybak            #+#    #+#             */
/*   Updated: 2025/10/07 22:06:23 by tcybak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string replace(std::string content, std::string replace)
{
    
}

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout   << "Need 1 file and 2 arguments"
                    << std::endl;
        return (0);
    }

    
    std::string     toReplace = av[2];
    std::string     replaceWith = av[3];
    std::ifstream   file(av[1]);
    
    if (!file || !file.is_open()) 
    {
        std::cerr << "Error file that does not exist or permission does not exist" << std::endl;
        return (1);
    }

    std::string     fileContent;

    std::getline(file, fileContent,'\0');
    
    std::cout << fileContent << std::endl;
    file.replace(fileContent, replaceWith);
}