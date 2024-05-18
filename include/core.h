#include "precision.h"

namespace cyclone {

	/**
	 * Holds a vector in 3 dimensions. Four data members are allocated
	 * to ensure alignment in an array. 
	 */

	class Vector3
	{
		public:
			real x; // holds the value along the x axis
			real y; // holds the value along the y axis
			real z; // holds the value along the z axis

		private:
			real pad; // padding to ensure 4-word alignment (memory/performance optimization)


		public:
			/** The default constructor creates a zero vector */
			Vector3() : x(0), y(0), z(0) {}

			/**
			 * The explicit constructor creates a vector with 
			 * the given components
			 */
			Vector3(const real x, const real y, const real z)
				:x(x), y(y), z(z) {}


			/* Flips all the components of the vector. */
			void invert()
			{
				x = -x;
				y = -y;
				z = -z;
			}
			

	};

}
