// Generate DMux8Way.tst

#include<bitset>
#include<cmath>
#include<iostream>
#include<fstream>

int main() {
    std::ofstream test("DMux8Way.tst");
    if(test.fail())
    {
        std::cerr << "failed to open file : DMux8Way.tst" << std::endl;
        return 0;
    }

    test << "load DMux8Way.hdl, output-file DMux8Way.out, output-list in sel%B1.3.1 a b c d e f g h;" << std::endl;


    for(int sel=0; sel < 8; sel++)
        test << "set in 1" << ", set sel %B" << std::bitset<3>(sel) << ", eval, output;" << std::endl;

  return 0;
}
