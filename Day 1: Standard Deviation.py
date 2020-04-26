# Enter your code here. Read input from STDIN. Print output to STDOUT
n = int(input().strip())
X = [int(x) for x in input().strip().split()]
mean = sum(X) / n
variance = sum([((x - mean) ** 2) for x in X]) / n
stddev = variance ** 0.5
print("{0:0.1f}".format(stddev))

...
Input (stdin)
5
10 40 30 50 20
Expected Output

14.1
...
