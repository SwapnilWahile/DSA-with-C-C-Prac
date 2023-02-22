'''

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.
'''


def solution(lis):
    colours = {}
    p = 0
    for i in range(len(lis)):
        for j in range(len(lis[i])):
            if lis[i][j] in colours.keys():
                colours[lis[i][j]]+=1
            else:
                colours[lis[i][j]]=1
                
        
    print (colours.keys())
    print(colours)

obj1 = ["r", "g", "b"]
obj2 = ["bl", "y", "w"]
obj3 = ["r", "w", "p"]
obj4 = ["p", "y", "b"]
obj5 = ["c", "m", "ch"]
lis = [obj1, obj2, obj3, obj4, obj5]
solution(lis)
