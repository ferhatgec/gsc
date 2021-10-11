// MIT License
//
// Copyright (c) 2021 Ferhat Geçdoğan All Rights Reserved.
// Distributed under the terms of the MIT License.
//

#include "../include/gsc.hpp"

void gsc::convert(const double value) noexcept {
    double celcius = this->to_celcius(value);

    std::cout << value << "ºG\n"
                          "---\n" <<
        celcius << "ºC\n" <<
        this->to_fahrenheit(celcius) << "ºF\n" <<
        this->to_kelvin(celcius) << "K\n" <<
        this->to_newton(celcius) << "ºN\n";
}

double gsc::to_celcius(const double value) noexcept {
    return (value + 13) * 5;
}

double gsc::to_fahrenheit(const double value) noexcept {
    return (value * 9 / 5) + 32;
}

double gsc::to_kelvin(const double value) noexcept {
    return value + 273.15;
}

double gsc::to_newton(const double value) noexcept {
    return value * 0.33;
}

int main(int argc, char** argv) noexcept {
    if(argc < 2) {
        std::cout << "gsc - gech scale to other temperature scales\n"
                     "----\n" <<
                     argv[0] << " {value}\n";
        return 1;
    }

    gsc init;

    for(unsigned i = 1; i < argc; i++) {
        double val = std::stod(std::string(argv[i]));
        init.convert(val);
    }
}