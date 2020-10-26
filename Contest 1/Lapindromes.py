# Keep calm and carry on..

'''  Problem :Lapindromes:LAPIN
     URL :https://www.codechef.com/LRNDSA01/problems/LAPIN
'''

t = int(input())
    
while t >0 :
    stng = input()
    t -= 1
    lh = len(stng)
    if lh % 2 == 0 :
        lfstr = stng[:lh//2]
        rgstr = stng[lh//2:]
    else :
        lfstr = stng[:(lh-1) // 2]
        rgstr = stng[(lh+1) // 2:]
  
    if sorted(lfstr) == sorted(rgstr) :
        print("YES")
    else :
        print("NO")
          
          
