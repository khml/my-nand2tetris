// Generate Mux4Way16.tst

#include<bitset>
#include<cmath>
#include<iostream>
#include<fstream>

int main() {
    std::ofstream test("Mux4Way16.tst");
    if(test.fail())
    {
        std::cerr << "failed to open file : Mux4Way16.tst" << std::endl;
        return 0;
    }

    test << "load Mux4Way16.hdl, output-file Mux4Way16.out, output-list a%B1.16.1 b%B1.16.1 c%B1.16.1 d%B1.16.1 sel%B1.2.1 out%B1.16.1;" << std::endl;

    int size = std::pow(2, 16);

    for(int a=0; a < size; a++)
        for(int b=0; b < size; b++)
            for(int c=0; a < size; c++)
                for(int d=0; a < size; d++)
                    for(int sel=0; sel < 4; sel++)
                        test << "set a %B" << std::bitset<16>(a)
                           << ", set b %B" << std::bitset<16>(b)
                           << ", set c %B" << std::bitset<16>(c)
                           << ", set d %B" << std::bitset<16>(d)
                           << ", set sel %B" << std::bitset<2>(sel) << ", eval, output;" << std::endl;

  return 0;
}
