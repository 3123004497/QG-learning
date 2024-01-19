### Python的推导式

可用于创建列表、元组、集合或字典

1. **列表推导式**：

```python
numbers = [1, 2, 3, 4, 5]
doubled = [x * 2 for x in numbers]  # 结果：[2, 4, 6, 8, 10]
```
2. **字典推导式**：

```python
numbers = [1, 2, 3, 4, 5]
squares = {x: x ** 2 for x in numbers}  # 结果：{1: 1, 2: 4, 3: 9, 4: 16, 5: 25}
```
3. **集合推导式**：

```python
numbers = [1, 2, 3, 2, 4, 4]
unique_numbers = {x for x in numbers}  # 结果：{1, 2, 3, 4}
```
4. **嵌套的列表推导式**：

```python
rows = [['a', 'b', 'c'], ['d', 'e', 'f'], ['g', 'h', 'i']]
2d_list = [[row[i] for row in rows] for i in range(len(rows[0]))]  # 结果：['a', 'd', 'g', 'b', 'e', 'h', 'c', 'f', 'i']
```