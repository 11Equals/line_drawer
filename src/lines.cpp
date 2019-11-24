
#include "include/lines.hpp"

#include "include/random.hpp"

namespace topx	= sam::line_drawer;
namespace cur	= topx;

cur::Lines::Lines() {
	current.xyz.x = 0.0;
	current.xyz.y = 0.0;
	current.xyz.z = 0.0;
}

void cur::Lines::draw(size_t amount,
					  double lineThicknessHalf,
					  double varianceLengthX,
					  double varianceLengthY,
					  double varianceLengthZ) {


	std::cout << "Random number: " << random::get(varianceLengthX) << "\n\n";

	for (auto i = 0; i < amount; ++i) {
		auto next = current;
		next.xyz.x += (random::get(varianceLengthX * 2.0) - varianceLengthX);
		next.xyz.y += (random::get(varianceLengthY * 2.0) - varianceLengthY);
		next.xyz.z += (random::get(varianceLengthZ * 2.0) - varianceLengthZ);

		lines.emplace_back(current, next, lineThicknessHalf);
	}
}

std::vector<topx::Line> const & cur::Lines::getLines() {
	return lines;
}