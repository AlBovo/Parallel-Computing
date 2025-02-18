https://github.com/AlBovo/Parallel-Computing

sudo pacman -Syu gcc python python-matplotlib python-pip git
git clone https://github.com/lava/matplotlib-cpp.git

// simple_plot.cpp
#include <vector>
#include "matplotlibcpp.h"

namespace plt = matplotlibcpp;

int main() {
    std::vector<double> x = {1, 2, 3, 4, 5};
    std::vector<double> y = {1, 4, 9, 16, 25};

    plt::plot(x, y);
    plt::title("Quadratic Plot");
    plt::xlabel("x-axis");
    plt::ylabel("y-axis");
    plt::grid(true);
    plt::show();
    plt::save("plot.png");

    return 0;
}

g++ -std=c++11 main.cpp -I./matplotlib-cpp -I/usr/include/python3.13 -I/usr/lib/python3.13/site-packages/numpy/_core/include -lpython3.13 -o simple_plot

CAMBIA VERSIONE PYTHON A QUELLA INSTALLATA, CAMBIA PATH DI NUMPY A QUELLO TROVATO CON
python3 -c "import numpy; print(numpy.get_include())"

NON FARE SHOW PRIMA DI SAVE FROCIO
