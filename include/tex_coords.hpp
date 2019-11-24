#pragma once
#ifndef SAM_LINE_DRAWER_TEX_COORDS_HPP_INCLUDED
#define SAM_LINE_DRAWER_TEX_COORDS_HPP_INCLUDED

#include <iostream>

namespace sam {
	namespace line_drawer {
		struct TexCoords {
			double x, y;

			TexCoords();
			TexCoords(double x, double y);

			friend std::ostream & operator<<(std::ostream & os, sam::line_drawer::TexCoords const & texCoords);
		};

		std::ostream & operator<<(std::ostream & os, sam::line_drawer::TexCoords const & texCoords);
	}
}
#endif // SAM_LINE_DRAWER_TEX_COORDS_HPP_INCLUDED
