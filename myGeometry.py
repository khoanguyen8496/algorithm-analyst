import sys, math

class Circle:
  def __init__(self, radius):
    self.radius = radius
  def displayInfo(self):
    print(self.radius)
  def calculateArea(self):
    return self.radius**2*math.pi
  def calculatePerimeter(self):
    return self.radius*2*math.pi
class Rectangle:
  def __init__(self, weight, length):
    self.weight = weight
    self.length = length
  def calculateArea(self):
    return self.weight*self.length
  def calculatePerimeter(self):
    return self.weight*2 + self.length*2

if (sys.argv[1] == 'rect'):
  w = float(raw_input('nhap chieu rong\n'))
  h = float(raw_input('nhap chieu dai\n'))
  R = Rectangle(w, h)
  print('chu vi hinh chu nhat la \n' + str(R.calculatePerimeter()) + '\ndien tich hinh chu nhat la \n' + str(R.calculateArea()) + '\n') 
else :
  r = float(raw_input('nhap ban kinh hinh tron\n'))
  R = Circle(r)
  print('chu vi hinh tron la \n' + str(R.calculatePerimeter()) + '\ndien tich hinh tron la \n' + str(R.calculateArea())) 
