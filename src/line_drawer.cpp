// line_drawer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "include/lines.hpp"
#include "include/random.hpp"

namespace topx	= sam::line_drawer;
namespace cur	= topx;

namespace {
    constexpr auto const AMOUNT_OF_LINES = size_t{ 1 };
    constexpr auto const LINE_THICKNESS_HALF = 0.005;
    constexpr auto const LENGTH_VARIANCE_X = 1.0;
    constexpr auto const LENGTH_VARIANCE_Y = 1.0;
    constexpr auto const LENGTH_VARIANCE_Z = 1.0;
}

class Test {
    double x;

    friend std::ostream & operator<<(std::ostream & os, Test & test);


};
std::ostream & operator <<(std::ostream & os, Test const & test) {
    return os;
}

int main()
{
    sam::line_drawer::random::generateSeed();
    auto lines = cur::Lines();

    lines.draw(AMOUNT_OF_LINES, LINE_THICKNESS_HALF, LENGTH_VARIANCE_X, LENGTH_VARIANCE_Y, LENGTH_VARIANCE_Z);

    std::cout << "Line: " << lines.getLines().front();
    

    int i;
    while (true) {
        std::cin >> i;
    }

    return EXIT_SUCCESS;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
