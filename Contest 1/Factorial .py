#Keep calm and carry on..

'''  Problem : Factorial 
    URL : https://www.codechef.com/LRNDSA01/problems/FCTRL
'''
#def solve():
#import numpy as np
import math
#import sympy as sp

def isprime(n):
    for i in range(2,n):
        if n % i == 0:
            return False
            break
    else:
        return True
def solve():
    n = int(input())
    zro = 0
    fac = 5
    while fac <= n:
        zro += n// fac
        fac *= 5
    print(zro)
	       
if __name__ == '__main__':
    t = int(input())
    while t:
        solve()
        t -=1
	
                
