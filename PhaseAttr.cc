#include <iostream>
#include <cstdlib>

// TODO: Include any headers here that are needed.

using namespace std;

// Constructor
// 
//
PhaseAttributes::PhaseAttributes()
{
	this->permittivity = 1.0;
	this->volumetricFraction = 1.0;
}


// Constructor (Overloaded)
// 
//
PhaseAttributes::PhaseAttributes(float permittivity, float volumetricFraction)
{
	this->permittivity = permittivity;
	this->volumetricFraction = volumetricFraction;
}

// getPermittivity
//
//
float PhaseAttributes::getPermittivity()
{
	return this->permittivity;
}


// getVolumetricFraction
//
//
float PhaseAttributes::getVolumetricFraction()
{
	return this->volumetricFraction;
}


// setPermittivity
//
//
PhaseAttributes & PhaseAttributes::setPermittivity(float permittivity)
{
	this->permittivity = permittivity;
	
	return this;
}


// setVolumetricFraction
//
//

PhaseAttributes & PhaseAttributes::setVolumetricFraction(float volumetricFraction)
{
	this->volumetricFraction = volumetricFraction;

	return this;
}
