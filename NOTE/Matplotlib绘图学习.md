# Matplotlib绘图学习

   调用时要加上   ``` import matplotlib.pyplot as plt```



### 散点图

plt.**scatter**(x, y)

```python
import numpy as np
import matplotlib.pyplot as plt

x = np.array([1, 2, 3, 4, 5])
y = np.array([2, 4, 1, 3, 5])

# 绘制散点图
plt.scatter(x, y)

# 添加标题和标签
plt.title('Scatter Plot')
plt.xlabel('X Label')
plt.ylabel('Y Label')

# 显示图形
plt.show()
```

### 曲线图

plt.**plot**(x, y)

（直线图基本一样，就x和y的值变成对应的就行了）

```python
import numpy as np
import matplotlib.pyplot as plt

x = np.linspace(-np.pi, np.pi, 100)
y = np.sin(x)

# 绘制曲线图
plt.plot(x, y)

# 添加标题和标签
plt.title('Curve Plot')
plt.xlabel('X Label')
plt.ylabel('Y Label')

# 显示图形
plt.show()
```

### 条形图

plt.**bar**(labels, y_values)

用  **label=[‘ ’]  **标明项目名

还要写上对应的条形的数值  **y_values**

plt.bar(labels, y_values)

```python
import numpy as np
import matplotlib.pyplot as plt

labels = ['A', 'B', 'C', 'D']
y_values = np.array([10, 30, 20, 40])

# 绘制条形图
plt.bar(labels, y_values)

# 添加标题和标签
plt.title('Bar Chart')
plt.xlabel('X Label')
plt.ylabel('Y Label')

# 显示图形
plt.show()
```

### 扇形图

plt.**pie**(sizes, labels=labels, colors=colors)

用  **label=[‘ ’]  **标明项目名

还要写上对应项目的大小  **size**

还可以用**colors=[‘ ’] **标明各个部分的颜色

```python
import numpy as np
import matplotlib.pyplot as plt

labels = ['A', 'B', 'C', 'D']
sizes = np.array([20, 35, 45, 10])
colors = ['r', 'g', 'b', 'y']

# 绘制扇形图
plt.pie(sizes, labels=labels, colors=colors)

# 添加标题
plt.title('Pie Chart')

# 显示图形
plt.show()
```