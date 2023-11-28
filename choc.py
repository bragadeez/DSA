n=int(input())
for i in range(n):
    x,y,z=map(int,input().split())
    tot=(5*x)+(10*y)
    print(tot//z)
