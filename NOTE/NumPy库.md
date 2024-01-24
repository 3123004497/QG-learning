# NumPy库

[TOC]



#### 基于列表构建矩阵

```python
#基于列表构建矩阵
print("         基于列表构建矩阵")
import numpy as np
#创建一个包含列表的列表
matrix_data=[[1,2,3],[4,5,6],[7,8,9]]
matrix=np.array(matrix_data)	#用numpy库的array函数将数据转化为矩阵
print(matrix)
```

注意：`numpy.array()`函数可以将Python列表转换为NumPy数组，而`numpy.matrix()`函数则可以创建一个矩阵对象

#### 特殊矩阵构建

1. **零矩阵**:	**numpy.zeros()**


```python
import numpy as np
A = np.zeros((m, n))  # 创建一个m x n的零矩阵
```
2. **单位矩阵**:	**numpy.eye()**


```python
import numpy as np
A = np.eye(n)  # 创建一个n x n的单位矩阵
```
3. **对角矩阵**:	**numpy.diag()**


```python
import numpy as np
A = np.diag(v)  # v是一个一维数组，表示对角线上的元素
```
4. **随机矩阵**:


```python
import numpy as np
A = np.random.rand(m, n)  # 创建一个m x n的随机矩阵，元素值在0到1之间
```
5. **全一矩阵：**	**numpy.ones()**

```python
import numpy as np
ones_matrix = np.ones((2, 2))
print("全一矩阵：")
print(ones_matrix)
```

#### 矩阵乘法

用**`dot()`函数**或**`@`运算符**进行。

用`dot()`函数:


```python
import numpy as np

# 创建两个矩阵A和B
A = np.array([[1, 2], [3, 4]])
B = np.array([[5, 6], [7, 8]])

# 使用dot()函数进行矩阵乘法
C = np.dot(A, B)

print(C)
```
用`@`运算符:


```python
import numpy as np

# 创建两个矩阵A和B
A = np.array([[1, 2], [3, 4]])
B = np.array([[5, 6], [7, 8]])

# 使用@运算符进行矩阵乘法
C = A @ B

print(C)
```
#### 矩阵广播机制

允许在执行数学运算时对**不同形状的数组**进行操作。即使两个数组的形状不完全相同，广播机制也可以自动调整它们的大小，以便它们在数学运算中具有相同的形状。例：

```python
I1= np.array([[1, 2, 3], [4, 5, 6]])
I2= np.array([10, 11, 12])
print(I1+I2)
```

输出：     [[11 13 15]
 		[14 16 18]]

条件：

1. 如果两个数组的**维度数**不相同，较小的数组的维度会被增加到与较大的数组相同。
2. 如果两个数组在某个维度上的大小相同，它们在该维度上是兼容的。
3. 如果两个数组在某个维度上的大小不同，其中一个数组在该维度上的大小必须为1，或者两个数组在该维度上的大小必须相同。
4. 在进行广播时，从后往前（从右往左）比较数组的形状。如果某个维度上不相等，则将较小的数组在该维度上扩展为与较大的数组相同。
5. 广播后的数组的形状是两个输入数组形状的元素最大值。

#### 矩阵转置

用**`transpose()`函数**来对矩阵进行转置操作。`transpose()`函数可以接受一个或多个参数，用于**指定要转置的维度**。

例：

```python
import numpy as np

# 创建一个3行4列的矩阵
A = np.array([[1, 2, 3, 4], [5, 6, 7, 8], [9, 10, 11, 12]])

# 对矩阵A进行转置操作
B = A.transpose()

print("矩阵A：\n", A)
print("矩阵B（A的转置）：\n", B)
```

输出：

```python
矩阵A：
 [[1 2 3 4]
  [5 6 7 8]
  [9 10 11 12]]
矩阵B（A的转置）：
 [[1 5 9]
  [2 6 10]
  [3 7 11]
  [4 8 12]]
```

#### 矩阵的逆

用**`linalg.inv()`函数**来计算矩阵的逆

例：

```python
import numpy as np
K=np.array([[2,5],[-3,-7]])
_K=np.linalg.inv(K)
print("矩阵K：\n",K)
print("矩阵_K（K的逆）：\n",_K)
```

输出：

​	矩阵K：
​	 [[ 2  5]
​	 [-3 -7]]
​	矩阵_K（K的逆）：
 	[[-7. -5.]
​	 [ 3.  2.]]

#### 矩阵存取

1. 创建矩阵：可以使用NumPy的函数来创建矩阵。例如，`numpy.array()`函数可以将Python列表转换为NumPy数组，而`numpy.matrix()`函数则可以创建一个矩阵对象。
1. 访问矩阵元素：可以使用索引来访问矩阵中的元素。NumPy数组和矩阵都支持一维和二维索引。


```python
# 访问矩阵A的第一个元素
print(A[0, 0])  # 输出1

# 访问矩阵A的第二行第三列元素
print(A[1, 2])  # 输出6
```
3. **切片矩阵**：可以使用**切片**来获取矩阵的**子矩阵**。


```python
# 获取矩阵A的前两行和前三列
print(A[:2, :3])
```
4. **修改矩阵元素**：可以使用索引来修改矩阵中的元素。


```python
# 将矩阵A的第二行第三列元素修改为10
A[1, 2] = 10
print(A)
```
5. **将矩阵存储到文件**：

   可以使用NumPy的**`numpy.savetxt()`函数**将矩阵保存到**文本文件**中，或者使用**`numpy.save()`和`numpy.load()`函数**将矩阵保存到**二进制文件**中。


```python
# 将矩阵A保存到文本文件中
np.savetxt("matrix.txt", A)

# 将矩阵A保存到二进制文件中
np.save("matrix.npy", A)
```

 6.**访问/打印存储在文本中的矩阵**：

注意区别：

​	存储进**文本文件**（尾缀为 **.txt**）的，用**`numpy.loadtxt()`函数**读取，再打印或进行其它操作

​	存储进**二进制文件**（尾缀为 **.npy**）的，用**`numpy.load()`函数**读取，再打印或进行其它操作

例：

```python
L=np.array([[1,2,3],[4,5,6],[7,8,9]])
# 保存到文本文件中
np.savetxt("matrix.txt", L)
# 保存到二进制文件中
np.save("matrix.npy", L)

date_L=np.load('matrix.npy')	#从二进制文件中读取
date_L_txt=np.loadtxt('matrix.txt')		#从文本文件中读取
print("从二进制文件中读取：")
print(date_L)
print("从文本文件中读取：")
print(date_L_txt)
```