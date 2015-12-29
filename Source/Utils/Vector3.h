#ifndef VECTOR3_H
#define VECTOR3_H

#include <algorithm>

namespace Utils{

	template <typename T>
	class Vector3 {
	public:

		// Default Constructor Vector3
		Vector3() : x{ nullptr }, y{ nullptr }, z{ nullptr } {};

		// Constructor giving the values
		Vector3(T xValue, T yValue, T zValue) : x{ new T(xValue) }, y{ new T(yValue) }, z{ new T(zValue) } {};

		// Constructor giving the values
		Vector3(T &xValue, T &yValue, T &zValue) : x{ xValue }, y{ yValue }, z{ zValue } {};

		// Constructor giving the same value to x, y and z
		Vector3(T value) : x{ new T(value) }, y{ new T(value) }, z{ new T(value) }{};

		// Constructor giving the same value to x, y and z
		Vector3(T &value) : x{ value }, y{ value }, z{ value }{};

		// Constructor by LValue (Copy Constructor)
		Vector3(const Vector3<T> &vector3) : x{ new T (*vector3.x) }, y{ new T(*vector3.y) }, z{ new T(*vector3.z) }{};

		// Constructor by RValue
		Vector3(Vector3<T> &&vector3) : x{ nullptr }, y{ nullptr }, z{ nullptr } {
			
			// Copy the data
			*this = std::move(vector3);

			// Release the data pointer from the source object so that
			// the destructor does not free the memory multiple times.
			delete vector3.x;
			delete vector3.y;
			delete vector3.z;
			vector3.x = nullptr;
			vector3.y = nullptr;
			vector3.z = nullptr;

		};

		// Assignment operator
		Vector3<T>& operator = (const Vector3<T> &vector3){
			Vector3<T> tmp(vector3);
			std::swap(x, tmp.x);
			std::swap(y, tmp.y);
			std::swap(z, tmp.z);
			return *this;
		};

		Vector3<T>& operator = (Vector3<T> &&vector3){

			if (this != &vector3){
				
				// Free the existing resource.
				delete[] this->x;
				delete[] this->y;
				delete[] this->z;
				this->x = nullptr;
				this->y = nullptr;
				this->z = nullptr;

				// Copy the data (Also can do with move or even with = operator)
				std::swap(x, vector3.x);
				std::swap(y, vector3.y);
				std::swap(z, vector3.z);

				// Release the data pointer from the source object so that
				// the destructor does not free the memory multiple times.
				delete vector3.x;
				delete vector3.y;
				delete vector3.z;
				vector3.x = nullptr;
				vector3.y = nullptr;
				vector3.z = nullptr;

			}
			
			return *this;
		};

		// Plus Operator
		Vector3<T> operator + (Vector3<T> const &vector3){

			Vector3<T> v3;
			v3.x = new T(*this->x + *vector3.x);
			v3.y = new T(*this->y + *vector3.y);
			v3.z = new T(*this->z + *vector3.z);

			return v3;
		};

		// Plus Equal Operator
		Vector3<T>& operator += (const Vector3<T> &vector3){

			*this->x += *vector3.x;
			*this->y += *vector3.y;
			*this->z += *vector3.z;

			return *this;
		}

		// Minus Operator
		Vector3<T> operator - (Vector3<T> const &vector3){

			Vector3<T> v3;
			v3.x = new T(*this->x - *vector3.x);
			v3.y = new T(*this->y - *vector3.y);
			v3.z = new T(*this->z - *vector3.z);

			return v3;
		};

		// Minus Equal Operator
		Vector3<T>& operator -= (const Vector3<T> &vector3){

			*this->x -= *vector3.x;
			*this->y -= *vector3.y;
			*this->z -= *vector3.z;

			return *this;
		}

		// Multiply Operator
		Vector3<T> operator * (Vector3<T> const &vector3){

			Vector3<T> v3;
			v3.x = new T(*this->x * *vector3.x);
			v3.y = new T(*this->y * *vector3.y);
			v3.z = new T(*this->z * *vector3.z);

			return v3;
		};

		// Multiply Equal Operator
		Vector3<T>& operator *= (const Vector3<T> &vector3){

			*this->x *= *vector3.x;
			*this->y *= *vector3.y;
			*this->z *= *vector3.z;

			return *this;
		}

		// Division Operator
		Vector3<T> operator / (Vector3<T> const &vector3){

			Vector3<T> v3;
			v3.x = new T(*this->x / *vector3.x);
			v3.y = new T(*this->y / *vector3.y);
			v3.z = new T(*this->z / *vector3.z);

			return v3;
		};

		// Division Equal Operator
		Vector3<T>& operator /= (const Vector3<T> &vector3){

			*this->x /= *vector3.x;
			*this->y /= *vector3.y;
			*this->z /= *vector3.z;

			return *this;
		}

		// Get x
		T &getX(){
			return x;
		}

		T getXValue(){
			return *x;
		}

		// Get y
		T &getY(){
			return y;
		}

		T getYValue(){
			return *y;
		}

		// Get z
		T &getZ(){
			return z;
		}

		T getZValue(){
			return *z;
		}

		// Destructor
		~Vector3(){
			delete x;
			x = nullptr;

			delete y;
			y = nullptr;

			delete z;
			z = nullptr;
		};

	private:
		T *x;
		T *y;
		T *z;
	};

}

#endif VECTOR3_H