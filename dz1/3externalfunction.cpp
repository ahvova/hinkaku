#include<iostream>
#include<math.h>
int factorial(int x) {
        if (x<=0) {
                std::cerr<<"невозможно рассчитать для не натурального числа\n";
                return 0;
        }
        int res = 1;
        if (int(x/2)==(x+0.0)/2) {
                int i=2;
                do {
                        res*=i;
                        i+=2;
                } while (i<=x);
        }

        else {
                int i=1;
                do {
                        res*=i;
                        i+=2;
                } while (i<=x);

        }
        return res;
}
