#pragma once
#ifndef SAM_LINE_DRAWER_RANDOM_HPP_INCLUDED
#define SAM_LINE_DRAWER_RANDOM_HPP_INCLUDED

#include "include/triangle.hpp"

namespace sam {
	namespace line_drawer {
		namespace random {
			extern void generateSeed();
			extern double get(double range);
		}
	}
}
#endif // SAM_LINE_DRAWER_RANDOM_HPP_INCLUDED
