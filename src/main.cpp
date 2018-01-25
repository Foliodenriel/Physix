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
    PhyObject *p = new PhyObject("Earth");

    p->setMass(PhyConst::EARTH_MASS);
    p->setRadius(PhyConst::EARTH_RADIUS);
    p->update();
    cout << "g = " << p->getGravitationalAcceleration() << endl;

    return 0;
}
