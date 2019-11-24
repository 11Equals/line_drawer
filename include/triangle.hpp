#pragma once
#ifndef SAM_LINE_DRAWER_TRIANGLE_HPP_INCLUDED
#define SAM_LINE_DRAWER_TRIANGLE_HPP_INCLUDED

#include "include/point.hpp"

#include <iostream>

namespace sam {
	namespace line_drawer {
		struct Triangle {

			Point a, b, c;

			Triangle();
			Triangle(Point a, Point b, Point c);

			friend std::ostream & operator<<(std::ostream & os, sam::line_drawer::Triangle const & xyz);
		};

		std::ostream & operator<<(std::ostream & os, sam::line_drawer::Triangle const & xyz);
	}
}
#endif // SAM_LINE_DRAWER_TRIANGLE_HPP_INCLUDED
