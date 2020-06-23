// Generate Mux16.tst

#include<bitset>
#include<cmath>
#include<iostream>
#include<fstream>

int main() {
    std::ofstream test("Mux16.tst");
    if(test.fail())
    {
        std::cerr << "failed to open file : Mux16.tst" << std::endl;
        return 0;
    }

    test << "load Mux16.hdl, output-file Mux16.out, output-list a%B1.16.1 b%B1.16.1 sel out%B1.16.1;" << std::endl;

    int size = std::pow(2, 16);

    for(int a=0; a < size; a++)
        for(int b=0; b < size; b++)
            for(int sel=0; sel <= 1; sel++)
                test << "set a %B" << std::bitset<16>(a) << ", set b %B" << std::bitset<16>(b) << ", set sel " << sel << ", eval, output;" << std::endl;

  return 0;
}
