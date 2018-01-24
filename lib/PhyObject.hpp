#ifndef PHYOBJECT_HPP
# define PHYOBJECT_HPP

# include <iostream>

class PhyObject {

    public:

        PhyObject( void );
        ~PhyObject( void );

    private:

        std::string _name;
        int         _mass;

};

#endif
