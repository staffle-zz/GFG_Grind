for _ in range(int(input())):
    n,s = map(int,input().split())
    A = list(map(int,input().split()))
    sum_till_now = 0
    d = dict()
    found = 0
    l,r = -1,-1
    d[0] = 0
    for i in range(n):
        sum_till_now += A[i]
        if (sum_till_now-s) in d:
            found = 1;
            l,r  = d[sum_till_now-s]+1 , i+1
            break
        if sum_till_now not in d:
            d[sum_till_now] = i+1
    if found is 0:
        print(-1)
    else:
        print(l,r)
