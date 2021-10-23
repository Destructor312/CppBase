#include <iostream>


int main()
{
    int x = 406;
    int y = 196;
    int k = 5;
    int m = 1;

    int res1 = ~x;
    int res2 = ~y;
    int res3 = x | y;
    int res4 = x ^ y;
    int res5 = x & y;
    int res6 = x >> k;
    int res7 = y << m;
    
    int res8 = x < y & k < m;

    std::cout << res1 << std::endl;
    std::cout << res2 << std::endl;
    std::cout << res3 << std::endl;
    std::cout << res4 << std::endl;
    std::cout << res5 << std::endl;
    std::cout << res6 << std::endl;
    std::cout << res7 << std::endl;

    return 0;
}