#pragma once
#ifndef SAM_LINE_DRAWER_XYZ_HPP_INCLUDED
#define SAM_LINE_DRAWER_XYZ_HPP_INCLUDED

#include <iostream>

namespace sam {
	namespace line_drawer {
		struct Xyz {
			double x, y, z;

			Xyz();
			Xyz(double x);
			Xyz(double x, double y);
			Xyz(double x, double y, double z);

			friend std::ostream & operator<<(std::ostream & os, sam::line_drawer::Xyz const & xyz);
		};

		std::ostream & operator<<(std::ostream & os, sam::line_drawer::Xyz const & xyz);
	}
}
#endif // SAM_LINE_DRAWER_XYZ_HPP_INCLUDED
