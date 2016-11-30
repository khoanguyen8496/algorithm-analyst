import matplotlib.pyplot as plt
plt.xlabel("Assign count")
plt.ylabel("N count")

with open("out") as f:
        lines = f.readlines()
        for line in lines:
                strArr = line.split()
                y = int(strArr[0])
                x = int(strArr[2])
                plt.plot(x,y)
        f.close()
plt.plot()
