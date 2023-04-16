# https://www.codechef.com/viewsolution/64854821

r,o,c = map(int, input().strip().split(" "))
m = (20-o)*6*6 + c # max runs Team B can score
if(m>r):
    print('YES')
else:
    print('NO')
