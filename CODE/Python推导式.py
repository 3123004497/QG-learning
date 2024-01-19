#推导式 从左到右依次递进，语句之间是嵌套关系

#常规写法1
print('      常规写法')
list_1=[]
for x in range(1,10):  #左闭右开，包头不含尾
    list_1.append(x)
print(list_1)

#举例1(放数字)
print('      1.举例1(放数字)')
list_1=[x for x in range(1,10)]
print(list_1)

#举例2（放计算式）
print('      2.举例2（放计算式）')
list_1=[x*x for x in range(1,10)]
print(list_1)

#包含判断和筛选
print('      包含判断和筛选')
list_1=[x*x for x in range(1,10) if x%2==0]
print(list_1)

#包含循环嵌套和判断筛选
print('      包含循环嵌套和判断筛选')
'''
list_2=[[1,2,3],[4,5,6],[7,8,9]]
list_3=[]
for y in list_2:
    for x in y:
        if x%2==0:
            list_3.append(x)
print(list_3)
'''
list_2=[[1,2,3],[4,5,6],[7,8,9]]
list_3=[x for y in list_2 for x in y if x%2==0]
print(list_3)
list_4=[x*x for y in list_2 for x in y if x%2==0]
print(list_4)




