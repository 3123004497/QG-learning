### python条件和循环

1.条件控制用 if…(elif…)else…控制

```python
x=50
if x>50:
    print('x值大于50')
elif x==50:
    print('x等于50')
else:
    print('x小于50')
```

2.循环用for和while

```python
#遍历
print('      2.遍历')
students=['王二狗','李狗子','林艺','吴日天']
for i in students:   #遍历
    print('师兄 %s' %i)
```

```python
a=0
while a<=10:
    print(f'{a},break语句前')

    if a==6:
        break
    print(f'{a},break后')
    a=a+1
print('循环结束')
```

```python
for n in range(6):  #range()函数可创建一个整数列表，一般用于for循环中
```

小结：和c差不多，python可以实现**嵌套循环**，也可以在循环中**插入条件**用来筛选