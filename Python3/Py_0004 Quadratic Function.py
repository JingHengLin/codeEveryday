# Solve the roots of the quadratic equation 1: x^2 - 2x - 8 = 0 
# -----------------------------------------------------------------
# a = 1
# b = -2
# c = -8

# r1 = (-b + (b**2-4*a*c)**0.5)/(2*a)
# r2 = (-b - (b**2-4*a*c)**0.5)/(2*a)

# print("r1 = %6.4f, r2 = %6.4f" %(r1, r2))
# -----------------------------------------------------------------

# Solve the roots of the quadratic equation 2: x^2 - 2x - 8 = 0 
# -----------------------------------------------------------------
# from sympy import *

# x = Symbol('x');
# f = Symbol('f');
# f = x**2 - 2*x -8
# root = solve(f)
# print(root)
# -----------------------------------------------------------------

# Draw a quadratic equation in one variable 1: y = 3x^2 -12x +10
# -----------------------------------------------------------------
# import matplotlib.pyplot as plt
# import numpy as np

# def f(x):
#     return (3*x**2 - 12*x + 10)

# a = 3
# b = -12
# c = 10

# r1 = (-b + (b**2-4*a*c)**0.5)/(2*a)
# r2 = (-b - (b**2-4*a*c)**0.5)/(2*a)
# r1_y = f(r1)
# r2_y = f(r2)
# print('root1 = ', r1)
# print('root2 = ', r2)

# x = np.linspace(0, 4, 100)
# y = 3*x**2 - 12*x + 10
# plt.plot(x, y)

# plt.plot(r1, r1_y, '-o')
# plt.text(r1-0.3, r1_y+0.3, '('+str(round(r1,2))+','+str(0)+')')
# plt.plot(r2, r2_y, '-o')
# plt.text(r2-0.3, r2_y+0.3, '('+str(round(r2,2))+','+str(0)+')')

# plt.show()
# -----------------------------------------------------------------

# Draw a quadratic equation in one variable 2: y = -3x^2 +12x -9
# -----------------------------------------------------------------
# import matplotlib.pyplot as plt
# import numpy as np

# def f(x):
#     return (-3*x**2 + 12*x - 9)

# a = -3
# b = 12
# c = -9

# r1 = (-b + (b**2-4*a*c)**0.5)/(2*a)
# r2 = (-b - (b**2-4*a*c)**0.5)/(2*a)
# r1_y = f(r1)
# r2_y = f(r2)
# print('root1 = ', r1)
# print('root2 = ', r2)

# x = np.linspace(0, 4, 100)
# y = -3*x**2 + 12*x - 9
# plt.plot(x, y)

# plt.plot(r1, r1_y, '-o')
# plt.text(r1-0.3, r1_y+0.3, '('+str(round(r1,2))+','+str(0)+')')
# plt.plot(r2, r2_y, '-o')
# plt.text(r2-0.3, r2_y+0.3, '('+str(round(r2,2))+','+str(0)+')')

# plt.show()
# -----------------------------------------------------------------

# The minimum and maximum values ​​of a quadratic equation in one variable: 3x^2 -12x +10
# -----------------------------------------------------------------
# import matplotlib.pyplot as plt
# from scipy.optimize import minimize_scalar
# import numpy as np

# def f(x):
#     return (3*x**2 - 12*x + 10)

# a = 3
# b = -12
# c = 10

# r = minimize_scalar(f, bounds=(0, 4), method='bounded')
# print("when x is %4.2f, minimize is %4.2f" %(r.x, f(r.x)))
# r1 = (-b + (b**2-4*a*c)**0.5)/(2*a)
# r2 = (-b - (b**2-4*a*c)**0.5)/(2*a)
# r1_y = f(r1)
# r2_y = f(r2)
# print('root1 = ', r1)
# print('root2 = ', r2)

# x = np.linspace(0, 4, 100)
# y = 3*x**2 - 12*x + 10
# plt.plot(x, y)

# plt.plot(r.x, f(r.x), '-o')
# plt.text(r.x-0.3, f(r.x)+0.3, '('+str(round(r.x,2))+','+str(round(f(r.x),2))+')')
# plt.plot(r1, r1_y, '-o')
# plt.text(r1-0.3, r1_y+0.3, '('+str(round(r1,2))+','+str(0)+')')
# plt.plot(r2, r2_y, '-o')
# plt.text(r2-0.3, r2_y+0.3, '('+str(round(r2,2))+','+str(0)+')')

# plt.show()
# -----------------------------------------------------------------


# The minimum and maximum values ​​of a quadratic equation in one variable: -3x^2 + 12x -9
# -----------------------------------------------------------------
import matplotlib.pyplot as plt
from scipy.optimize import minimize_scalar
import numpy as np

def fmax(x):
    return (-3*x**2 + 12*x - 9)*(-1)

def f(x):
    return (-3*x**2 + 12*x - 9)

a = -3
b = 12
c = -9

r = minimize_scalar(fmax, bounds=(0, 4), method='bounded')
print("when x is %4.2f, minimize is %4.2f" %(r.x, f(r.x)))
r1 = (-b + (b**2-4*a*c)**0.5)/(2*a)
r2 = (-b - (b**2-4*a*c)**0.5)/(2*a)
r1_y = f(r1)
r2_y = f(r2)
print('root1 = ', r1)
print('root2 = ', r2)

x = np.linspace(0, 4, 100)
y = -3*x**2 + 12*x - 9
plt.plot(x, y)

plt.plot(r.x, f(r.x), '-o')
plt.text(r.x-0.3, f(r.x)+0.3, '('+str(round(r.x,2))+','+str(round(f(r.x),2))+')')
plt.plot(r1, r1_y, '-o')
plt.text(r1-0.3, r1_y+0.3, '('+str(round(r1,2))+','+str(0)+')')
plt.plot(r2, r2_y, '-o')
plt.text(r2-0.3, r2_y+0.3, '('+str(round(r2,2))+','+str(0)+')')

plt.show()
# -----------------------------------------------------------------
