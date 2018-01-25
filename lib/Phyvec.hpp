#ifndef PHYVEC_HPP
# define PHYVEC_HPP

# define PHYVEC_VECTOR_DIMENSION_RESIZABLE 0x1

# include <iostream>

# include "boost/multiprecision/cpp_int.hpp"
# include "boost/multiprecision/float128.hpp"

using namespace boost::multiprecision;

class Phyvec {

    public:

        Phyvec( unsigned int d = 3, unsigned int flag = 0x0 );
        ~Phyvec( void );

        float128          getX() const;
        float128          getY() const;
        float128          getZ() const;
        float128          getW() const;
        void            setX( float128 x );
        void            setY( float128 y );
        void            setZ( float128 z );
        void            setW( float128 w );

        unsigned int    getDim() const;
        void            setDim( unsigned int d );

    private:

        float128          _x;
        float128          _y;
        float128          _z;
        float128          _w;
        unsigned int    _dim; // Vector dimension
        unsigned int    _flag;
};

// Operator overloading -- Print vector --
inline std::ostream& operator<<(std::ostream& os, const Phyvec& v)
{
    if (v.getDim() == 1) {

        os << "( " << v.getX() << " )";
    }
    else if (v.getDim() == 2) {

        os << "( " << v.getX();
        os << " ; " << v.getY() << " )";
    }
    else if (v.getDim() == 3) {

        os << "( " << v.getX();
        os << " ; " << v.getY();
        os << " ; " << v.getZ() << " )";
    }
    else if (v.getDim() == 4) {

        os << "( " << v.getX();
        os << " ; " << v.getY();
        os << " ; " << v.getZ();
        os << " ; " << v.getW() << " )";
    }
    return os;
}

#endif
