#pragma once
#ifndef SAM_LINE_DRAWER_RGBA_HPP_INCLUDED
#define SAM_LINE_DRAWER_RGBA_HPP_INCLUDED

#include <iostream>

namespace sam {
	namespace line_drawer {
		struct Rgba {
			double r, g, b, a;

			Rgba();
			Rgba(double r, double g, double b, double a);

			friend std::ostream & operator<<(std::ostream & os, sam::line_drawer::Rgba const & xyz);
		};

		std::ostream & operator<<(std::ostream & os, sam::line_drawer::Rgba const & xyz);
	}
}
#endif // SAM_LINE_DRAWER_RGBA_HPP_INCLUDED
