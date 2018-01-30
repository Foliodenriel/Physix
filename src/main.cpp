#include "physix.hpp"
#include "PhyObject.hpp"
#include <iostream>
#include <math.h>
#include "boost/multiprecision/cpp_int.hpp"
#include "boost/multiprecision/float128.hpp"

using namespace std;
using namespace boost::multiprecision;

int main(int argc, char **argv)
{
    PhyObject   *p = new PhyObject("Earth");
    Phyvec      v;

    v.setX(0);
    v.setY(-1);
    v.setZ(0);
    p->setMass(PhyConst::EARTH_MASS);
    p->setRadius(PhyConst::EARTH_RADIUS);
    p->addForce(v, 9.81);
    cout << "Somme des forces = " << p->getForce() << endl;

    return 0;
}
