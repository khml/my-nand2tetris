// Generate Mux8Way16.tst

#include<bitset>
#include<cmath>
#include<iostream>
#include<fstream>

int main() {
    std::ofstream test("Mux8Way16.tst");
    if(test.fail())
    {
        std::cerr << "failed to open file : Mux8Way16.tst" << std::endl;
        return 0;
    }

    test << "load Mux8Way16.hdl, output-file Mux8Way16.out, output-list a%B1.16.1 b%B1.16.1 c%B1.16.1 d%B1.16.1 e%B1.16.1 f%B1.16.1 g%B1.16.1 h%B1.16.1 sel%B1.3.1 out%B1.16.1;" << std::endl;

    int size = std::pow(2, 16);

    for(int a=0; a < size; a++)
        for(int b=0; b < size; b++)
            for(int c=0; a < size; c++)
                for(int d=0; a < size; d++)
                    for(int e=0; a < size; d++)
                        for(int f=0; a < size; d++)
                            for(int g=0; a < size; d++)
                                for(int h=0; a < size; d++)
                                    for(int sel=0; sel < 8; sel++)
                                        test << "set a %B" << std::bitset<16>(a)
                                           << ", set b %B" << std::bitset<16>(b)
                                           << ", set c %B" << std::bitset<16>(c)
                                           << ", set d %B" << std::bitset<16>(d)
                                           << ", set e %B" << std::bitset<16>(d)
                                           << ", set f %B" << std::bitset<16>(d)
                                           << ", set g %B" << std::bitset<16>(d)
                                           << ", set h %B" << std::bitset<16>(d)
                                           << ", set sel %B" << std::bitset<3>(sel) << ", eval, output;" << std::endl;

  return 0;
}
