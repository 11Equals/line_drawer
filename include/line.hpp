#pragma once
#ifndef SAM_LINE_DRAWER_LINE_HPP_INCLUDED
#define SAM_LINE_DRAWER_LINE_HPP_INCLUDED

#include "include/triangle.hpp"

#include <iostream>

namespace sam {
	namespace line_drawer {
		struct Line {
			Triangle triangleA;
			Triangle triangleB;
			Point start, end;
			double lineThicknessHalf;

			Line(Point start, Point end, double lineThicknessHalf);

			friend std::ostream & operator<<(std::ostream & os, sam::line_drawer::Line const & line);
		};

		std::ostream & operator<<(std::ostream & os, sam::line_drawer::Line const & line);
	}
}
#endif // SAM_LINE_DRAWER_LINE_HPP_INCLUDED
