#pragma once
#ifndef SAM_LINE_DRAWER_DRAW_HPP_INCLUDED
#define SAM_LINE_DRAWER_DRAW_HPP_INCLUDED

#include "include/line.hpp"

#include <vector>

namespace sam {
	namespace line_drawer {
		class Lines {
		public:
			Point current;

			Lines();

			void draw(size_t amount,
					  double lineThicknessHalf,
					  double varianceLengthX,
					  double varianceLengthY,
					  double varianceLengthZ);

			std::vector<Line> const & getLines();
		private:
			std::vector<Line> lines;
		};
	}
}
#endif // SAM_LINE_DRAWER_DRAW_HPP_INCLUDED
