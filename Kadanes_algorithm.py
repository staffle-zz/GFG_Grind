for _ in range(int(input())):
    n = int(input()) 
    A = list(map(int,input().split()))
    stn = 0
    ans = 0; f = 0;
    for i in A:
        stn += i
        if i > 0:
            f = 1
        ans = max(ans,stn)
        if stn < 0:
            stn = 0
    if(f==0):ans = max(A)
    print(ans)
