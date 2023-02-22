'''

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

'''

s = int(input("no of enetr ele"))
lis = []
pos = int(input("position"))
ele = int(input("element"))
for i in range(s):
    lis.append(int(input()))
temp = lis[-1]

for i in range(len(lis)-1, pos, -1):
    lis[i] = lis[i-1]
lis[pos] = ele
lis.append(temp)
print(lis)
