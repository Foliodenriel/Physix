#include "Phyvec.hpp"

Phyvec::Phyvec( unsigned int d, unsigned int flag ) {

    this->_x = 0;
    this->_y = 0;
    this->_z = 0;
    this->_w = 0;
    if (d >= 1 && d <= 4)
        this->_dim = d;     // DEFAULT: 3
    else
        this->_dim = 3;
    this->_flag = flag;     // DEFAULT: 0x0
    return ;
}

Phyvec::~Phyvec( void ) {

    return ;
}

double          Phyvec::getX() const { return this->_x; }

double          Phyvec::getY() const { return this->_y; }

double          Phyvec::getZ() const { return this->_z; }

double          Phyvec::getW() const { return this->_w; }

void            Phyvec::setX( double x ) {

    this->_x = x;
}

void            Phyvec::setY( double y ) {

    if (this->_dim >= 2)
        this->_y = y;
}

void            Phyvec::setZ( double z ) {

    if (this->_dim >= 3)
        this->_z = z;
}

void            Phyvec::setW( double w ) {

    if (this->_dim == 4)
        this->_w = w;
}

unsigned int    Phyvec::getDim() const { return this->_dim; }

void            Phyvec::setDim( unsigned int d ) {

    if (this->_flag & PHYVEC_VECTOR_DIMENSION_RESIZABLE)
        this->_dim = d;
    else
        std::cerr << "ERROR: Vector dimension is not resizable." << std::endl;
 }
