/*
    float types
        float
        double
        long-double
range
10^-38 to 10^38
with six significant figure
      as in ____ 0.1234567e12
      sign fraction - exponent

double range
    10^-308      10^308
    and 15 significant figure


long double range
    10^-308        10^308
    but 31 significant digits
    but system dependent

**** float<=double<=long double.
so can be the same!!


Literal
1.0, 1. , 0.1e1 -------> all the same


warning 
significane in a computation precision
(0.1 + 123e12)
    == 1234567e12
    (input /output)
    Conversion Character
    %e or %E print as 1.23456e+00
    %f print as 1.23456
    % g or %G either e or f --shortest precision
*/