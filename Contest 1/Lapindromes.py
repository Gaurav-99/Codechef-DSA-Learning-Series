# Keep calm and carry on..

'''  Problem :Lapindromes:LAPIN
     URL :https://www.codechef.com/LRNDSA01/problems/LAPIN
'''

t = int(input())
    
while t > 0 :
    stng = input()
    t -= 1
    lh = len(stng)
    if lh % 2 == 0 :
        x = int(lh//2)
        lfstr = stng[:x]
        rgstr = stng[x:]
    else :
        x = int((lh-1) // 2)
        lfstr = stng[:x]
        x = int((lh+1) // 2)
        rgstr = stng[x:]
    lfstr = ''.join(sorted(lfstr))
    rgstr = ''.join(sorted(rgstr))
    if lfstr == rgstr :
        print("YES")
    else :
        print("NO")
          
          
