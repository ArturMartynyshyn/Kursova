
#include <iostream>
#include "Top.h"
#include "Figure.h"

int main()
{
        Top a, b;

        std::cout << "Enter coordinates for point A:\n";
        std::cin >> a;

        std::cout << "Enter coordinates for point B:\n";
        std::cin >> b;

        Top c = a + b;
        Top d = a - b;
        Top e = a * 2;
        Top f = b / 2;

        std::cout << "C = " << c << std::endl;
        std::cout << "D = " << d << std::endl;
        std::cout << "E = " << e << std::endl;
        std::cout << "F = " << f << std::endl;

        return 0;

}
