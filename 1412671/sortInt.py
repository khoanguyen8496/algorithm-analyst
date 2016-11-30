import sys

a = []
cnt = 0
with open(sys.argv[1], "r") as f:
  for x in next(f).split():
    a.append(int(x))
f.close()
a = sorted(a)
with open(sys.argv[2], "w") as f:
  for x in a:
    f.write(str(x)) 
    f.write(' ')
f.close()
