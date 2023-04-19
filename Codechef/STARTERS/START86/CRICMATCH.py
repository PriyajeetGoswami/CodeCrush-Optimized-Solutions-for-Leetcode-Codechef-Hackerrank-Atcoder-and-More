# https://www.codechef.com/viewsolution/94708889

T = int(input())
for T in range(T):
    n,m= map(int, input().strip().split(" "))
    d = (m*36) - n
    if(d>=0):
        print('YES')
    else:
        print('NO')
