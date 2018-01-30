#include "PhyObject.hpp"

PhyObject::PhyObject( std::string name ) : _name(name) {

    this->_mass = 0;
    this->_force.setX(0);
    this->_force.setY(0);
    this->_force.setZ(0);
    PhyObject::_nbInst++;
    return ;
}

PhyObject::~PhyObject( void ) {

    PhyObject::_nbInst--;
    return ;
}

size_t          PhyObject::getNbInst() {

    return PhyObject::_nbInst;
}

std::string     PhyObject::getName() const { return this->_name; }

void            PhyObject::setName( std::string n ) { this->_name = n; }

float128        PhyObject::getMass() const { return this->_mass; }

void            PhyObject::setMass( float128 m ) { this->_mass = m; }

float128        PhyObject::getRadius() const { return this->_radius; }

void            PhyObject::setRadius( float128 r ) { this->_radius = r; }

float128        PhyObject::getGravitationalAcceleration() const { return this->_gravitationalAcceleration; }

void            PhyObject::update( float128 d ) {

    this->_gravitationalAcceleration = PhyConst::GRAVITATIONAL_CONSTANT * (this->_mass / pow(this->_radius + d, 2));
}

Phyvec          PhyObject::getForce() const { return this->_force; }

void            PhyObject::addForce( Phyvec f, float128 n ) {

    Phyvec tmp;

    tmp.setX(0);
    tmp.setY(0);
    tmp.setZ(0);
    f.normalize();
    f.setNorme(n);
    this->_forceList.push_back( f );
    for (std::list<Phyvec>::iterator it = this->_forceList.begin(); it != this->_forceList.end(); it++) {

        tmp.setX(tmp.getX() + it->getX());
        tmp.setY(tmp.getY() + it->getY());
        tmp.setZ(tmp.getZ() + it->getZ());
    }
    this->_force.setX(tmp.getX());
    this->_force.setY(tmp.getY());
    this->_force.setZ(tmp.getZ());
    this->_force.setNorme(this->_mass);
}

void            PhyObject::clearForce() {

    this->_forceList.clear();
}

size_t  PhyObject::_nbInst = 0;
