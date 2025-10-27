/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcybak <tcybak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 14:52:27 by tcybak            #+#    #+#             */
/*   Updated: 2025/10/27 15:44:24 by tcybak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

std::string replace(std::string content, std::string toreplace, std::string replaceWith)
{
    size_t pos = 0;

    while ((pos = content.find(toreplace, pos)) != std::string::npos)
    {
        content.erase(pos, toreplace.length());
        content.insert(pos, replaceWith);
        pos += replaceWith.length();
    }
    return (content);
}

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout   << "Need 1 file and 2 arguments"
                    << std::endl;
        return (0);
    }
    std::string     fileContent;
    std::string     file_name = av[1];
    std::string     toReplace = av[2];
    std::string     replaceWith = av[3];
    std::ifstream   file(av[1]);   
    std::string     new_name = file_name + ".replace";
    if (!file || !file.is_open()) 
    {
        std::cerr << "Error file that does not exist or permission does not exist" << std::endl;
        return (1);
    }
    else if (toReplace == "") 
    {
        std::cerr << "Error argument empty" << std::endl;
        return (1); 
    }
    std::ofstream   new_file(new_name.c_str());
    std::getline(file, fileContent,'\0');
    fileContent = replace(fileContent, toReplace, replaceWith);
    new_file << fileContent;
    file.close();
    new_file.close();
}
