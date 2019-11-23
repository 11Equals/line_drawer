#pragma once
#ifndef SAM_LINE_DRAWER_TRIANGLE_HPP_INCLUDED
#define SAM_LINE_DRAWER_TRIANGLE_HPP_INCLUDED

#include "xyz.hpp"

#include <iostream>

namespace sam {
	namespace line_drawer {
		struct Triangle {
			Xyz a, b, c;

			Triangle();
			Triangle(Xyz a, Xyz b, Xyz c);

			friend std::ostream & operator<<(std::ostream & os, sam::line_drawer::Triangle const & xyz);
		};

		std::ostream & operator<<(std::ostream & os, sam::line_drawer::Triangle const & xyz);
	}
}
#endif // SAM_LINE_DRAWER_TRIANGLE_HPP_INCLUDED
