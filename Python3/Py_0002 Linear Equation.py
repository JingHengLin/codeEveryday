
# Linear Equations With One Unknown
# -----------------------------------------------------------------
# import matplotlib.pyplot as plt                                 
# x = [x for x in range(0, 11)]                   
# y = [(3 * y -18) for y in x]
# plt.xticks(x)                           # 標記每個單一x數字
# plt.axis([0, 10, -20, 15])              # 標記刻度範圍
# plt.plot(x, y, '-*')   
# plt.xlabel("X")
# plt.ylabel("Y")
# plt.grid()                              # 加格線
# plt.show()
# -----------------------------------------------------------------

# Parallel movement with the same slope
# -----------------------------------------------------------------
# import matplotlib.pyplot as plt
                                
# x = [x for x in range(0, 11)]
# y1 = [2 * y for y in x]
# y2 = [(2 * y - 2) for y in x]
# y3 = [(2 * y + 2) for y in x]
# plt.xticks(x)
# plt.plot(x, y1, label='L1')
# plt.plot(x, y2, label='L2')
# plt.plot(x, y3, label='L3')
# plt.legend(loc='best')
# plt.grid()                              # 加格線
# plt.show()
# -----------------------------------------------------------------

# Solve linear equations in two unknowns
# -----------------------------------------------------------------
# from sympy import Symbol, solve
                                
# a = Symbol('a')                 # 定義公式中使用的變數
# b = Symbol('b')                 # 定義公式中使用的變數
# eq1 = a + b - 1                 # 方程式 1
# eq2 = 5 * a + b - 2             # 方程式 2
# ans = solve((eq1, eq2))
# print(type(ans))
# print(ans)
# print('a = {}'.format(ans[a]))
# print('b = {}'.format(ans[b]))
# -----------------------------------------------------------------

# Solve linear equations in two unknowns and plot 1
# -----------------------------------------------------------------
# import matplotlib.pyplot as plt
# from sympy import Symbol, solve
# import numpy as np
                                
# a = Symbol('a')                 # 定義公式中使用的變數
# b = Symbol('b')                 # 定義公式中使用的變數
# eq1 = a + b - 1                 # 方程式 1
# eq2 = 5 * a + b - 2             # 方程式 2
# ans = solve((eq1, eq2))
# print('a = {}'.format(ans[a]))
# print('b = {}'.format(ans[b]))

# pt_x1 = 600                             
# pt_y1 = ans[a] * pt_x1 + ans[b]         # 計算x=600時的y值
# pt_x2 = 1000
# pt_y2 = ans[a] * pt_x2 + ans[b]         # 計算x=1000時的y值

# x = np.linspace(0, 2500, 250)
# y = ans[a] * x + ans[b]
# plt.plot(x, y)                          # 繪函數直線
# plt.plot(pt_x1, pt_y1, '-o')            # 繪點 pt1
# plt.text(pt_x1+60, pt_y1-10, 'pt1')      # 輸出文字pt1
# plt.plot(pt_x2, pt_y2, '-o')            # 繪點 pt2
# plt.text(pt_x2+60, pt_y2-10, 'pt2')      # 輸出文字pt2
# plt.xlabel("X")
# plt.ylabel("Y")
# plt.grid()                              # 加格線
# plt.show()
# -----------------------------------------------------------------

# Solve linear equations in two unknowns and plot 2
# -----------------------------------------------------------------
import matplotlib.pyplot as plt
import numpy as np                            
a = 0.03
b = -18
x = np.linspace(0, 2500, 250)
y = a * x + b
pt_y = 48
pt_x = (pt_y + 18) / 0.03 
print('X=48 Y={}'.format(int(pt_x)))
plt.plot(x, y)                                      # 繪函數直線
plt.plot(pt_x, pt_y, '-o')                          # 繪點
plt.text(pt_x-150, pt_y+3, '('+str(int(pt_x))+','+str(pt_y)+')')   
plt.xlabel("X")
plt.ylabel("Y")
plt.grid()                                          # 加格線
plt.show()
# -----------------------------------------------------------------