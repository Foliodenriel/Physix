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

float128        Phyvec::getX() const { return this->_x; }

float128        Phyvec::getY() const { return this->_y; }

float128        Phyvec::getZ() const { return this->_z; }

float128        Phyvec::getW() const { return this->_w; }

void            Phyvec::setX( float128 x ) {

    this->_x = x;
}

void            Phyvec::setY( float128 y ) {

    if (this->_dim >= 2)
        this->_y = y;
}

void            Phyvec::setZ( float128 z ) {

    if (this->_dim >= 3)
        this->_z = z;
}

void            Phyvec::setW( float128 w ) {

    if (this->_dim == 4)
        this->_w = w;
}

float128        Phyvec::getNorme() const {

    if (this->_dim == 1)
        return  sqrt(pow(this->_x, 2));
    else if (this->_dim == 2)
        return  sqrt(pow(this->_x, 2) +
                pow(this->_y, 2));
    else if (this->_dim == 3)
        return  sqrt(pow(this->_x, 2) +
                pow(this->_y, 2) +
                pow(this->_z, 2));
    else if (this->_dim == 4)
        return  sqrt(pow(this->_x, 2) +
                pow(this->_y, 2) +
                pow(this->_z, 2) +
                pow(this->_w, 2));
}

void            Phyvec::setNorme( float128 n ) {

    this->_x = this->_x * n;
    this->_y = this->_y * n;
    this->_z = this->_z * n;
    this->_w = this->_w * n;
}

void            Phyvec::normalize() {

    float128 n = this->getNorme();
    this->_x = this->_x / n;
    this->_y = this->_y / n;
    this->_z = this->_z / n;
    this->_w = this->_w / n;
}

unsigned int    Phyvec::getDim() const { return this->_dim; }

void            Phyvec::setDim( unsigned int d ) {

    if (this->_flag & PHYVEC_VECTOR_DIMENSION_RESIZABLE)
        this->_dim = d;
    else
        std::cerr << "ERROR: Vector dimension is not resizable." << std::endl;
 }
