// Weighted Mean = sum(x^i * w^i)/sum(w)

n = int(input())
x = list(map(int,input().strip().split(' ')))
w = list(map(int,input().strip().split(' ')))
sum_x = sum([a*b for a,b in zip(x,w)])
print(round((sum_x/sum(w)),1))

...
Input (stdin)
5
10 40 30 50 20
1 2 3 4 5

Expected Output
32.0
...
