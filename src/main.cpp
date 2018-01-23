#include "physix.hpp"
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    Phyvec *p = new Phyvec();

    p->setX(21);
    p->setY(42);
    p->setZ(84);
    cout << *p << endl;
    return 0;
}
