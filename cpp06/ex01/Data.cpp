/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 13:01:19 by pnolte            #+#    #+#             */
/*   Updated: 2023/07/12 15:17:01 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data() : _data(0) {}

Data::Data(int data) : _data(data) {}

Data::~Data() {}

Data::Data(Data const &Src) {
    *this = Src;
}


Data& Data::operator=(const Data &Src) {
    if (this != &Src)
        this->_data = Src._data;
    return *this;
}

int Data::getData() { return this->_data; }

/* ************************************************************************** */