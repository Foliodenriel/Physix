#include "Phyvec.hpp"

Phyvec::Phyvec( void ) {

    this->_x = 0;
    this->_y = 0;
    this->_z = 0;
    return ;
}

Phyvec::~Phyvec( void ) {

    return ;
}

double  Phyvec::getX() const {

    return this->_x;
}

double  Phyvec::getY() const {

    return this->_y;
}

double  Phyvec::getZ() const {

    return this->_z;
}

void    Phyvec::setX( double x ) {

    this->_x = x;
}

void    Phyvec::setY( double y ) {

    this->_y = y;
}

void    Phyvec::setZ( double z ) {

    this->_z = z;
}
