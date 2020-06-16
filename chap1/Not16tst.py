# -*- coding:utf-8 -*-

code = ["load Not16.hdl, output-file Not16.out, output-list in%B1.16.1 out%B1.16.1;\n"]

for i in range(2 ** 16):
    code.append("set in %B" + format(i, "016b") +", eval, output;\n")

with open("Not16.tst", "w") as f:
    f.writelines(code)

