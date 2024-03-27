s = 109
v = int(input())
t = int(input())
dist = v * t
res = (dist % s + s) % s
print( res )

