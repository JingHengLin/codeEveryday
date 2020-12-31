# plot()

# -----------------------------------------------------------------
# import matplotlib.pyplot as plt

# data1 = [1, 4, 9, 16, 25, 36, 49, 64]           # data1線條
# data2 = [1, 3, 6, 10, 15, 21, 28, 36]           # data2線條
# seq = [1,2,3,4,5,6,7,8]
# plt.plot(seq, data1, seq, data2)                # data1&2線條
# plt.title("Test Chart", fontsize=24)
# plt.xlabel("x-Value", fontsize=14)
# plt.ylabel("y-Value", fontsize=14)
# plt.tick_params(axis='both', labelsize=12, color='red')
# plt.show()
# -----------------------------------------------------------------

# -----------------------------------------------------------------
# import matplotlib.pyplot as plt

# data1 = [1, 2, 3, 4, 5, 6, 7, 8]                # data1線條
# data2 = [1, 4, 9, 16, 25, 36, 49, 64]           # data2線條
# data3 = [1, 3, 6, 10, 15, 21, 28, 36]           # data3線條
# data4 = [1, 7, 15, 26, 40, 57, 77, 100]         # data4線條

# seq = [1, 2, 3, 4, 5, 6, 7, 8]
# plt.plot(seq, data1, '-*', seq, data2, '-o', seq, data3, '-^', seq, data4, '-s')   
# plt.title("Test Chart", fontsize=24)
# plt.xlabel("x-Value", fontsize=14)
# plt.ylabel("y-Value", fontsize=14)
# plt.tick_params(axis='both', labelsize=12, color='red')
# plt.show()
# -----------------------------------------------------------------

# -----------------------------------------------------------------
# import matplotlib.pyplot as plt

# Benz = [3367, 4120, 5539]               # Benz線條
# BMW = [4000, 3590, 4423]                # BMW線條
# Lexus = [5200, 4930, 5350]              # Lexus線條

# seq = [2021, 2022, 2023]                # 年度
# plt.xticks(seq)                         # 設定x軸刻度
# plt.plot(seq, Benz, '-*', label='Benz')
# plt.plot(seq, BMW, '-o', label='BMW')
# plt.plot(seq, Lexus, '-^', label='Lexus')
# plt.legend(loc='best')                  # legned location
# plt.title("Sales Report", fontsize=24)  
# plt.xlabel("Year", fontsize=14)
# plt.ylabel("Number of Sales", fontsize=14)
# plt.tick_params(axis='both', labelsize=12, color='red')
# plt.savefig('sale report.jpg', bbox_inches='tight')
# plt.show()
# -----------------------------------------------------------------

# scatter()
# -----------------------------------------------------------------
# import matplotlib.pyplot as plt

# xpt = list(range(1,101))                # 建立1-100序列x座標點
# ypt = [x**2 for x in xpt]               # 以x平方方式建立y座標點
# plt.axis([0, 100, 0, 10000])            # 留意參數是串列
# plt.scatter(xpt, ypt, s=5, color=(0, 1, 0))  # s = dot size, default as 20, color = 綠色
# plt.show()
# -----------------------------------------------------------------

# Numpy : create array
# -----------------------------------------------------------------
# import numpy as np

# x1 = np.linspace(0, 10, num=11)     # 使用linspace()產生陣列
# print(type(x1), x1)
# x2 = np.arange(0,11,1)              # 使用arange()產生陣列
# print(type(x2), x2)
# x3 = np.arange(11)                  # 簡化語法產生陣列
# print(type(x3), x3)
# -----------------------------------------------------------------

# Numpy plot wave
# -----------------------------------------------------------------
# import matplotlib.pyplot as plt
# import numpy as np

# left = -2 * np.pi
# right = 2 * np.pi
# x = np.linspace(left, right, 100)

# f1 = 2 * np.sin(x)                  # y陣列的變化
# f2 = np.sin(2*x)
# f3 = 0.5 * np.sin(x)

# plt.plot(x, f1) 
# plt.plot(x, f2)
# plt.plot(x, f3)
# plt.show()
# -----------------------------------------------------------------

# Shading Regions 1
# -----------------------------------------------------------------
# import matplotlib.pyplot as plt
# import numpy as np

# left = -np.pi
# right = np.pi
# x = np.linspace(left, right, 100)
# y = np.sin(3*x)                  # y陣列的變化

# plt.plot(x, y) 
# plt.fill_between(x, 0, y, color='green', alpha=0.1)
# plt.show()
# -----------------------------------------------------------------

# Shading Regions 2
# -----------------------------------------------------------------
import matplotlib.pyplot as plt
import numpy as np

left = -np.pi
right = np.pi
x = np.linspace(left, right, 100)
y = np.sin(3*x)                  # y陣列的變化

plt.plot(x, y) 
plt.fill_between(x, -1, y, color='yellow', alpha=0.3)
plt.show()

# -----------------------------------------------------------------