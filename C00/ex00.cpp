/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ex00.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcybak <tcybak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 10:57:05 by tcybak            #+#    #+#             */
/*   Updated: 2025/09/16 22:59:54 by tcybak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
  int x;
  int i;

  i = 0;
  x = 60;
  std::cout << "Basic Number " << x << std::endl << "Enter your number" << std::endl;
  std::cin >> x;
  while (i < 10)
  {
    std::cout << "Your number is: " << x << std::endl;
    ++i , ++x;
  }
  return 0;
}
