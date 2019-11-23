#pragma once
#ifndef SAM_LINE_DRAWER_LINE_HPP_INCLUDED
#define SAM_LINE_DRAWER_LINE_HPP_INCLUDED

#include "triangle.hpp"

#include <iostream>

namespace sam {
	namespace line_drawer {
		struct Line {
			Triangle triangleA;
			Triangle triangleB;
			Xyz start, end;
			double lineThicknessHalf;

			Line();
			Line(Xyz start, Xyz end, double lineThicknessHalf);

			friend std::ostream & operator<<(std::ostream & os, sam::line_drawer::Line const & line);
		};

		std::ostream & operator<<(std::ostream & os, sam::line_drawer::Line const & line);
	}
}
#endif // SAM_LINE_DRAWER_LINE_HPP_INCLUDED
