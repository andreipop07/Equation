
#include <iostream>

int main()
{
    int x, y;
    int a1, b1, c1, a2, b2, c2; // a coeficientul lui x,b al lui y, c rezultatul
    std::cin>>a1>>b1>>c1>>a2>>b2>>c2;
    if ((a1 * b2) - (b1 * a2) == 0)
        std::cout<<"Sistemul nu are solutii";
    else {
        x = ((c1 * b2) - (b1 * c2)) / ((a1 * b2) - (b1 * a2));
        y = ((c2 * a1) - (c1 * a2)) / ((a1 * b2) - (b1 * a2));
    }
    std::cout<<"x = "<< x <<" , "<<"y = "<<y;
    return 0;
}
