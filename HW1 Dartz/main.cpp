#include <iostream>
#include <math.h>
#include "dartz.h"
//#include "dartz.h"

int main() {
    std::cout << "Vvedte X" << std::endl;
    float r,x,y;
    scanf("%f",&x);
    std::cout << "Vvedte Y" << std::endl;
    scanf("%f",&y);
    printf("%f_%f\n",x,y);
    r=sqrt((x*x)+(y*y));
    printf("%f\n",r);

    printf("You hit %d points", dartz(r));
    return 0;
}