# https://www.codechef.com/viewsolution/94738462

T = int(input())
for T in range(T):
    n=int(input())
    l= list(map(int, input().strip().split(" ")))
    ans=[]
    for i in range(len(l)):
        if i==0:
            ans.append(abs(l[0]-l[1]))
        elif i==(n-1):
            ans.append(abs(l[n-1]-l[n-2]))
        else:
            ans.append(max(abs(l[i]-l[i-1]),abs(l[i]-l[i+1])))
    ans.sort()
    print(ans[0])
