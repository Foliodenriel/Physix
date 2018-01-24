#ifndef PHYVEC_HPP
# define PHYVEC_HPP

# define PHYVEC_VECTOR_DIMENSION_RESIZABLE 0x1

# include <iostream>

class Phyvec {

    public:

        Phyvec( unsigned int d = 3, unsigned int flag = 0x0 );
        ~Phyvec( void );

        double          getX() const;
        double          getY() const;
        double          getZ() const;
        double          getW() const;
        void            setX( double x );
        void            setY( double y );
        void            setZ( double z );
        void            setW( double w );

        unsigned int    getDim() const;
        void            setDim( unsigned int d );

    private:

        double          _x;
        double          _y;
        double          _z;
        double          _w;
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
