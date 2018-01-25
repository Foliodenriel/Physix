#include "PhyObject.hpp"

PhyObject::PhyObject( std::string name ) {

    this->_name = name;
    this->_mass = 0;

    return ;
}

PhyObject::~PhyObject( void ) {

    return ;
}

std::string     PhyObject::getName() const { return this->_name; }

void            PhyObject::setName( std::string n ) { this->_name = n; }

float128       PhyObject::getMass() const { return this->_mass; }

void            PhyObject::setMass( float128 m ) { this->_mass = m; }

float128       PhyObject::getRadius() const { return this->_radius; }

void            PhyObject::setRadius( float128 r ) { this->_radius = r; }

float128       PhyObject::getGravitationalAcceleration() const { return this->_gravitationalAcceleration; }

void            PhyObject::update( void ) {

    this->_gravitationalAcceleration = PhyConst::GRAVITATIONAL_CONSTANT * (this->_mass / pow(this->_radius, 2));
}
