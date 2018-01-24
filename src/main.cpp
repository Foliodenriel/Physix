#include "physix.hpp"
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    Phyvec *p = new Phyvec(2);

    p->setX(21);
    p->setY(42);
    p->setZ(84);
    cout << "Dimension: " << p->getDim() << endl;
    cout << *p << endl;
    cout << "Z: " << p->getZ() << endl;

    p->setDim(3);
    p->setZ(84);
    cout << "Dimension: " << p->getDim() << endl;
    cout << *p << endl;
    cout << "Z: " << p->getZ() << endl;
    return 0;
}
