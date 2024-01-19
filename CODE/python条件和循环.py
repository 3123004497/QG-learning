#条件语句
print('      1.条件语句')
x=50
if x>50:
    print('x值大于50')
elif x==50:
    print('x等于50')
else:
    print('x小于50')

#遍历
print('      2.遍历')
students=['王二狗','李狗子','林艺','吴日天']
for i in students:   #遍历
    print('师兄 %s' %i)

#多次输出
print('      3.多次输出')
for n in range(6):  #range()函数可创建一个整数列表，一般用于for循环中
    print('我要进QG')

#for和if
print('      4.for和if')
for letter in 'QGlab':
    if letter =='Q' :
        print('字母是Q')
    else:
        print('字母不是Q')

#嵌套循环
print('      5.嵌套循环')
for i in range(3):
    for j in range(3):
        print(i,j)

#其它循环与条件
print('      6.其它循环与条件')
i=1
while i<4:
    print(i)
    i=i+1
print('循环结束')

a=['Hello',0,1,True]
for item in a:
    if item==0:
        print(item)

a=0
while a<=10:
    print(f'{a},break语句前')

    if a==6:
        break
    print(f'{a},break后')
    a=a+1
print('循环结束')
