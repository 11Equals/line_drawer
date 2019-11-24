#pragma once
#ifndef SAM_LINE_DRAWER_POINT_HPP_INCLUDED
#define SAM_LINE_DRAWER_POINT_HPP_INCLUDED

#include "include/rgba.hpp"
#include "include/tex_coords.hpp"
#include "include/xyz.hpp"

#include <iostream>

namespace sam {
	namespace line_drawer {
		struct Point {
			Rgba rgba;
			TexCoords texCoords;
			Xyz xyz;

			Point();

			friend std::ostream & operator<<(std::ostream & os, sam::line_drawer::Point const & point);
		};

		std::ostream & operator<<(std::ostream & os, sam::line_drawer::Point const & point);
	}
}
#endif // SAM_LINE_DRAWER_POINT_HPP_INCLUDED
