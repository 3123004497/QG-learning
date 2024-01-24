#基于列表构建矩阵
print("         基于列表构建矩阵")
import numpy as np
matrix_data=[[1,2,3],[4,5,6],[7,8,9]]
matrix=np.array(matrix_data)
print(matrix)

#特殊矩阵构建
print("         特殊矩阵构建")
import numpy as np
A=np.zeros((2,3))   #创建一个2x3的零矩阵
print("零矩阵：")
print(A)

import numpy as np
B=np.eye(3)   #创建一个3x3的单位矩阵
print("单位矩阵：")
print(B)

import numpy as np
c=[1,2,3]
C=np.diag(c)    #c是一维数组，表示对角线上的元素
print("对角矩阵：")
print(C)

import numpy as np
D=np.random.rand(2,3)   #创建一个2x3的随机矩阵，元素值在0到1之间
print("随机矩阵：")
print(D)

# x=[1,2,3,4]
# y=[5,6,7,8,9]
# import numpy as np
# E=np.lib.stride_tricks.as_strided(x,shape=(len(x)+len(y)-1,max(len(x),len(y))),strides=(0,-1))
# print("Toeplitz矩阵：")
# print(E)

# import numpy as np
# f=[1,2,3]
# F=np.lib.stride_tricks.as_strided(f,shape=(3,4),strides=(0,-1))
# print("Hankel矩阵：")
# print(F)
#
# import numpy as np
# G=np.lib.stride_tricks.as_strided(np.arange(3,4),shape=(3,3),strides=(0,-1))
# print("Hilbert矩阵：")
# print(G)

import numpy as np
ones_matrix = np.ones((2, 2))
print("全一矩阵：")
print(ones_matrix)


#矩阵乘法
print("         矩阵乘法")
import numpy as np
H1=np.array([[1,2],[3,4]])
H2=np.array([[5,6],[7,8]])
#H=np.dot(H1,H2)
H=H1@H2
print(H)

#矩阵广播机制
print("         矩阵广播机制")
import numpy as np
I1= np.array([[1, 2, 3], [4, 5, 6]])
I2= np.array([10, 11, 12])
print(I1+I2)

#矩阵转置
print("         矩阵转置")
import numpy as np
J=np.array([[1,2,3],[4,5,6],[7,8,9]])
_J=J.transpose()
print("矩阵J：\n",J)
print("矩阵_J（J的转置）：\n",_J)

#矩阵的逆
print("         矩阵的逆")
import numpy as np
K=np.array([[2,5],[-3,-7]])
_K=np.linalg.inv(K)
print("矩阵K：\n",K)
print("矩阵_K（K的逆）：\n",_K)

#矩阵存取
print("         矩阵存取")
L=np.array([[1,2,3],[4,5,6],[7,8,9]])
# 保存到文本文件中
np.savetxt("matrix.txt", L)
# 保存到二进制文件中
np.save("matrix.npy", L)
date_L=np.load('matrix.npy')
date_L_txt=np.loadtxt('matrix.txt')
print("从二进制文件中读取：")
print(date_L)
print("从文本文件中读取：")
print(date_L_txt)