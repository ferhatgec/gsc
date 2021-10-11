// MIT License
//
// Copyright (c) 2021 Ferhat Geçdoğan All Rights Reserved.
// Distributed under the terms of the MIT License.
//

#ifndef GSC_GSC_HPP
#define GSC_GSC_HPP

#include <iostream>

class gsc {
public:
    gsc() = default;
    ~gsc()= default;

    void convert(const double value) noexcept;
    double to_celcius(const double value) noexcept;
    double to_fahrenheit(const double value) noexcept;
    double to_kelvin(const double value) noexcept;
    double to_newton(const double value) noexcept;
};

#endif // GSC_GSC_HPP
