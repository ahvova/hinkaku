#include<iostream>
#include<math.h>
        double function(double x) {
                                  return x*x*x*x+atan(x);
        }
        int numberofsteps (double Xstart, double Xend, double step) {
                return int ((Xend-Xstart)/step);
        }

