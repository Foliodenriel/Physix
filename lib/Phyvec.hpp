#ifndef PHYVEC_HPP
# define PHYVEC_HPP

# include <iostream>

class Phyvec {

    public:

        Phyvec( void );
        ~Phyvec( void );

        double  getX() const;
        double  getY() const;
        double  getZ() const;
        void    setX( double x );
        void    setY( double y );
        void    setZ( double z );

    private:

        double _x;
        double _y;
        double _z;
};

// Operator overloading -- Print vector --
inline std::ostream& operator<<(std::ostream& os, const Phyvec& v)
{
    os << "( " << v.getX();
    os << " ; " << v.getY();
    os << " ; " << v.getZ() << " )";
    return os;
}

#endif
