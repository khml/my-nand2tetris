# -*- coding:utf-8 -*-

code = ["load {name}.hdl, output-file {name}.out, output-list a%B1.16.1 b%B1.16.1 out%B1.16.1;\n".format(name="And16")]

for a in range(2 ** 16):
    for b in range(2 ** 16):
        code.append("set a %B" + format(a, "016b") + ", set b %B" + format(b, "016b") + ", eval, output;\n")
        print("\r"+str((b + a * 2**16) / 2**32), end="")
print()

with open("And16.tst", "w") as f:
    f.writelines(code)

