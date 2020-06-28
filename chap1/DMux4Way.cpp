// Generate DMux4Way.tst

#include<bitset>
#include<cmath>
#include<iostream>
#include<fstream>

int main() {
    std::ofstream test("DMux4Way.tst");
    if(test.fail())
    {
        std::cerr << "failed to open file : DMux4Way.tst" << std::endl;
        return 0;
    }

    test << "load DMux4Way.hdl, output-file DMux4Way.out, output-list in sel%B1.2.1 a b c d;" << std::endl;


    for(int sel=0; sel < 4; sel++)
        test << "set in 1" << ", set sel %B" << std::bitset<2>(sel) << ", eval, output;" << std::endl;

  return 0;
}
