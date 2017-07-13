#include <iostream>
#include <cstdlib>

using namespace std;


class PhaseAttributes
{
	public:
		PhaseAttributes(float, float); //Sets permittivity and volumetricFraction
		PhaseAttributes(); //Set permittivity and volumetricFraction to initial values of 1
		
		// You will need to define the getters and setters for this class.
		//Make the setter functions so that they can be cascaded.

		// Getters
		float getPermittivity() const;
		float getVolumetricFraction() const;

		// Setters
		//
		// By returning a reference to the class itself, we can chain methods like so:
		// PhaseAttributes pa();
		// pa.setPermittivity(1.0).setVolumetricFraction(1.0);
		//
		PhaseAttributes & setPermittivity(float);
		PhaseAttributes & setVolumetricFraction(float);

	private:
		float permittivity;
		float volumetricFraction;
};


// Constructor
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