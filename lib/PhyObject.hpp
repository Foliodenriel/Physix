#ifndef PHYOBJECT_HPP
# define PHYOBJECT_HPP

# include <math.h>
# include <iostream>

# include "boost/multiprecision/cpp_int.hpp"
# include "boost/multiprecision/float128.hpp"

# include "Phyvec.hpp"

using namespace boost::multiprecision;

namespace PhyConst {

    const float128 GRAVITATIONAL_CONSTANT = 6.672 * pow(10, -11); // Newton constant

    const float128 EARTH_MASS = 5.972 * pow(10, 24);
    const float128 EARTH_RADIUS = 6371000;
}

class PhyObject {

    public:

        PhyObject( std::string name = "" );
        ~PhyObject( void );

        void            update( float128 d );

        std::string     getName() const;
        void            setName( std::string n );

        float128        getMass() const;
        void            setMass( float128 m );
        float128        getRadius() const;
        void            setRadius( float128 r );

        float128        getGravitationalAcceleration() const;
        Phyvec          getForce() const;
        void            addForce( Phyvec f, float128 n );
        void            clearForce();

        static size_t   getNbInst();

    private:

        std::string         _name;
        float128            _mass;                           // In Kg
        float128            _radius;                         // In m
        float128            _gravitationalAcceleration;      // In m/s^2
        float128            _acceleration;                   // In m/s^2
        Phyvec              _force;                          // In N or kg/m/s^2
        std::list<Phyvec>   _forceList;

        static size_t   _nbInst;

};

#endif
