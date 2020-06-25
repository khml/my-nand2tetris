load Mux4Way16.hdl, output-file Mux4Way16.out, output-list a%B1.16.1 b%B1.16.1 c%B1.16.1 d%B1.16.1 sel%B1.2.1 out%B1.16.1;
set a %B1000000000000000, set b %B0100000000000000, set c %B0000000000000010, set d %B0000000000000001, set sel %B00, eval, output;
set a %B1000000000000000, set b %B0100000000000000, set c %B0000000000000010, set d %B0000000000000001, set sel %B01, eval, output;
set a %B1000000000000000, set b %B0100000000000000, set c %B0000000000000010, set d %B0000000000000001, set sel %B10, eval, output;
set a %B1000000000000000, set b %B0100000000000000, set c %B0000000000000010, set d %B0000000000000001, set sel %B11, eval, output;
