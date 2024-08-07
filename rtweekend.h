#ifndef RTWEEKEND_H
#define RTWEEKEND_H

#include <cmath>
#include<cstdlib>
#include<iostream>
#include<limits>
#include<memory>
#include<random>
using std::make_shared;
using std::shared_ptr;
using std::sqrt;

const double infinity = std::numeric_limits<double>::infinity();
const double pi = 3.1415926535897932385;

//Utility functions
inline double degrees_to_radians(double degrees) {
	return degrees * pi / 180.0;
}

inline double random_double() {
	return rand() / RAND_MAX + 1.0;
}

inline double random_double(double min, double max) {
	static std::uniform_real_distribution<double> distribution(0.0, 1.0);
	static std::mt19937 generator;
	return distribution(generator);
}

#include "color.h"
#include "interval.h"
#include "ray.h"
#include "vec3.h"

#endif // !RTWEEKEND_H

