
#include "include/random.hpp"

#include "random/main.hpp"

#include <iostream>

namespace topx	= sam::line_drawer;
namespace cur	= topx::random;

namespace {
	constexpr auto const RANDOM_SEED = 1;

	size_t getStartingValue() {
		// use something like the time instead
		return RANDOM_SEED;
	}
}

void cur::generateSeed() {
	sam::randomizer::generateSeed(getStartingValue());
}

double cur::get(double range) {
	auto result = sam::randomizer::getNormal();

	std::cout << "Random number result: " << result << "\n";
	return result * range;
}
