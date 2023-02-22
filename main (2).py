'''

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

'''


s = 'swaaeooypniil'
lis = []
for i in s:
    if i == 'a' or i =='e' or i=='i' or i == 'o' or i == 'u' or i == 'y':
        if i in lis:
            pass
        else:
            lis.append(i)
print(lis)
