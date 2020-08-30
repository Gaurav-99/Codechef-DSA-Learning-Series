#keep calm and carry on...
'''
    Problem :Reverse The Number
    URL :www.codechef.com/LRNDSA01/problems/FLOW007
'''
t = int(input())

while t:
    s = int(input())
    r = 0
    x = 0
    while s>0:
        x = s%10;
        r = (r*10) + x
        s = s//10
    print(r)
    t-=1
