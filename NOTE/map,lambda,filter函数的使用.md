map函数：
map()函数接收两个参数，一个是函数，一个是可迭代对象。它会将传入的函数依次作用到可迭代对象的每个元素上，并返回一个新的可迭代对象。

示例：
```python
def square(x):
    return x * x

numbers = [1, 2, 3, 4, 5]
squares = map(square, numbers)
print(list(squares))  # 输出：[1, 4, 9, 16, 25]
```

lambda函数：
lambda函数是一种简洁的创建匿名函数的方法。它可以接受任意数量的参数，但只能有一个表达式。

示例：
```python
add = lambda x, y: x + y
result = add(1, 2)
print(result)  # 输出：3
```

filter函数：
filter()函数接收两个参数，一个是函数，一个是可迭代对象。它会将传入的函数依次作用于可迭代对象的每个元素上，如果函数返回True，则保留该元素，否则过滤掉。最后返回一个包含所有保留元素的新可迭代对象。

示例：
```python
def is_even(x):
    return x % 2 == 0

numbers = [1, 2, 3, 4, 5, 6]
even_numbers = filter(is_even, numbers)
print(list(even_numbers))  # 输出：[2, 4, 6]
```