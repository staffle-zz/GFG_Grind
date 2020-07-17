for _ in range(int(input())):
    n = int(input()) 
    A = list(map(int,input().split()))
    A.sort()
    st = set()
    for i in A:
        st.add(i)
    ans = 0
    for i in range(n):
        for j in range(i+1,n):
            if A[i]+A[j] <= A[-1]:
                ans += (A[i]+A[j] in st)
            else:
                break
    if(ans==0):
        ans = -1
    print(ans)
