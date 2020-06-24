// Generate Or8Way.tst

#include<bitset>
#include<cmath>
#include<iostream>
#include<fstream>

int main() {
    std::ofstream test("Or8Way.tst");
    if(test.fail())
    {
        std::cerr << "failed to open file : Or8Way.tst" << std::endl;
        return 0;
    }

    test << "load Or8Way.hdl, output-file Or8Way.out, output-list in%B1.8.1 out;" << std::endl;

    int size = std::pow(2, 8);

    for(int i=0; i < size; i++)
        test << "set in %B" << std::bitset<8>(i) << ", eval, output;" << std::endl;

  return 0;
}
