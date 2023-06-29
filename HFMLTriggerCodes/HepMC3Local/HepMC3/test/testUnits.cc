// -*- C++ -*-
//
// This file is part of HepMC
// Copyright (C) 2014-2023 The HepMC collaboration (see AUTHORS for details)
//
#include <iostream>

#include "HepMC3/Units.h"
#include "HepMC3/GenEvent.h"
using namespace HepMC3;
double conversion_factor( Units2::MomentumUnit from, Units2::MomentumUnit  to )
{
    FourVector2 m( 0.5*RAND_MAX-std::rand(), 0.5*RAND_MAX-std::rand(), 0.5*RAND_MAX-std::rand(), 0.5*RAND_MAX-std::rand());
    FourVector2 msave(m);
    Units2::convert(m,from,to );
    return m.e()/msave.e();//NAN?
}
double conversion_factor( Units2::LengthUnit from, Units2::LengthUnit  to )
{
    FourVector2 m( 0.5*RAND_MAX-std::rand(), 0.5*RAND_MAX-std::rand(), 0.5*RAND_MAX-std::rand(), 0.5*RAND_MAX-std::rand());
    FourVector2 msave(m);
    Units2::convert(m,from,to );
    return m.e()/msave.e();//NAN?
}
bool neq(const double a,const double b)
{
    return std::abs(a-b) >= 0.001*(std::abs(a)+std::abs(b));
}
int main()
{

    int err = 0;
    double cf = 0;
    GenEvent evt;
    std::cout << "Default units: " << Units2::name(evt.momentum_unit())
              << " " << Units2::name(evt.length_unit()) << std::endl;

    // check momentum conversion factors
    cf = conversion_factor( Units2::GEV, Units2::GEV );
    if( neq(cf,1) )
    {
        ++err;
        std::cerr << "wrong conversion factor " << cf
                  << " for GEV to GEV - should be 1 \n";
    }
    cf =  conversion_factor( Units2::MEV, Units2::MEV );
    if( neq(cf,1)  )
    {
        ++err;
        std::cerr << "wrong conversion factor " << cf
                  << " for MEV to MEV - should be 1 \n";
    }
    cf =  conversion_factor( Units2::MEV, Units2::GEV );
    if( neq(cf,0.001)  )
    {
        ++err;
        std::cerr << "wrong conversion factor " << cf
                  << " for MEV to GEV - should be 0.001 \n";
    }
    cf =  conversion_factor( Units2::GEV, Units2::MEV );
    if( neq(cf,1000.0)  )
    {
        ++err;
        std::cerr << "wrong conversion factor " << cf
                  << " for GEV to MEV - should be 1000 \n";
    }

    // check length conversion factors
    cf =  conversion_factor( Units2::MM, Units2::MM );
    if( neq(cf,1)  )
    {
        ++err;
        std::cerr << "wrong conversion factor " << cf
                  << " for MM to MM - should be 1 \n";
    }
    cf =  conversion_factor( Units2::CM, Units2::CM );
    if( neq(cf,1)  )
    {
        ++err;
        std::cerr << "wrong conversion factor " << cf
                  << " for CM to CM - should be 1 \n";
    }
    cf =  conversion_factor( Units2::CM, Units2::MM );
    if( neq(cf,10.0)  )
    {
        ++err;
        std::cerr << "wrong conversion factor " << cf
                  << " for CM to MM - should be 10 \n";
    }
    cf =  conversion_factor( Units2::MM, Units2::CM );
    if( neq(cf,0.1)  )
    {
        ++err;
        std::cerr << "wrong conversion factor " << cf
                  << " for MM to CM - should be 0.1 \n";
    }

    return err;
}
