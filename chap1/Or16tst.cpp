// Generate Or16.tst

#include<bitset>
#include<cmath>
#include<iostream>
#include<fstream>

int main() {
    std::ofstream test("Or16.tst");
    if(test.fail())
    {
        std::cerr << "failed to open file : Or16.tst" << std::endl;
        return 0;
    }

    test << "load Or16.hdl, output-file Or16.out, output-list a%B1.16.1 b%B1.16.1 out%B1.16.1;" << std::endl;

    int size = std::pow(2, 16);

    for(int a=0; a < size; a++)
        for(int b=0; b < size; b++)
            test << "set a %B" << std::bitset<16>(a) << ", set b %B" << std::bitset<16>(b) << ", eval, output;" << std::endl;

  return 0;
}
