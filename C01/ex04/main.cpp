/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcybak <tcybak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 14:52:27 by tcybak            #+#    #+#             */
/*   Updated: 2025/10/08 13:08:29 by tcybak           ###   ########.fr       */
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
    std::string     toReplace = av[2];
    std::string     replaceWith = av[3];
    std::ofstream   file(av[1]);   
    if (!file || !file.is_open()) 
    {
        std::cerr << "Error file that does not exist or permission does not exist" << std::endl;
        return (1);
    }
    else if (toReplace == "" || replaceWith == "") 
    {
        std::cerr << "Error argument empty" << std::endl;
        return (1); 
    }
    std::getline(file, fileContent,'\0');
    std::cout << fileContent << std::endl;
    fileContent = replace(fileContent, toReplace, replaceWith);
    file << fileContent;
    file.close();
}
