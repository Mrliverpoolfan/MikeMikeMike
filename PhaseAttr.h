#include <iostream>

// TODO: Add header guards here to prevent multiple inclusions.

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
