/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcybak <tcybak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 14:15:00 by tcybak            #+#    #+#             */
/*   Updated: 2025/10/01 14:30:12 by tcybak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <cstdlib>

class   Contact
{
    public:
        Contact();
        ~Contact();
        std::string getFirstName();
        void        setFirstName(std::string value);
        std::string getlastName();
        void        setlastName(std::string value);
        std::string getnickname();
        void        setnickname(std::string value);
        std::string getnumber();
        void        setnumber(std::string value);
        std::string getsecret();
        void        setsecret(std::string value);
    private:
        std::string _first_name;
        std::string _last_name;
        std::string _nickname;
        std::string _phone_number;
        std::string _darkest_secret;
};

#endif
