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

			
			/* Gets the magnitude of this vector. */
			real magnitude() const
			{
				return real_sqrt(x*x+y*y+z*z);
			}

			/* Gets the squared magnitude of this vector. */
			real squareMagnitude() const
			{
				return x*x+y*y+z*z;
			}

			/* Turns a non-zero vector into a vector of unit length. */
			void normalize()
			{
				real l = magnitude();
				if (l > 0)
				{
					(*this)*=((real)1)/l;
				}
			}

			/* Multiplies this vector by the given scalar. */
			void operator*=(const real value)
			{
				x *= value;
				y *= value;
				z *= value;
			}

			/* Returns a copy of this vector scaled to the given value. */
			Vector3 operator*(const real value) const
			{
				return Vector3(x*value, y*value, z*value);
			}

			/* Adds the given vector to this. */
			void operator+=(const Vector3& v)
			{
				x += v.x;
				y += v.y;
				z += v.z;
			}

			/* Returns the value of the given vector added to this. */
			Vector3 operator+(const Vector3& v) const
			{
				return Vector3(x+v.x, y+v.y, z+v.z);
			}
			
			/* Subtracs the given vector to this. */
			void operator-=(const Vector3& v)
			{
				x -= v.x;
				y -= v.y;
				z -= v.z;
			}

			/* Returns the value of the given vector subtracted from this. */
			Vector3 operator-(const Vector3& v) const
			{
				return Vector3(x-v.x, y-v.y, z-v.z);
			}

			/* Adds the given vector to this, scaled by the given amount. */
			void addScaledVector(const Vector3& vector, real scale)
			{
				x += vector.x * scale;
				y += vector.y * scale;
				z += vector.z * scale;
			}

	};

}
