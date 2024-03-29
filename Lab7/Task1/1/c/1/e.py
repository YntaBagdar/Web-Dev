# 1+a+a^2+...+a^n
a = int(input())
n = int(input())
a = 1
for i in range(1, n**a):
    a = a * i

print(a)