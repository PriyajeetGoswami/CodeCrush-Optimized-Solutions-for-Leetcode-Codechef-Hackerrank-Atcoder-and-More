# https://www.codechef.com/viewsolution/94720161

T = int(input())
for T in range(T):
    n= int(input())
    if n > 50:
        d= n-50
        if d%3==1:
            ans = (d//3) + 2
        elif d%3==2:
            ans = (d//3) + 4
        else:
            ans = d//3
    elif n<=50:
        d= 50 - n
        if d%2==1:
            ans = (d//2) + 3
        else:
            ans = d//2
    print(ans)
