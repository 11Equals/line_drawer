// line_drawer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "line.hpp"

namespace topx	= sam::line_drawer;
namespace cur	= topx;

namespace {
    constexpr auto const LINE_THICKNESS_HALF = 0.005;
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
    auto const LINE_01 = topx::Line(topx::Xyz(1.0, 0.0, 1.0), topx::Xyz(10.0, 0.0, 2.0), LINE_THICKNESS_HALF);
    auto const LINE_02 = topx::Line(topx::Xyz(1.0, 0.0, 1.0), topx::Xyz(2.0, 0.0, 2.0), LINE_THICKNESS_HALF);


    std::cout << "Hello World!\n";

    std::cout << "Line: " << LINE_01;
    

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
